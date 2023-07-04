// Fill out your copyright notice in the Description page of Project Settings.

#include "controles.h"
#include "Board.h"
#include "EngineUtils.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include <vector>

// Sets default values

ABoard::ABoard()
{
    // Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    PuntosText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("PuntosText"));
    LineasText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("LineasText"));
    TiempoText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TiempoText"));
    BloquesText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("BloquesText"));
}

// Called when the game starts or when spawned
void ABoard::BeginPlay()
{
    Super::BeginPlay();

    for (TActorIterator<APiece> it(GetWorld()); it; ++it)
    {
        if (it->GetFName() == TEXT("DissmissPieces"))
        {
            it->Dismiss();
            it->Destroy();
        }
    }

    PuntosText->SetRelativeLocation(FVector(0.0f, -175.0f, 155.0f));
    PuntosText->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f));
    PuntosText->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
    PuntosText->SetTextRenderColor(FColor::White);
    PuntosText->SetText(FString::Printf(TEXT("Puntos Totales: %i")));

    LineasText->SetRelativeLocation(FVector(0.0f, -175.0f, 105.0f));
    LineasText->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f));
    LineasText->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
    LineasText->SetTextRenderColor(FColor::White);
    LineasText->SetText(FString::Printf(TEXT("Lineas Totales: %i")));

    TiempoText->SetRelativeLocation(FVector(0.0f, -175.0f, 75.0f));
    TiempoText->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f));
    TiempoText->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
    TiempoText->SetTextRenderColor(FColor::White);
    TiempoText->SetText(FString::Printf(TEXT("Tiempo: %i")));

    BloquesText->SetRelativeLocation(FVector (0.0f, -175.0f, 35.0f));
    BloquesText->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f));
    BloquesText->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
    BloquesText->SetTextRenderColor(FColor::White);
    BloquesText->SetText(FString::Printf(TEXT("Bloques: %i")));


}

// Called every frame
void ABoard::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bGameOver)
    {
        return;
    }

    switch (Status)
    {
    case PS_NOT_INITED:

        Inicio();
        // NewPiece();
        CoolLeft = CoolDown;
        Status = PS_MOVING;
        break;
    case PS_MOVING:
        CoolLeft -= DeltaTime;
        if (CoolLeft <= 0.0f)
        {
            MoveDown();
        }
        break;
    case PS_GOT_BOTTOM:

        New->Eliminar();
        NewNew->Eliminar();
        CoolLeft -= DeltaTime;
        if (CoolLeft <= 0.0f)
        {
            if (CurrentPiece)
            {
                CurrentPiece->Dismiss();
                CurrentPiece->Destroy();
            }
            CurrentPiece = nullptr;

            NewPiece();
            CoolLeft = CoolDown;
            Status = PS_MOVING;
        }
        break;
    case GameOver:
            break;
    default:
        break;
        AControles::TiempoJuego += DeltaTime;
        TiempoText->SetText(FString::Printf(TEXT("Tiempo: %i"), int(AControles::TiempoJuego)));
    }
}

// Called to bind functionality to input
void ABoard::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAction("Rotate", IE_Pressed, this, &ABoard::Rotate);
    PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this, &ABoard::MoveLeft);
    PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this, &ABoard::MoveRight);
    PlayerInputComponent->BindAction("MoveDownToEnd", IE_Pressed, this, &ABoard::MoveDownToEnd);
    PlayerInputComponent->BindAction("NewPiece", IE_Pressed, this, &ABoard::NewPiece);
    //PlayerInputComponent->BindAction("CheckLine", IE_Pressed, this, &ABoard::CheckLine);

}

void ABoard::Rotate()
{
    if (CurrentPiece && Status != PS_GOT_BOTTOM)
    {
        CurrentPiece->TestRotate();
    }
}

void ABoard::MoveLeft()
{
    if (CurrentPiece)
    {
        CurrentPiece->MoveLeft();
        if (Status == PS_GOT_BOTTOM)
        {
            MoveDownToEnd();
        }
    }
}

void ABoard::MoveRight()
{
    if (CurrentPiece)
    {
        CurrentPiece->MoveRight();
        if (Status == PS_GOT_BOTTOM)
        {
            MoveDownToEnd();
        }
    }
}

