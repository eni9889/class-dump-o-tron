//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class PSSpecifier;

@interface AccountPSOutgoingController : PSListController
{
    PSSpecifier *_newOutgoingAccountSpecifier;
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadOutgoingAccounts;
- (void)canceledAccountSetup;
- (void)finishedAccountSetup;
- (id)specifiers;
- (id)specifierForDeliveryAccount:(id)arg1 isPrimary:(_Bool)arg2 isCarrierAccount:(_Bool)arg3;
- (id)_getStatusForServer:(id)arg1;

@end

