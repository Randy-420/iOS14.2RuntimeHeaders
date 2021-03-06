/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface _PKFakeTapToFocusInfo : NSObject {
    unsigned long long  _actionValue;
    unsigned long long  _controlEvents;
    unsigned long long  _firstSubviewValue;
    unsigned long long  _interactionValue;
    bool  _shouldWaitForFirstResponderChange;
    unsigned long long  _targetValue;
    unsigned long long  _textInputValue;
    long long  _type;
}

@property (nonatomic, readonly) unsigned long long actionValue;
@property (nonatomic) unsigned long long controlEvents;
@property (nonatomic, readonly) unsigned long long firstSubviewValue;
@property (nonatomic, readonly) unsigned long long interactionValue;
@property (nonatomic, readonly) bool shouldWaitForFirstResponderChange;
@property (nonatomic, readonly) unsigned long long targetValue;
@property (nonatomic, readonly) unsigned long long textInputValue;
@property (nonatomic, readonly) long long type;

+ (id)controlInfoWithInteractionValue:(unsigned long long)arg1;
+ (id)controlInfoWithInteractionValue:(unsigned long long)arg1 targetValue:(unsigned long long)arg2 actionValue:(unsigned long long)arg3 controlEvents:(unsigned long long)arg4 textInputValue:(unsigned long long)arg5;
+ (id)controlInfoWithInteractionValue:(unsigned long long)arg1 targetValue:(unsigned long long)arg2 actionValue:(unsigned long long)arg3 controlEvents:(unsigned long long)arg4 textInputValue:(unsigned long long)arg5 shouldWaitForFirstResponderChange:(bool)arg6;
+ (id)tapGestureInfoWithInteractionValue:(unsigned long long)arg1 firstSubviewValue:(unsigned long long)arg2;
+ (id)tapGestureInfoWithInteractionValue:(unsigned long long)arg1 firstSubviewValue:(unsigned long long)arg2 textInputValue:(unsigned long long)arg3;
+ (id)textFieldInfoWithInteractionValue:(unsigned long long)arg1;

- (unsigned long long)actionValue;
- (unsigned long long)controlEvents;
- (unsigned long long)firstSubviewValue;
- (unsigned long long)interactionValue;
- (void)setControlEvents:(unsigned long long)arg1;
- (bool)shouldWaitForFirstResponderChange;
- (unsigned long long)targetValue;
- (unsigned long long)textInputValue;
- (long long)type;

@end