void ABoard::MoveDown()
{
    if (CurrentPiece)
    {
        if (!CurrentPiece->MoveDown())
        {
            Status = PS_GOT_BOTTOM;
        }
        //reinicia el contador
        CoolLeft = CoolDown;
    }
}
//esta fincion solo sirve vuando hay una pieza en el fondo
void ABoard::NewPiece()
{
    CheckLine();
    FVector Loca(0.0, 100.0, 100.0);
    FVector Location(0.0, 5.0, 195.0);
    FVector Loc(0.0, 100.0, 195.0);
    FRotator Rotation(0.0, 0.0, 0.0);
    if (CurrentPiece)
    {
        CurrentPiece->Dismiss();
        CurrentPiece->Destroy();
    }

    int der = New->getIndex();

    CurrentPiece = GetWorld()->SpawnActor<APiece>(Location, Rotation);
    CurrentPiece->setIndex(der);
    CurrentPiece->SpawnBlocks();
    if (New)
    {
        New->Dismiss();
        New->Destroy();

    }

    int dere = NewNew->getIndex();
    New = GetWorld()->SpawnActor<APiece>(Loc, Rotation);
    New->setIndex(dere);
    //New->Index();
    New->SpawnBlocks();
    if (NewNew)
    {
        NewNew->Dismiss();
        NewNew->Destroy();

    }
    NewNew = GetWorld()->SpawnActor<APiece>(Loca, Rotation);
    NewNew->Index();
    NewNew->SpawnBlocks();
    bGameOver = CheckGameOver();
    if (bGameOver)
    {
        UE_LOG(LogTemp, Warning, TEXT("Game Over!!!!!!!!"));
        /*if (GameOverSoundCue)
        {
            UGameplayStatics::PlaySoundAtLocation(GetWorld(), GameOverSoundCue, GetActorLocation(), GetActorRotation());
        }*/
    }
}
void ABoard::Inicio()
{
    FVector Loca(0.0, 100.0, 100.0);
    FVector Loc(0.0, 100.0, 195.0);
    FVector Location(0.0, 5.0, 195.0);
    FRotator Rotation(0.0, 0.0, 0.0);
    NewNew = GetWorld()->SpawnActor<APiece>(Loca, Rotation);
    NewNew->Index();
    NewNew->SpawnBlocks();
    New = GetWorld()->SpawnActor<APiece>(Loc, Rotation);
    New->Index();
    New->SpawnBlocks();
    CurrentPiece = GetWorld()->SpawnActor<APiece>(Location, Rotation);
    CurrentPiece->Index();
    CurrentPiece->SpawnBlocks();



}
void ABoard::CheckLine()
{
    auto MoveDownFromLine = [this](int z) {
        FVector Location(0.0f, 0.0f, 5.0 * z + 100.0);
        FRotator Rotation(0.0f, 0.0f, 0.0f);
        TArray<struct FOverlapResult> OutOverlaps;
        FCollisionShape CollisionShape;
        FVector Extent(4.5f, 49.5f, 95.0 + 4.5 - 5.0 * z);
        CollisionShape.SetBox(Extent);
        DrawDebugBox(GetWorld(), Location, Extent, FColor::Purple, false, 1, 0, 1);
        FCollisionQueryParams Params;
        FCollisionResponseParams ResponseParam;
        if (GetWorld()->OverlapMultiByChannel(OutOverlaps,
            Location, Rotation.Quaternion(), ECollisionChannel::ECC_WorldDynamic,
            CollisionShape, Params, ResponseParam))
        {
            for (auto&& Result : OutOverlaps)
            {
                FVector NewLocation = Result.GetActor()->GetActorLocation();
                NewLocation.Z -= 10.0f;
                Result.GetActor()->SetActorLocation(NewLocation);
            }
        }
    };


    
    int z = 0;
    
    while (z < 20)
    {
        FVector Location(0.0f, 0.0f, 10.0f * z + 5.0f);
        FRotator Rotation(0.0f, 0.0f, 0.0f);
        TArray<struct FOverlapResult> OutOverlaps;
        FCollisionShape CollisionShape;
        CollisionShape.SetBox(FVector(4.0f, 49.0f, 4.0f));
        //DrawDebugBox(GetWorld(), Location, FVector(4.5f, 49.5f, 4.5f), FColor::Purple, false, 1, 0, 1);
        FCollisionQueryParams Params;
        FCollisionResponseParams ResponseParam;
        bool b = GetWorld()->OverlapMultiByChannel(OutOverlaps,
            Location, Rotation.Quaternion(), ECollisionChannel::ECC_WorldDynamic,
            CollisionShape, Params, ResponseParam);
        if (!b || OutOverlaps.Num() < 10)
        {
            ++z;
            continue;
        }
        else // this line is full, remove the line
        {
            UE_LOG(LogTemp, Warning, TEXT("Find FULL LINE at z=%d"), z);
            for (auto&& Result : OutOverlaps)
            {
                Result.GetActor()->Destroy();
            }
            MoveDownFromLine(z);

            AControles::Puntos += 20;
            AControles::Lineas += 1;
            AControles:: Bloques += 10;
            PuntosText->SetText(FString::Printf(TEXT("Puntos Totales: %i"), AControles::Puntos));
            LineasText->SetText(FString::Printf(TEXT("Lineas Totales: %i"), AControles::Lineas));
            BloquesText->SetText(FString::Printf(TEXT("Bloques Totales: %i"), AControles::Bloques));


            /*if (LineRemoveSoundCue)
            {
                UGameplayStatics::PlaySoundAtLocation(GetWorld(), LineRemoveSoundCue, GetActorLocation(), GetActorRotation());
            }*/
        }
    }
}

void ABoard::MoveDownToEnd()
{
    if (!CurrentPiece)
    {
        return;
    }

    while (CurrentPiece->MoveDown())
    {
    }

    /*if (MoveToEndSoundCue)
    {
        UGameplayStatics::PlaySoundAtLocation(GetWorld(), MoveToEndSoundCue, GetActorLocation(), GetActorRotation());
    }*/

    switch (Status)
    {
    case PS_MOVING:
        Status = PS_GOT_BOTTOM;
        CoolLeft = CoolDown;
        break;
    case PS_GOT_BOTTOM:
        break;
    default:
        UE_LOG(LogTemp, Warning, TEXT("Wrong status for MoveDownToEnd"));
        break;
    }
}

bool ABoard::CheckGameOver()
{
    if (!CurrentPiece)
    {
        UE_LOG(LogTemp, Warning, TEXT("NoPieces"));
        return true;
    }

    return CurrentPiece->CheckWillCollision([](FVector OldVector) { return OldVector; });
}
