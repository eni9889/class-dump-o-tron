//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTTextStorage.h"

@class NSMutableDictionary;

@interface XRTextStorage : DVTTextStorage
{
    NSMutableDictionary *_links;
}

- (void)fixSyntaxColoringInRange:(struct _NSRange)arg1;
- (void)removeAllLinks;
- (void)removeLinkForRange:(struct _NSRange)arg1;
- (void)addLink:(id)arg1 forRange:(struct _NSRange)arg2;
- (void)dealloc;

@end
