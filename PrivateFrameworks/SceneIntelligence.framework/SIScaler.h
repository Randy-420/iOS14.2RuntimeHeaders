/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
 */

@interface SIScaler : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _inputResolution;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputResolution;
    struct __CVPixelBufferPool { } * _pool;
    struct OpaqueVTPixelTransferSession { } * _session;
}

- (id)initForInputResolution:(struct CGSize { double x1; double x2; })arg1 andOutputResolution:(struct CGSize { double x1; double x2; })arg2;
- (struct __CVBuffer { }*)scaleImage:(struct __CVBuffer { }*)arg1;

@end
