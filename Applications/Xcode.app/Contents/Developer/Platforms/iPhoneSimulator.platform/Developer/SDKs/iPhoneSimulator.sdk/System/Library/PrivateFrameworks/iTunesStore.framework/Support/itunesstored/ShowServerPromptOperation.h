//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class NSString;

@interface ShowServerPromptOperation : ISOperation
{
    NSString *_promptIdentifier;
}

- (_Bool)_promptNeedsDisplay;
- (id)_newStoreURLOperation:(id *)arg1;
- (_Bool)_automaticDownloadsPromptNeedsDisplay;
- (void)run;
@property(readonly) NSString *promptIdentifier;
- (void)dealloc;
- (id)initWithPromptIdentifier:(id)arg1;
- (id)init;

@end

