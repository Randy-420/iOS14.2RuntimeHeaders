/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
 */

@interface KGNodePlaceholder : NSObject <KGNode> {
    unsigned long long  _identifier;
    NSArray * _labels;
    NSDictionary * _properties;
    float  _weight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly, copy) NSArray *labels;
@property (nonatomic, readonly, copy) NSDictionary *properties;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float weight;

- (void).cxx_destruct;
- (void)_setIdentifier:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)identifier;
- (id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4;
- (bool)isResolved;
- (id)labels;
- (id)properties;
- (float)weight;

@end