/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class NSCharacterSet, NSMutableArray, NSString;

@interface _HKCFGNonTerminal : _HKCFGExpression {
    NSCharacterSet *_charactersToBeSkipped;
    NSString *_label;
    NSMutableArray *_replacementRules;
}

@property(copy) NSCharacterSet * charactersToBeSkipped;

+ (id)nonTerminalWithLabel:(id)arg1;

- (void).cxx_destruct;
- (void)_checkForCycles:(id)arg1;
- (void)_checkForCycles;
- (void)_invalidate;
- (id)_label;
- (unsigned long long)_minimumLength;
- (id)_parseTreeWithContext:(id)arg1;
- (id)_replacementRules;
- (bool)_tryNodesForExpressions:(id)arg1 nodes:(id)arg2 context:(id)arg3 solutionTest:(id)arg4;
- (void)_tryNodesWithContext:(id)arg1 solutionTest:(id)arg2;
- (void)addReplacementRuleWithExpressions:(id)arg1 nodeEvaluator:(id)arg2;
- (id)charactersToBeSkipped;
- (id)initWithLabel:(id)arg1;
- (void)setCharactersToBeSkipped:(id)arg1;

@end
