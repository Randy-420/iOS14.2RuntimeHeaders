/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTImageUtilities : NSObject

+ (struct CGImage { }*)CGImageFromImage:(id)arg1;
+ (id)cropImage:(id)arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (void)cropImageWhitespace:(id)arg1 upToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 resultBlock:(id /* block */)arg3;
+ (id)imageFromCGImage:(struct CGImage { }*)arg1 scale:(double)arg2;
+ (double)scaleFromImage:(id)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })transparencyInsetsForImage:(id)arg1 requiringFullOpacity:(bool)arg2;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg1;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg1 requiringFullOpacity:(bool)arg2;

@end