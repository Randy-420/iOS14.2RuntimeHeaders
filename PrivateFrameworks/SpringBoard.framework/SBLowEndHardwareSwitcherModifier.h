/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBLowEndHardwareSwitcherModifier : SBSwitcherModifier {
    bool  _floatingAppVisibleOverExclusiveForegroundApp;
    bool  _floatingAppVisibleOverSplitView;
    unsigned long long  _options;
}

- (bool)_shouldResignActiveAppsUnderFloatingApp;
- (bool)_shouldSimplifyForOpenFolder;
- (bool)_shouldSimplifyForWidgetCenterAndLibrary;
- (id)appLayoutsToResignActive;
- (id)handleMainTransitionEvent:(id)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenScale;
- (id)initWithSimplificationOptions:(unsigned long long)arg1;
- (id)keyboardSuppressionMode;
- (double)wallpaperScale;

@end
