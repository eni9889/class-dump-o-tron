//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import "KeychainSyncPhoneSettingsFragmentDelegate.h"
#import "KeychainSyncViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class KeychainSyncCountryInfo, KeychainSyncDevicePINController, KeychainSyncPhoneSettingsFragment, NSArray, NSString, PSKeychainSyncManager, PSSetupController, PSSpecifier, UIAlertView;

@interface PSAccountSecurityController : PSListController <KeychainSyncViewControllerDelegate, KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate>
{
    PSSpecifier *_recoverySwitch;
    NSArray *_passcodeSpecifiers;
    PSSetupController *_devicePasscodeChangeSetupController;
    KeychainSyncDevicePINController *_devicePINController;
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;
    NSString *_SMSTarget;
    KeychainSyncCountryInfo *_SMSTargetCountryInfo;
    _Bool _secureBackupEnabled;
    PSKeychainSyncManager *_manager;
    UIAlertView *_invalidPhoneNumberAlert;
    UIAlertView *_changeDevicePasscodeAlert;
    UIAlertView *_disableRecoveryConfirmationAlert;
    int _securityCodeType;
    NSString *_securityCode;
}

@property(retain, nonatomic) NSString *securityCode; // @synthesize securityCode=_securityCode;
@property(nonatomic) int securityCodeType; // @synthesize securityCodeType=_securityCodeType;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cancelPressed;
- (void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (void)_setShowsDoneButton:(_Bool)arg1;
- (void)navDonePressed;
- (void)navCancelPressed;
- (void)saveSMSTargetChanges;
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)handleBurnedRecord;
- (id)useRecoveryForSepecifier:(id)arg1;
- (void)setUseRecovery:(id)arg1 specifier:(id)arg2;
- (void)disableRecovery;
- (void)changeSecurityCode:(id)arg1;
- (void)_showSecurityCodeChangeSheetOnSpecifier:(id)arg1;
- (void)reloadSpecifiers;
- (id)specifiers;
- (id)passcodeSpecifiers;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

