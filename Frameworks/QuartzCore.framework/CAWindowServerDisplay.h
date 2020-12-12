/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAWindowServerDisplay : NSObject <CABrightnessControl> {
    struct CAWindowServerDisplayImpl { struct Mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_1_1_1; } x1; struct Server {} *x2; struct CABrightnessTransaction { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; unsigned int x_3_1_5; } x3; } * _impl;
    bool  _mirroringEnabled;
}

@property (copy) NSString *TVMode;
@property (copy) NSString *TVSignalType;
@property bool allowsDisplayCompositing;
@property bool allowsExtendedDynamicRange;
@property bool allowsVirtualModes;
@property struct CGColorTRC { int x1; union { struct CGColorTRCParametric { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; float x_1_2_5; float x_1_2_6; float x_1_2_7; float x_1_2_8; } x_2_1_1; struct CGColorTRCTable { unsigned long long x_2_2_1; float *x_2_2_2; struct CGColorTRCBoundaryExtension { float x_3_3_1; float x_3_3_2; } x_2_2_3; struct CGColorTRCBoundaryExtension { float x_4_3_1; float x_4_3_2; } x_2_2_4; } x_2_1_2; } x2; } blackpointAdaptation;
@property (getter=isBlanked) bool blanked;
@property (retain) struct CGColorSpace { }*blendColorSpace;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) bool brightnessAvailable;
@property (copy) id /* block */ brightnessCallback;
@property (nonatomic, readonly) NSDictionary *brightnessCapabilities;
@property (readonly) struct { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; struct { float x_3_1_1; float x_3_1_2; } x3; struct { float x_4_1_1; float x_4_1_2; } x4; } chromaticities;
@property (readonly) CAWindowServerDisplay *cloneMaster;
@property (readonly) NSSet *clones;
@property (nonatomic, copy) NSString *colorMode;
@property float contrast;
@property (copy) NSDictionary *cursorDictionary;
@property bool cursorEnabled;
@property bool cursorHidden;
@property struct CGPoint { double x1; double x2; } cursorPosition;
@property (retain) struct __IOSurface { }*cursorSurface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDetaching, readonly) bool detaching;
@property (readonly) void*detachingDisplay;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } detachingRect;
@property (readonly) NSString *deviceName;
@property bool disabled;
@property bool disablesUpdates;
@property (retain) struct CGColorSpace { }*displayColorSpace;
@property (readonly) unsigned int displayId;
@property (readonly) long long displayType;
@property bool enabled;
@property (getter=isFlipBookEnabled) bool flipBookEnabled;
@property (readonly) unsigned int framebufferFormat;
@property (readonly) float gamma;
@property (getter=isGrayscale) bool grayscale;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ hotPlugCallback;
@property float idealRefreshRate;
@property bool invertsColors;
@property float maximumBrightness;
@property (readonly) struct CGSize { double x1; double x2; } maximumCursorSize;
@property (readonly) float maximumLuminance;
@property (readonly) double maximumScale;
@property (readonly) unsigned long long maximumSourceRectPixels;
@property (readonly) unsigned long long maximumSourceRectWidth;
@property (readonly) double minimumScale;
@property (readonly) unsigned long long minimumSourceRectSize;
@property (readonly) struct CGSize { double x1; double x2; } minimumVisibleCursorSize;
@property (getter=isMirroringEnabled) bool mirroringEnabled;
@property (readonly) NSString *name;
@property (readonly) struct CGSize { double x1; double x2; } nativeSize;
@property (readonly) bool needsUpdate;
@property (readonly) double nextWakeupTime;
@property float nits;
@property (copy) NSString *orientation;
@property (copy) NSString *overscanAdjustment;
@property double overscanAmount;
@property struct CGSize { double x1; double x2; } overscanAmounts;
@property (readonly) struct CGSize { double x1; double x2; } panelPhysicalSize;
@property (readonly) unsigned long long panelPointsPerInch;
@property (readonly) unsigned long long previousVBL;
@property int processId;
@property (readonly) unsigned int rendererFlags;
@property double scale;
@property (getter=isSecure) bool secure;
@property (readonly) Class superclass;
@property (readonly) bool supportsColorSpaces;
@property (readonly) bool supportsCursor;
@property (readonly) bool supportsExtendedColors;
@property struct CGColorTRC { int x1; union { struct CGColorTRCParametric { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; float x_1_2_5; float x_1_2_6; float x_1_2_7; float x_1_2_8; } x_2_1_1; struct CGColorTRCTable { unsigned long long x_2_2_1; float *x_2_2_2; struct CGColorTRCBoundaryExtension { float x_3_3_1; float x_3_3_2; } x_2_2_3; struct CGColorTRCBoundaryExtension { float x_4_3_1; float x_4_3_2; } x_2_2_4; } x_2_1_2; } x2; } systemGamma;
@property long long tag;
@property (readonly) long long transportType;
@property (readonly) bool tripleBuffered;
@property (readonly) NSString *uniqueId;
@property bool usesPreferredModeRefreshRate;
@property (readonly) unsigned long long vblDelta;
@property (readonly) bool wantedToDetach;
@property (nonatomic, readonly) bool whitePointAvailable;
@property (nonatomic, readonly) bool whitePointD50XYZ;
@property (readonly) struct { float x1; float x2; } whitepoint;

