/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWDeepFusionProcessorControllerConfiguration : BWStillImageProcessorConfiguration {
    BWVideoFormat * _inputFormat;
    bool  _semanticRenderingEnabled;
    int  _stillImageFusionScheme;
}

@property (nonatomic, retain) BWVideoFormat *inputFormat;
@property (nonatomic) bool semanticRenderingEnabled;
@property (nonatomic) int stillImageFusionScheme;

- (void)dealloc;
- (id)inputFormat;
- (bool)semanticRenderingEnabled;
- (void)setInputFormat:(id)arg1;
- (void)setSemanticRenderingEnabled:(bool)arg1;
- (void)setStillImageFusionScheme:(int)arg1;
- (int)stillImageFusionScheme;

@end
