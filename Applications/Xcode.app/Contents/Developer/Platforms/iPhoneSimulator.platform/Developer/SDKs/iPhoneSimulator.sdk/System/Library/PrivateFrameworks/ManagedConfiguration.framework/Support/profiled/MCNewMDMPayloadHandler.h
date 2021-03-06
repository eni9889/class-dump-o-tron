//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class NSMutableDictionary, NSString;

@interface MCNewMDMPayloadHandler : MCNewPayloadHandler
{
    NSMutableDictionary *_setAsideDictionary;
    NSString *_setAsideEscrowSecret;
    _Bool _setAside;
}

- (void).cxx_destruct;
- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;
- (void)remove;
- (void)unsetAside;
- (void)setAside;
- (void)_releaseDependency;
- (void)_retainDependency;
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;
- (id)_cannotCheckInErrorWithName:(id)arg1;

@end

