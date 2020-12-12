/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICommand : UIMenuElement <_UIMenuLeaf> {
    id  __target;
    SEL  _action;
    NSArray * _alternates;
    unsigned long long  _attributes;
    NSString * _discoverabilityTitle;
    id  _propertyList;
    long long  _state;
}

@property (nonatomic, readonly) NSString *_sf_commandSource;
@property (nonatomic, readonly) id _target;
@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) NSArray *alternates;
@property (nonatomic) unsigned long long attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *discoverabilityTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, readonly) id propertyList;
@property (nonatomic, readonly) bool requiresAuthenticatedInput;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_defaultCommandForAction:(SEL)arg1;
+ (id)_defaultCommands;
+ (id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4;
+ (id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5;
+ (id)commandWithTitle:(id)arg1 imageName:(id)arg2 action:(SEL)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (void)_acceptMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3 deferredElementVisit:(id /* block */)arg4;
- (void)_acceptMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (id)_alternateForModifierFlags:(long long)arg1;
- (id)_identifier;
- (id)_immutableCopy;
- (bool)_isDefaultCommand;
- (id)_leafAlternates;
- (id)_leafKeyInput;
- (long long)_leafKeyModifierFlags;
- (void)_performWithTarget:(id)arg1;
- (id)_resolvedTargetFromFirstTarget:(id)arg1;
- (id)_target;
- (id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;
- (SEL)action;
- (id)alternates;
- (unsigned long long)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)discoverabilityTitle;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommand:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5 discoverabilityTitle:(id)arg6 attributes:(unsigned long long)arg7 state:(long long)arg8;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3 action:(SEL)arg4 propertyList:(id)arg5 alternates:(id)arg6 discoverabilityTitle:(id)arg7 attributes:(unsigned long long)arg8 state:(long long)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isLeaf;
- (id)propertyList;
- (bool)requiresAuthenticatedInput;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setDiscoverabilityTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)state;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)_sf_commandSource;

@end