- (id)TVMode;
- (id)TVSignalType;
- (id)_initWithCADisplayServer:(struct Server { int (**x1)(); struct SpinLock { struct { int x_1_2_1; } x_2_1_1; } x2; struct Mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_3_1_1; } x3; id x4; struct Display {} *x5; struct __CFString {} *x6; struct ContextItem {} *x7; unsigned long long x8; unsigned long long x9; struct ContextItem {} *x10; unsigned long long x11; struct SpinLock { struct { int x_1_2_1; } x_12_1_1; } x12; struct PendingOperation {} *x13; struct Context {} *x14; struct Shape {} *x15; unsigned int x16; struct Context {} *x17; struct Renderer {} *x18; struct Bounds { int x_19_1_1; int x_19_1_2; int x_19_1_3; int x_19_1_4; } x19; id /* block */ x20; id /* block */ x21; double x22; double x23; unsigned int x24; unsigned long long x25; double x26; struct __CFDictionary {} *x27; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; }*)arg1;
- (void)abortColorMatrixRamp:(float*)arg1 scale:(float*)arg2;
- (void)abortContrastEnhancerRamp:(float*)arg1;
- (struct __IOSurface { }*)acquireFrozenSurface;
- (void)activateReplay;
- (void)addClone:(id)arg1;
- (void)addClone:(id)arg1 options:(id)arg2;
- (bool)allowsDisplayCompositing;
- (bool)allowsExtendedDynamicRange;
- (bool)allowsVirtualModes;
- (void)beginExternalUpdate:(void*)arg1 usingSoftwareRenderer:(bool)arg2;
- (struct CGColorTRC { int x1; union { struct CGColorTRCParametric { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; float x_1_2_5; float x_1_2_6; float x_1_2_7; float x_1_2_8; } x_2_1_1; struct CGColorTRCTable { unsigned long long x_2_2_1; float *x_2_2_2; struct CGColorTRCBoundaryExtension { float x_3_3_1; float x_3_3_2; } x_2_2_3; struct CGColorTRCBoundaryExtension { float x_4_3_1; float x_4_3_2; } x_2_2_4; } x_2_1_2; } x2; })blackpointAdaptation;
- (struct CGColorSpace { }*)blendColorSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)brightnessAvailable;
- (id /* block */)brightnessCallback;
- (id)brightnessCapabilities;
- (bool)canUpdate:(bool)arg1;
- (bool)canUpdateWithFlags:(unsigned int)arg1;
- (struct { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; struct { float x_3_1_1; float x_3_1_2; } x3; struct { float x_4_1_1; float x_4_1_2; } x4; })chromaticities;
- (unsigned int)clientPortAtPosition:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned int)clientPortOfContextId:(unsigned int)arg1;
- (id)cloneMaster;
- (id)clones;
- (id)colorMode;
- (bool)commitBrightness:(id*)arg1;
- (unsigned int)contextIdAtPosition:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned int)contextIdAtPosition:(struct CGPoint { double x1; double x2; })arg1 excludingContextIds:(id)arg2;
- (float)contrast;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromContextId:(unsigned int)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toContextId:(unsigned int)arg2;
- (void)copyDisplayTimingsFromDisplay:(id)arg1;
- (id)cursorDictionary;
- (bool)cursorEnabled;
- (bool)cursorHidden;
- (struct CGPoint { double x1; double x2; })cursorPosition;
- (struct __IOSurface { }*)cursorSurface;
- (void)dealloc;
- (id)description;
- (void*)detachingDisplay;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })detachingRect;
- (id)deviceName;
- (bool)disabled;
- (bool)disablesUpdates;
- (struct CGColorSpace { }*)displayColorSpace;
- (unsigned int)displayId;
- (long long)displayType;
- (void)emitBrightnessError:(id*)arg1;
- (void)emitWhitePointError:(id*)arg1;
- (bool)enabled;
- (bool)finishExternalUpdate:(void*)arg1 withFlags:(unsigned int)arg2;
- (unsigned int)framebufferFormat;
- (void)freeze;
- (float)gamma;
- (id)hitTestAtPosition:(struct CGPoint { double x1; double x2; })arg1 options:(id)arg2;
- (id /* block */)hotPlugCallback;
- (float)idealRefreshRate;
- (void)invalidate;
- (bool)invertsColors;
- (bool)isBlanked;
- (bool)isDetaching;
- (bool)isFlipBookEnabled;
- (bool)isGrayscale;
- (bool)isMirroringEnabled;
- (bool)isSecure;
- (float)maximumBrightness;
- (struct CGSize { double x1; double x2; })maximumCursorSize;
- (float)maximumLuminance;
- (float)maximumRefreshRate;
- (double)maximumScale;
- (unsigned long long)maximumSourceRectPixels;
- (unsigned long long)maximumSourceRectWidth;
- (float)minimumRefreshRate;
- (double)minimumScale;
- (unsigned long long)minimumSourceRectSize;
- (struct CGSize { double x1; double x2; })minimumVisibleCursorSize;
- (id)name;
- (struct CGSize { double x1; double x2; })nativeSize;
- (bool)needsUpdate;
- (double)nextWakeupTime;
- (float)nits;
- (id)orientation;
- (id)overscanAdjustment;
- (double)overscanAmount;
- (struct CGSize { double x1; double x2; })overscanAmounts;
- (struct CGSize { double x1; double x2; })panelPhysicalSize;
- (unsigned long long)panelPointsPerInch;
- (void)presentSurface:(struct __IOSurface { }*)arg1 withOptions:(id)arg2;
- (unsigned long long)previousVBL;
- (int)processId;
- (void)removeAllClones;
- (void)removeClone:(id)arg1;
- (unsigned int)rendererFlags;
- (double)scale;
- (void)setAccessibilityColorMatrix:(float*)arg1 scale:(float)arg2;
- (void)setAllowsDisplayCompositing:(bool)arg1;
- (void)setAllowsExtendedDynamicRange:(bool)arg1;
- (void)setAllowsVirtualModes:(bool)arg1;
- (void)setAmbient:(float)arg1;
- (void)setBlackpointAdaptation:(struct CGColorTRC { int x1; union { struct CGColorTRCParametric { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; float x_1_2_5; float x_1_2_6; float x_1_2_7; float x_1_2_8; } x_2_1_1; struct CGColorTRCTable { unsigned long long x_2_2_1; float *x_2_2_2; struct CGColorTRCBoundaryExtension { float x_3_3_1; float x_3_3_2; } x_2_2_3; struct CGColorTRCBoundaryExtension { float x_4_3_1; float x_4_3_2; } x_2_2_4; } x_2_1_2; } x2; })arg1;
- (void)setBlanked:(bool)arg1;
- (void)setBlendColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setBrightnessCallback:(id /* block */)arg1;
- (void)setCalibrationPhase:(unsigned int)arg1 forIdentifier:(unsigned int)arg2;
- (void)setColorMatrix:(float*)arg1 scale:(float)arg2 rampDuration:(double)arg3;
- (void)setColorMode:(id)arg1;
- (void)setContrast:(float)arg1;
- (void)setContrastEnhancer:(float)arg1 rampDuration:(double)arg2;
- (void)setCursorDictionary:(id)arg1;
- (void)setCursorEnabled:(bool)arg1;
- (void)setCursorHidden:(bool)arg1;
- (void)setCursorPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCursorSurface:(struct __IOSurface { }*)arg1;
- (bool)setDigitalModes:(id)arg1 withTimings:(id)arg2;
- (void)setDisabled:(bool)arg1;
- (void)setDisablesUpdates:(bool)arg1;
- (void)setDisplayColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFlipBookEnabled:(bool)arg1;
- (void)setGammaAdjustment:(struct CGColorTRC { int x1; union { struct CGColorTRCParametric { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; float x_1_2_5; float x_1_2_6; float x_1_2_7; float x_1_2_8; } x_2_1_1; struct CGColorTRCTable { unsigned long long x_2_2_1; float *x_2_2_2; struct CGColorTRCBoundaryExtension { float x_3_3_1; float x_3_3_2; } x_2_2_3; struct CGColorTRCBoundaryExtension { float x_4_3_1; float x_4_3_2; } x_2_2_4; } x_2_1_2; } x2; })arg1;
- (void)setGrayscale:(bool)arg1;
- (void)setHeadroom:(float)arg1;
- (void)setHotPlugCallback:(id /* block */)arg1;
- (void)setIdealRefreshRate:(float)arg1;
- (void)setInvertsColors:(bool)arg1;
- (void)setMaximumBrightness:(float)arg1;
- (void)setMaximumRefreshRate:(float)arg1;
- (void)setMinimumRefreshRate:(float)arg1;
- (void)setMirroringEnabled:(bool)arg1;
- (void)setNits:(float)arg1;
- (void)setOrientation:(id)arg1;
- (void)setOverscanAdjustment:(id)arg1;
- (void)setOverscanAmount:(double)arg1;
- (void)setOverscanAmounts:(struct CGSize { double x1; double x2; })arg1;
- (void)setPotentialHeadroom:(float)arg1;
- (void)setProcessId:(int)arg1;
- (void)setSDRBrightness:(float)arg1;
- (void)setScale:(double)arg1;
- (void)setSecure:(bool)arg1;
- (void)setSystemGamma:(struct CGColorTRC { int x1; union { struct CGColorTRCParametric { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; float x_1_2_5; float x_1_2_6; float x_1_2_7; float x_1_2_8; } x_2_1_1; struct CGColorTRCTable { unsigned long long x_2_2_1; float *x_2_2_2; struct CGColorTRCBoundaryExtension { float x_3_3_1; float x_3_3_2; } x_2_2_3; struct CGColorTRCBoundaryExtension { float x_4_3_1; float x_4_3_2; } x_2_2_4; } x_2_1_2; } x2; })arg1;
- (void)setTVMode:(id)arg1;
- (void)setTVSignalType:(id)arg1;
- (void)setTag:(long long)arg1;
- (void)setUsesPreferredModeRefreshRate:(bool)arg1;
- (bool)supportsColorSpaces;
- (bool)supportsCursor;
- (bool)supportsExtendedColors;
- (struct CGColorTRC { int x1; union { struct CGColorTRCParametric { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; float x_1_2_5; float x_1_2_6; float x_1_2_7; float x_1_2_8; } x_2_1_1; struct CGColorTRCTable { unsigned long long x_2_2_1; float *x_2_2_2; struct CGColorTRCBoundaryExtension { float x_3_3_1; float x_3_3_2; } x_2_2_3; struct CGColorTRCBoundaryExtension { float x_4_3_1; float x_4_3_2; } x_2_2_4; } x_2_1_2; } x2; })systemGamma;
- (long long)tag;
- (unsigned int)taskNamePortOfContextId:(unsigned int)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transformFromLayerId:(unsigned long long)arg1 inContextId:(unsigned int)arg2;
- (long long)transportType;
- (bool)tripleBuffered;
- (id)uniqueId;
- (void)update;
- (bool)usesPreferredModeRefreshRate;
- (unsigned long long)vblDelta;
- (bool)wantedToDetach;
- (bool)whitePointAvailable;
- (bool)whitePointD50XYZ;
- (struct { float x1; float x2; })whitepoint;
- (void)willUnblank;

@end