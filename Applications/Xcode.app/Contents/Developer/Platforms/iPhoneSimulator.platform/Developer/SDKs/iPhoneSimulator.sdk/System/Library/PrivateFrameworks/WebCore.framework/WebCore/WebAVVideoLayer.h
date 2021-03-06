//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "AVVideoLayer.h"

__attribute__((visibility("hidden")))
@interface WebAVVideoLayer : CALayer <AVVideoLayer>
{
    struct RetainPtr<WebAVPlayerController> _avPlayerController;
    struct RetainPtr<AVPlayerViewController> _avPlayerViewController;
    long long _videoLayerGravity;
    _Bool _readyForDisplay;
    struct CGRect _videoRect;
}

+ (id)videoLayer;
@property(nonatomic) struct CGRect videoRect; // @synthesize videoRect=_videoRect;
@property(nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) long long videoLayerGravity;
- (void)setBounds:(struct CGRect)arg1;
- (void)setPlayerViewController:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (id)init;

@end

