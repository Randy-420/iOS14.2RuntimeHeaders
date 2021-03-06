/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKImagesView : TLKView <NUIContainerViewDelegate> {
    NSMutableArray * _imageViews;
    NSArray * _images;
    bool  _paddingDisabled;
}

@property (nonatomic, retain) NUIContainerStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *imageViews;
@property (nonatomic, retain) NSArray *images;
@property (getter=isPaddingDisabled, nonatomic) bool paddingDisabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (id)imageViews;
- (id)images;
- (bool)isPaddingDisabled;
- (void)observedPropertiesChanged;
- (void)setImageViews:(id)arg1;
- (void)setImages:(id)arg1;
- (void)setPaddingDisabled:(bool)arg1;
- (id)setupContentView;
- (void)updateForPaddingDisabled:(bool)arg1;
- (void)updateWithImages:(id)arg1;
- (bool)usesDefaultLayoutMargins;

@end
