//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNumber.h"

@interface NSNumber (JavaAppleScriptEngineAdditions)
+ (id)numberWithAEDesc:(id)arg1;
+ (id)jaseNumberWithSignedIntP:(void *)arg1 byteCount:(int)arg2;
+ (id)jaseNumberWithUnsignedIntP:(void *)arg1 byteCount:(int)arg2;
+ (id)jaseNumberWithFloatP:(void *)arg1 byteCount:(int)arg2;
- (id)jaseDescriptorValueWithFloatP:(void *)arg1 byteCount:(int)arg2;
- (id)jaseDescriptorValueWithSignedIntP:(void *)arg1 byteCount:(int)arg2;
- (id)jaseDescriptorValueWithUnsignedIntP:(void *)arg1 byteCount:(int)arg2;
- (id)aeDescriptorValue;
@end

