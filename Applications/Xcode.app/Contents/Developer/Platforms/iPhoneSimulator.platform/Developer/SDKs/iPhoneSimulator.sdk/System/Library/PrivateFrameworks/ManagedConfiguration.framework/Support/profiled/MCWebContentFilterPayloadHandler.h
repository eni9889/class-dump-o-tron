//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@interface MCWebContentFilterPayloadHandler : MCNewPayloadHandler
{
}

+ (id)internalError;
- (void)remove;
- (void)unsetAside;
- (void)setAside;
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;
- (void)_removeDependency;
- (void)_installDependency;

@end
