/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBIconListModelRepairUtilities : NSObject

+ (bool)_findAndRepairEmptyRows:(id)arg1 gridCellInfo:(id)arg2;
+ (bool)_findAndRepairSingleIconGaps:(id)arg1 gridCellInfo:(id)arg2;
+ (bool)_findAndRepairSmallWidgetGaps:(id)arg1 smallWidgetGridSize:(struct SBHIconGridSize { unsigned short x1; unsigned short x2; })arg2 gridCellInfo:(id)arg3;
+ (id)_firstIconOfSizeClass:(unsigned long long)arg1 withIcons:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
+ (unsigned long long)_maxGridCellIndexWithIconCount:(unsigned long long)arg1 gridCellInfo:(id)arg2;
+ (id)repairModelByEliminatingGapsInIcons:(id)arg1 gridSize:(struct SBHIconGridSize { unsigned short x1; unsigned short x2; })arg2 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; })arg3;

@end