/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFActionNaturalLanguageOptions : HFSubstringNaturalLanguageOptions {
    HMHome * _home;
    NSSet * _objectsInContext;
    bool  _useMediaContainersNotInContext;
}

@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) NSSet *objectsInContext;
@property (nonatomic) bool useMediaContainersNotInContext;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)initWithHome:(id)arg1 formattingContext:(long long)arg2;
- (id)objectsInContext;
- (void)setHome:(id)arg1;
- (void)setObjectsInContext:(id)arg1;
- (void)setUseMediaContainersNotInContext:(bool)arg1;
- (bool)useMediaContainersNotInContext;

@end