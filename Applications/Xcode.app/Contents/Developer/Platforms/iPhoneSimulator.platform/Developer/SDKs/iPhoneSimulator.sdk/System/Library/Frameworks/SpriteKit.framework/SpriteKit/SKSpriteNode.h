//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class SKLightNode, SKShader, SKTexture, UIColor;

@interface SKSpriteNode : SKNode
{
    SKLightNode *_light;
    _Bool _shouldRepeatTexture;
}

+ (id)spriteNodeWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)spriteNodeWithTexture:(id)arg1 normalMap:(id)arg2;
+ (id)spriteNodeWithTexture:(id)arg1 size:(struct CGSize)arg2;
+ (id)spriteNodeWithTexture:(id)arg1;
+ (id)spriteNodeWithImageNamed:(id)arg1 normalMapped:(_Bool)arg2;
+ (id)spriteNodeWithImageNamed:(id)arg1;
@property(nonatomic) _Bool shouldRepeatTexture; // @synthesize shouldRepeatTexture=_shouldRepeatTexture;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToNode:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (_Bool)containsPoint:(struct CGPoint)arg1;
@property(nonatomic) long long blendMode;
@property(nonatomic) unsigned int shadowedBitMask;
@property(nonatomic) unsigned int shadowCastBitMask;
@property(nonatomic) unsigned int lightingBitMask;
@property(nonatomic) struct CGSize repeatTextureSize;
- (void)setRepeatTexture:(_Bool)arg1;
- (_Bool)repeatTexture;
@property(nonatomic) struct CGRect centerRect;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint anchorPoint;
@property(retain, nonatomic) UIColor *color;
@property(nonatomic) double colorBlendFactor;
@property(retain, nonatomic) SKShader *shader;
@property(retain, nonatomic) SKTexture *normalTexture;
@property(retain, nonatomic) SKTexture *texture;
- (id)description;
- (id)initWithTexture:(id)arg1;
- (id)initWithColor:(id)arg1 size:(struct CGSize)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithImageNamed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithTexture:(id)arg1 color:(id)arg2 size:(struct CGSize)arg3;
- (id)_copyImageData;

@end
