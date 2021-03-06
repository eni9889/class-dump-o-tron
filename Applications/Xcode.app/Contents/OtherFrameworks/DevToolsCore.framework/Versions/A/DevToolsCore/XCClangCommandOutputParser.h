//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCGenericCommandOutputParser.h>

@class NSMutableArray, NSString;

@interface XCClangCommandOutputParser : XCGenericCommandOutputParser
{
    NSMutableArray *_pendedFileInclusionNoteMessages;
    NSString *_pathForMostRecentIncludedMessage;
    BOOL _pendingMessagesHaveBeenAdded;
    BOOL _warningsBeingTreatedAsErrors;
}

+ (id)messagePatternListDefinitionFilename;
- (BOOL)parseOutputLineBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)willAddLogMessage:(id)arg1;
- (void)dealloc;
- (id)initWithNextOutputStream:(id)arg1;

@end

