//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableString, NSString;

@protocol DYFunctionTracerDelegate <NSObject>

@optional
- (NSMutableString *)constructTraceLineWithFunction:(const struct Function *)arg1 arguments:(NSArray *)arg2;
- (NSString *)rewriteArgument:(const struct Argument *)arg1;
- (NSString *)rewriteReceiver:(unsigned long long)arg1;
- (NSString *)rewriteURL:(const char *)arg1;
- (NSString *)rewriteVariable:(const char *)arg1 receiver:(unsigned long long)arg2;
@end

