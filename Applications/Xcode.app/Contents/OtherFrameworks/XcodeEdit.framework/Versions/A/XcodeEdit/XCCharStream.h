//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, PBXCheapReusableSubstring;

@interface XCCharStream : NSObject
{
    void *_buff;
    BOOL _isAtBOL;
    BOOL _isAtColumnZero;
    BOOL _BOLIsKnown;
    BOOL _SeenOneCharAtBOL;
    BOOL _SeenWhitespaceAtBOL;
    NSString *_realString;
    PBXCheapReusableSubstring *_cheapString;
    NSMutableArray *_savedTokens;
}

+ (void)initialize;
- (id)savedToken;
- (BOOL)hasSavedTokens;
- (void)saveToken:(id)arg1;
- (id)stringWithRange:(struct _NSRange)arg1;
- (unsigned long long)locationOfNewlineFrom:(unsigned long long)arg1 searchBackwards:(BOOL)arg2;
- (unsigned long long)peekCharacterInSet:(id)arg1;
- (unsigned short)peekCharSkippingWhitespace;
- (unsigned short)peekChar;
- (BOOL)isAtColumnZero;
- (BOOL)isAtBOL;
- (void)_computeBOL;
- (unsigned short)nextCharSkippingWhitespace;
- (unsigned short)nextChar;
- (void)setLocation:(unsigned long long)arg1;
- (unsigned long long)location;
- (unsigned long long)length;
- (id)string;
- (void)setString:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end

