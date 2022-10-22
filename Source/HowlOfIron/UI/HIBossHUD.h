// Guillermo Suárez
#pragma once

#include "CoreMinimal.h"
#include "UI/HIEnemyHUD.h"
#include "HIBossHUD.generated.h"

UCLASS()
class HOWLOFIRON_API UHIBossHUD : public UHIEnemyHUD
{
   GENERATED_BODY()
public:
   virtual bool Initialize() override;
   virtual void NativePreConstruct() override;
   virtual void NativeConstruct() override;
   virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

public:


protected:


private:
   UPROPERTY()
      bool isVulnerable;

public:
   UFUNCTION(BlueprintCallable, BlueprintPure)
      bool HIGetvulnerability();

   UFUNCTION(BlueprintCallable)
      void HISetvulnerability(bool _vulnerability);

   UFUNCTION(BlueprintImplementableEvent)
      void HIUpdateData();

protected:


private:


};
