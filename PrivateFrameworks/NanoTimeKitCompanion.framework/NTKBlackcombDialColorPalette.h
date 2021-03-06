/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBlackcombDialColorPalette : NSObject {
    UIColor * _backgroundColor;
    unsigned long long  _color;
    UIColor * _hourMarkerColor;
    UIColor * _largeHandsColor;
    UIColor * _largeTickColor;
    UIColor * _secondHandColor;
    UIColor * _smallTickColor;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) unsigned long long color;
@property (nonatomic, readonly) UIColor *hourMarkerColor;
@property (nonatomic, readonly) UIColor *largeTickColor;
@property (nonatomic, readonly) UIColor *platterTextColor;
@property (nonatomic, readonly) long long richComplicationViewTheme;
@property (nonatomic, readonly) UIColor *smallTickColor;

+ (id)paletteForColor:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)backgroundColor;
- (unsigned long long)color;
- (id)hourMarkerColor;
- (id)initWithColor:(unsigned long long)arg1;
- (id)largeTickColor;
- (id)platterTextColor;
- (long long)richComplicationViewTheme;
- (id)smallTickColor;

@end
