/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVButton : UIControl {
    UIColor * __backgroundColor;
    _TVImageView * _accessoryView;
    int  _backdropStyle;
    BOOL  _blurEnabled;
    float  _cornerRadius;
    NSString * _groupName;
    UIColor * _highlightColor;
    BOOL  _imageTrailsTextContent;
    _TVImageView * _imageView;
    UILabel * _textContentView;
    IKViewElement * _viewElement;
}

@property (nonatomic, retain) _TVImageView *accessoryView;
@property (nonatomic, readonly) int backdropStyle;
@property (nonatomic, readonly) BOOL blurEnabled;
@property (nonatomic) float cornerRadius;
@property (getter=isDisabled, nonatomic) BOOL disabled;
@property (nonatomic, retain) NSString *groupName;
@property (nonatomic, copy) UIColor *highlightColor;
@property (nonatomic) BOOL imageTrailsTextContent;
@property (nonatomic, retain) _TVImageView *imageView;
@property (nonatomic, retain) UILabel *textContentView;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (float)_imageMarginFromText;
- (void)_playButtonAction:(id)arg1;
- (void)_selectButtonAction:(id)arg1;
- (void)_setFocused:(BOOL)arg1 animationCoordinator:(id)arg2;
- (void)_updateBackgroundColorForState:(unsigned int)arg1;
- (id)accessoryView;
- (int)backdropStyle;
- (id)backgroundColor;
- (BOOL)blurEnabled;
- (BOOL)canBecomeFocused;
- (float)cornerRadius;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)groupName;
- (id)highlightColor;
- (BOOL)imageTrailsTextContent;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 blurEffectStyle:(int)arg2 blurEnabled:(BOOL)arg3;
- (BOOL)isDisabled;
- (void)layoutSubviews;
- (void)setAccessoryView:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentMotionRotation:(struct CGPoint { float x1; float x2; })arg1 translation:(struct CGPoint { float x1; float x2; })arg2;
- (void)setCornerRadius:(float)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setGroupName:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImageTrailsTextContent:(BOOL)arg1;
- (void)setImageView:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (void)setTextContentView:(id)arg1;
- (void)setViewElement:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)textContentView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePreferredFocusedViewStateForFocus:(BOOL)arg1;
- (id)viewElement;

@end