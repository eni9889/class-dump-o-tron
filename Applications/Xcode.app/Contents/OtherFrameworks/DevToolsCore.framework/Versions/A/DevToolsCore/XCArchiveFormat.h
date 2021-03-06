//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString;

@interface XCArchiveFormat : NSObject
{
    NSString *_identifier;
    NSString *_minimumVersionSupported;
    unsigned long long _versionNumberForArchiver;
    NSSet *_supportedFeatures;
    NSSet *_archivingTranslations;
}

- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)versionNumberForArchiver;
- (id)displayName;
- (id)identifier;
- (id)minimumVersionSupportedName;
- (id)archivingTranslations;
- (id)supportedFeatures;
- (void)dealloc;
- (id)initWithArchiverVersion:(unsigned long long)arg1 identifier:(id)arg2 minimumVersionSupportedName:(id)arg3 supportedFeatures:(id)arg4 archivingTranslations:(id)arg5;
- (id)init;

@end

