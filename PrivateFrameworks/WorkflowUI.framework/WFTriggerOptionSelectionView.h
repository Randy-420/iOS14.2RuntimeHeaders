/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFTriggerOptionSelectionView : UIView {
    bool  _highlighted;
    UIImageView * _imageView;
    UILabel * _label;
    WFCircularGlyphView * _selectedView;
    WFCircularGlyphView * _unselectedView;
}

@property (nonatomic) bool highlighted;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic) bool selected;
@property (nonatomic, readonly) WFCircularGlyphView *selectedView;
@property (nonatomic, readonly) WFCircularGlyphView *unselectedView;

+ (double)scaledValueForValue:(double)arg1;

- (void).cxx_destruct;
- (bool)highlighted;
- (id)imageView;
- (id)init;
- (id)label;
- (bool)selected;
- (id)selectedView;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (id)unselectedView;
- (void)updateAlpha;

@end