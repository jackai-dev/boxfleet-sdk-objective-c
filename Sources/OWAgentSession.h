#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

static NSString *const OWAgentSessionSourceSha256 = @"e3fd4c744ae8933c0e0bd0c21a692897795a14657e577fb82108500d39f2ac8d";
static const NSInteger OWAgentSessionOperationsCount = 56;

@interface OWAgentSession : NSObject
@property (nonatomic, readonly) NSInteger maxSteps;
@property (nonatomic, readonly) NSInteger maxToolCalls;
@property (nonatomic, readonly) BOOL allowMutations;
@property (nonatomic, copy, readonly) NSSet<NSString *> *allowedOperations;
- (instancetype)initWithMaxSteps:(NSInteger)maxSteps maxToolCalls:(NSInteger)maxToolCalls allowMutations:(BOOL)allowMutations allowedOperations:(nullable NSSet<NSString *> *)allowed;
- (BOOL)canInvokeOperation:(NSString *)operationId isMutation:(BOOL)isMutation;
- (NSDictionary *)checkpoint;
@end

NS_ASSUME_NONNULL_END
