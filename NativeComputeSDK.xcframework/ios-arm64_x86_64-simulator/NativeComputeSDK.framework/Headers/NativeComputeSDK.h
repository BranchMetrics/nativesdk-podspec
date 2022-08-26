#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NCSDKWorkflowDependencyNode, NCSDKWorkflowDependencyNodeCompanion, NCSDKWorkflowDefinition, NCSDKKotlinThrowable, NCSDKKotlinEnumCompanion, NCSDKKotlinEnum<E>, NCSDKLoopActionCollect, NCSDKKotlinArray<T>, NCSDKMapExpression, NCSDKLoopActionLoopMode, NCSDKLoopActionResultOrder, NCSDKLoopActionLoopActionContext, NCSDKGlobalPreludeFactory, NCSDKRecognizerCompanion, NCSDKRuleContext, NCSDKRecognitionException, NCSDKATN, NCSDKParseInfo, NCSDKRecognizer<Symbol, ATNInterpreter>, NCSDKLexerCompanion, NCSDKLexerNoViableAltException, NCSDKIntegerStack, NCSDKKotlinPair<__covariant A, __covariant B>, NCSDKLexerATNSimulator, NCSDKLexer, NCSDKExpressionLexerCompanion, NCSDKExpressionLexerChannels, NCSDKVocabularyImpl, NCSDKDFA, NCSDKPredictionContextCache, NCSDKExpressionLexerModes, NCSDKExpressionLexerRules, NCSDKExpressionLexerTokens, NCSDKParserRuleContext, NCSDKIntervalSet, NCSDKParserATNSimulator, NCSDKParser, NCSDKExpressionParserCompanion, NCSDKExpressionParserAdditiveExpressionContext, NCSDKExpressionParserAdditiveOperatorContext, NCSDKExpressionParserCollectionLiteralContext, NCSDKExpressionParserComparisonContext, NCSDKExpressionParserComparisonOperatorContext, NCSDKExpressionParserConjunctionContext, NCSDKExpressionParserDisjunctionContext, NCSDKExpressionParserElvisContext, NCSDKExpressionParserElvisExpressionContext, NCSDKExpressionParserEqualityContext, NCSDKExpressionParserEqualityOperatorContext, NCSDKExpressionParserExclContext, NCSDKExpressionParserExponentExpressionContext, NCSDKExpressionParserExponentOperatorContext, NCSDKExpressionParserExpressionContext, NCSDKExpressionParserIfExpressionContext, NCSDKExpressionParserIndexingSuffixContext, NCSDKExpressionParserInfixFunctionCallContext, NCSDKExpressionParserLambdaContext, NCSDKExpressionParserLineStringContentContext, NCSDKExpressionParserLineStringLiteralContext, NCSDKExpressionParserLiteralConstantContext, NCSDKExpressionParserMapKeyContext, NCSDKExpressionParserMemberAccessOperatorContext, NCSDKExpressionParserMultiplicativeExpressionContext, NCSDKExpressionParserMultiplicativeOperatorContext, NCSDKExpressionParserNavigationSuffixContext, NCSDKExpressionParserObjectLiteralContext, NCSDKExpressionParserParenthesizedExpressionContext, NCSDKExpressionParserPostfixUnaryExpressionContext, NCSDKExpressionParserPostfixUnarySuffixContext, NCSDKExpressionParserPrefixUnaryExpressionContext, NCSDKExpressionParserPrefixUnaryOperatorContext, NCSDKExpressionParserPrimaryExpressionContext, NCSDKExpressionParserSimpleIdentifierContext, NCSDKExpressionParserStatementContext, NCSDKExpressionParserStringLiteralContext, NCSDKExpressionParserUnaryPrefixContext, NCSDKExpressionParserValueArgumentsContext, NCSDKInterval, NCSDKType, NCSDKPosition, NCSDKExpressionParserRules, NCSDKExpressionParserTokens, NCSDKExpressionParserSolver, NCSDKWorkflowResult, NCSDKExpressionContext, NCSDKExpression, NCSDKWorkflowProps, NCSDKDagNode, NCSDKIdentifierExpression, NCSDKKotlinException, NCSDKKotlinRuntimeException, NCSDKKotlinIllegalStateException, NCSDKImmutableWorkflowRegistryCompanion, NCSDKImmutableWorkflowRegistry, NCSDKMemberAccessExpression, NCSDKNestedScope, NCSDKWorkflowLoggerLevel, NCSDKNoOpWorkflowLogger, NCSDKNoOpWorkflowLoggerWriter, NCSDKNullExpression, NCSDKScopeCompanion, NCSDKKotlinRegex, NCSDKSimpleMatcher, NCSDKSimpleScope, NCSDKStdoutWorkflowLoggerCompanion, NCSDKValue, NCSDKValueFuncValue, NCSDKWorkflowContextCompanion, NCSDKWorkflowMessage, NCSDKWorkflowMessageCompleted, NCSDKWorkflowMessageError, NCSDKWorkflowMessageProgress, NCSDKWorkflowMessageSkipped, NCSDKWorkflowMessageWorkflowEvent, NCSDKWorkflowStateCompanion, NCSDKKotlinx_serialization_jsonJsonElement, NCSDKJobDefinitionCompanion, NCSDKJobDefinition, NCSDKWorkflowDefinitionCompanion, NCSDKArrays, NCSDKKotlinIntArray, NCSDKBitSet, NCSDKCollections, NCSDKMath, NCSDKUuidUuid, NCSDKUUIDCompanion, NCSDKUUID, NCSDKATNConfig, NCSDKANTLRInputStreamCompanion, NCSDKKotlinCharArray, NCSDKANTLRInputStream, NCSDKANTLRFileStreamCompanion, NCSDKANTLRFileStream, NCSDKFailedPredicateException, NCSDKInputMismatchException, NCSDKNoViableAltException, NCSDKDefaultErrorStrategy, NCSDKCharStreamCompanion, NCSDKAbstractCharStreams, NCSDKCharStreams, NCSDKPoint, NCSDKCommonTokenCompanion, NCSDKCommonTokenFactoryCompanion, NCSDKCommonToken, NCSDKBufferedTokenStream, NCSDKBaseErrorListener, NCSDKConsoleErrorListenerCompanion, NCSDKConsoleErrorListener, NCSDKIntStreamCompanion, NCSDKRuntimeMetaData, NCSDKTokenCompanion, NCSDKTokenStreamRewriterCompanion, NCSDKTokenStreamRewriterRewriteOperation, NCSDKTokenStreamRewriter, NCSDKKotlinStringBuilder, NCSDKVocabularyImplCompanion, NCSDKIntegerList, NCSDKIntegerListCompanion, NCSDKInterpreterDataReader, NCSDKIntervalCompanion, NCSDKIntervalSetCompanion, NCSDKMurmurHash, NCSDKAbstractEqualityComparator<__contravariant T>, NCSDKObjectEqualityComparatorCompanion, NCSDKObjectEqualityComparator<__contravariant T>, NCSDKPlatform, NCSDKUtils, NCSDKDecisionState, NCSDKDFAState, NCSDKLexerActionExecutor, NCSDKDFAStatePredPrediction, NCSDKSemanticContext, NCSDKDFASerializer, NCSDKATNType, NCSDKATNCompanion, NCSDKATNState, NCSDKTokensStartState, NCSDKRuleStartState, NCSDKRuleStopState, NCSDKPredictionContext, NCSDKATNConfigCompanion, NCSDKATNDeserializationOptions, NCSDKATNDeserializationOptionsCompanion, NCSDKATNDeserializerCompanion, NCSDKTransition, NCSDKLexerActionType, NCSDKATNSimulatorCompanion, NCSDKATNStateCompanion, NCSDKTransitionCompanion, NCSDKDecisionEventInfo, NCSDKPredictionContextCompanion, NCSDKSingletonPredictionContext, NCSDKBlockEndState, NCSDKBlockStartState, NCSDKCodePointTransitions, NCSDKLookaheadEventInfo, NCSDKAmbiguityInfo, NCSDKContextSensitivityInfo, NCSDKErrorInfo, NCSDKPredicateEvalInfo, NCSDKSingletonPredictionContextCompanion, NCSDKLL1AnalyzerCompanion, NCSDKLexerATNConfig, NCSDKATNSimulator, NCSDKLexerATNSimulatorCompanion, NCSDKLexerATNSimulatorSimState, NCSDKLexerActionExecutorCompanion, NCSDKLexerMoreActionCompanion, NCSDKLexerMoreAction, NCSDKLexerPopModeActionCompanion, NCSDKLexerPopModeAction, NCSDKLexerSkipActionCompanion, NCSDKLexerSkipAction, NCSDKSetTransition, NCSDKProfilingATNSimulator, NCSDKDecisionInfo, NCSDKParserATNSimulatorCompanion, NCSDKActionTransition, NCSDKPrecedencePredicateTransition, NCSDKPredicateTransition, NCSDKRuleTransition, NCSDKDoubleKeyMap<Key1, Key2, Value>, NCSDKPredictionMode, NCSDKPlusLoopbackState, NCSDKAbstractPredicateTransition, NCSDKSemanticContextPrecedencePredicate, NCSDKSemanticContextPredicate, NCSDKArrayPredictionContext, NCSDKEmptyPredictionContext, NCSDKPredictionModeCompanion, NCSDKSemanticContextCompanion, NCSDKSemanticContextOperator, NCSDKStarLoopbackState, NCSDKStarLoopEntryState, NCSDKTerminalNodeImpl, NCSDKParseTreeWalkerCompanion, NCSDKParseTreeWalker, NCSDKTrees, NCSDKParseTreePattern, NCSDKParseTreePatternMatcher, NCSDKParseTreeMatch, NCSDKRuleTagToken, NCSDKKotlinByteArray, NCSDKDBFieldTypes, NCSDKDatabaseName, NCSDKSqliter_driverDatabaseConfiguration, NCSDKKtor_utilsTypeInfo, NCSDKHttpResponse<T>, NCSDKMethod, NCSDKKtor_client_coreHttpClient, NCSDKKtorHttpClientCompanion, NCSDKDynamicDatabaseAction, NCSDKKotlinx_datetimeInstant, NCSDKNetworkActionNetworkActionInput, NCSDKMode, NCSDKSchemaUpdateRequest, NCSDKNativeCompute, NCSDKSchemaRequestInput, NCSDKActionTypeCompanion, NCSDKActionType, NCSDKUrlAction, NCSDKConfigSetActionCompanion, NCSDKConfigSetAction, NCSDKStatement, NCSDKDatabaseActionCompanion, NCSDKDatabaseAction, NCSDKDatabaseInfoCompanion, NCSDKDatabaseInfo, NCSDKDefinitionActionCompanion, NCSDKDefinitionAction, NCSDKInterfaceActionCompanion, NCSDKInterfaceAction, NCSDKMigrations, NCSDKSchemaUpdateResponse, NCSDKVersionedSetInfo, NCSDKSchemaUpdateRequestCompanion, NCSDKWorkflowSetAction, NCSDKSettings, NCSDKSchemaUpdateResponseCompanion, NCSDKSettingsCompanion, NCSDKStatementCompanion, NCSDKUrlActionCompanion, NCSDKVersionedSetInfoCompanion, NCSDKWorkflowSetActionCompanion, NCSDKConfigurationsDatabaseMigration, NCSDKEventsDatabaseMigration, NCSDKSchemaDatabaseMigration, NCSDKSettingsMigrationCompanion, NCSDKWorkflowSetMigration, NCSDKKotlinx_serialization_jsonJson, NCSDKKotlinxJsonCompanion, NCSDKKotlinx_serialization_jsonJsonElementCompanion, NCSDKKotlinx_serialization_jsonJsonPrimitiveCompanion, NCSDKKotlinx_serialization_jsonJsonPrimitive, NCSDKKotlinCharCompanion, NCSDKKotlinCharIterator, NCSDKKotlinx_coroutines_coreCoroutineDispatcher, NCSDKKotlinx_serialization_coreSerializersModule, NCSDKKotlinx_serialization_coreSerialKind, NCSDKKotlinNothing, NCSDKKotlinRegexOption, NCSDKKotlinRegexCompanion, NCSDKKotlinCancellationException, NCSDKKotlinIntIterator, NCSDKKotlinByteIterator, NCSDKSqliter_driverFieldType, NCSDKSqliter_driverJournalMode, NCSDKSqliter_driverDatabaseConfigurationExtended, NCSDKSqliter_driverDatabaseConfigurationLogging, NCSDKSqliter_driverDatabaseConfigurationLifecycle, NCSDKSqliter_driverDatabaseConfigurationEncryption, NCSDKKtor_client_coreHttpClientEngineConfig, NCSDKKtor_client_coreHttpClientConfig<T>, NCSDKKtor_eventsEvents, NCSDKKtor_client_coreHttpReceivePipeline, NCSDKKtor_client_coreHttpRequestPipeline, NCSDKKtor_client_coreHttpResponsePipeline, NCSDKKtor_client_coreHttpSendPipeline, NCSDKKotlinx_datetimeInstantCompanion, NCSDKKotlinx_serialization_jsonJsonDefault, NCSDKKotlinx_serialization_jsonJsonConfiguration, NCSDKKotlinAbstractCoroutineContextElement, NCSDKKotlinx_coroutines_coreCoroutineDispatcherKey, NCSDKKotlinMatchResultDestructured, NCSDKKotlinIntRange, NCSDKSqliter_driverFieldTypeCompanion, NCSDKSqliter_driverJournalModeCompanion, NCSDKSqliter_driverSynchronousFlag, NCSDKKotlinKTypeProjection, NCSDKKtor_client_coreHttpRequestData, NCSDKKtor_client_coreHttpResponseData, NCSDKKtor_client_coreProxyConfig, NCSDKKtor_utilsAttributeKey<T>, NCSDKKtor_eventsEventDefinition<T>, NCSDKKtor_utilsPipelinePhase, NCSDKKtor_utilsPipeline<TSubject, TContext>, NCSDKKtor_client_coreHttpReceivePipelinePhases, NCSDKKtor_client_coreHttpResponse, NCSDKKotlinUnit, NCSDKKtor_client_coreHttpRequestPipelinePhases, NCSDKKtor_client_coreHttpRequestBuilder, NCSDKKtor_client_coreHttpResponsePipelinePhases, NCSDKKtor_client_coreHttpResponseContainer, NCSDKKtor_client_coreHttpClientCall, NCSDKKtor_client_coreHttpSendPipelinePhases, NCSDKKotlinAbstractCoroutineContextKey<B, E>, NCSDKKotlinMatchGroup, NCSDKKotlinIntProgressionCompanion, NCSDKKotlinIntProgression, NCSDKKotlinIntRangeCompanion, NCSDKKotlinx_coroutines_coreAtomicDesc, NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, NCSDKKotlinKVariance, NCSDKKotlinKTypeProjectionCompanion, NCSDKKtor_httpUrl, NCSDKKtor_httpHttpMethod, NCSDKKtor_httpOutgoingContent, NCSDKKtor_httpHttpStatusCode, NCSDKKtor_utilsGMTDate, NCSDKKtor_httpHttpProtocolVersion, NCSDKKtor_httpHeadersBuilder, NCSDKKtor_client_coreHttpRequestBuilderCompanion, NCSDKKtor_httpURLBuilder, NCSDKKtor_client_coreHttpClientCallCompanion, NCSDKKotlinx_coroutines_coreAtomicOp<__contravariant T>, NCSDKKotlinx_coroutines_coreOpDescriptor, NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode, NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, NCSDKKtor_httpUrlCompanion, NCSDKKtor_httpURLProtocol, NCSDKKtor_httpHttpMethodCompanion, NCSDKKtor_httpContentType, NCSDKKtor_httpHttpStatusCodeCompanion, NCSDKKtor_utilsGMTDateCompanion, NCSDKKtor_utilsWeekDay, NCSDKKtor_utilsMonth, NCSDKKtor_httpHttpProtocolVersionCompanion, NCSDKKtor_ioMemory, NCSDKKtor_ioChunkBuffer, NCSDKKtor_ioBuffer, NCSDKKtor_ioByteReadPacket, NCSDKKtor_utilsStringValuesBuilderImpl, NCSDKKtor_httpURLBuilderCompanion, NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>, NCSDKKtor_httpURLProtocolCompanion, NCSDKKtor_httpHeaderValueParam, NCSDKKtor_httpHeaderValueWithParametersCompanion, NCSDKKtor_httpHeaderValueWithParameters, NCSDKKtor_httpContentTypeCompanion, NCSDKKtor_utilsWeekDayCompanion, NCSDKKtor_utilsMonthCompanion, NCSDKKtor_ioMemoryCompanion, NCSDKKtor_ioBufferCompanion, NCSDKKtor_ioChunkBufferCompanion, NCSDKKtor_ioInputCompanion, NCSDKKtor_ioInput, NCSDKKtor_ioByteReadPacketCompanion;

@protocol NCSDKWorkflowContext, NCSDKAction, NCSDKWorkflowLogger, NCSDKKotlinComparable, NCSDKWorkflowRegistry, NCSDKWorkflow, NCSDKPreludeFactory, NCSDKANTLRErrorListener, NCSDKIntStream, NCSDKToken, NCSDKTokenFactory, NCSDKVocabulary, NCSDKCharStream, NCSDKTokenSource, NCSDKTokenStream, NCSDKParseTreeListener, NCSDKErrorNode, NCSDKTerminalNode, NCSDKANTLRErrorStrategy, NCSDKParseTreeVisitor, NCSDKParseTree, NCSDKTree, NCSDKSyntaxTree, NCSDKRuleNode, NCSDKKotlinKClass, NCSDKTypeDeclarator, NCSDKKotlinx_serialization_coreEncoder, NCSDKKotlinx_serialization_coreSerialDescriptor, NCSDKKotlinx_serialization_coreSerializationStrategy, NCSDKKotlinx_serialization_coreDecoder, NCSDKKotlinx_serialization_coreDeserializationStrategy, NCSDKKotlinx_serialization_coreKSerializer, NCSDKScope, NCSDKParser, NCSDKPreludeRegistry, NCSDKMutablePreludeRegistry, NCSDKWorkflowLoggerWriter, NCSDKMatcher, NCSDKKotlinSuspendFunction1, NCSDKMutableWorkflowRegistry, NCSDKKotlinx_coroutines_coreCoroutineScope, NCSDKKotlinx_coroutines_coreReceiveChannel, NCSDKKotlinx_coroutines_coreDeferred, NCSDKKotlinx_coroutines_coreSendChannel, NCSDKWritableToken, NCSDKNode, NCSDKEqualityComparator, NCSDKIntSet, NCSDKLexerAction, NCSDKPredicate, NCSDKStatement, NCSDKCloseable_, NCSDKConnection, NCSDKSqliter_driverDatabaseConnection, NCSDKCursor, NCSDKSqliter_driverCursor, NCSDKDatabaseDriver, NCSDKSqliterDatabaseConfigurationFactory, NCSDKSqliter_driverStatement, NCSDKHttpRequest, NCSDKHttpClientProxy, NCSDKJsonSerDe, NCSDKBaseHttpRequestBody, NCSDKBaseHttpResponseBody, NCSDKBranchService, NCSDKDatabaseMigration, NCSDKKotlinIterator, NCSDKKotlinx_coroutines_coreChannel, NCSDKKotlinSuspendFunction2, NCSDKKotlinSuspendFunction3, NCSDKCloseable, NCSDKKotlinKDeclarationContainer, NCSDKKotlinKAnnotatedElement, NCSDKKotlinKClassifier, NCSDKKotlinx_serialization_coreCompositeEncoder, NCSDKKotlinAnnotation, NCSDKKotlinx_serialization_coreCompositeDecoder, NCSDKKotlinMatchResult, NCSDKKotlinSequence, NCSDKKotlinFunction, NCSDKKotlinCoroutineContext, NCSDKKotlinx_coroutines_coreChannelIterator, NCSDKKotlinx_coroutines_coreSelectClause1, NCSDKKotlinx_coroutines_coreChildHandle, NCSDKKotlinx_coroutines_coreChildJob, NCSDKKotlinx_coroutines_coreDisposableHandle, NCSDKKotlinx_coroutines_coreJob, NCSDKKotlinx_coroutines_coreSelectClause0, NCSDKKotlinCoroutineContextKey, NCSDKKotlinCoroutineContextElement, NCSDKKotlinx_coroutines_coreSelectClause2, NCSDKKotlinCharSequence, NCSDKKotlinAppendable, NCSDKKotlinKType, NCSDKKtor_ioCloseable, NCSDKKtor_client_coreHttpClientEngine, NCSDKKtor_client_coreHttpClientEngineCapability, NCSDKKtor_utilsAttributes, NCSDKKotlinx_serialization_coreSerialFormat, NCSDKKotlinx_serialization_coreStringFormat, NCSDKKotlinContinuation, NCSDKKotlinContinuationInterceptor, NCSDKKotlinx_coroutines_coreRunnable, NCSDKKotlinx_serialization_coreSerializersModuleCollector, NCSDKKotlinMatchGroupCollection, NCSDKKotlinx_coroutines_coreSelectInstance, NCSDKKotlinx_coroutines_coreParentJob, NCSDKKotlinSuspendFunction0, NCSDKSqliter_driverLogger, NCSDKKtor_client_coreHttpClientPlugin, NCSDKKotlinIterable, NCSDKKotlinCollection, NCSDKKotlinClosedRange, NCSDKKtor_httpHeaders, NCSDKKtor_httpHttpMessage, NCSDKKtor_ioByteReadChannel, NCSDKKtor_httpHttpMessageBuilder, NCSDKKtor_client_coreHttpRequest, NCSDKKtor_httpParameters, NCSDKKotlinMapEntry, NCSDKKtor_utilsStringValues, NCSDKKtor_ioReadSession, NCSDKKtor_utilsStringValuesBuilder, NCSDKKtor_httpParametersBuilder, NCSDKKtor_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface NCSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface NCSDKBase (NCSDKBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface NCSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface NCSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorNCSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface NCSDKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface NCSDKByte : NCSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface NCSDKUByte : NCSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface NCSDKShort : NCSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface NCSDKUShort : NCSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface NCSDKInt : NCSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface NCSDKUInt : NCSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface NCSDKLong : NCSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface NCSDKULong : NCSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface NCSDKFloat : NCSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface NCSDKDouble : NCSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface NCSDKBoolean : NCSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowDependencyNode")))
@interface NCSDKWorkflowDependencyNode : NCSDKBase
- (instancetype)initWithName:(NSString *)name children:(NCSDKMutableSet<NCSDKWorkflowDependencyNode *> *)children __attribute__((swift_name("init(name:children:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKWorkflowDependencyNodeCompanion *companion __attribute__((swift_name("companion")));
- (void)addNode:(NCSDKWorkflowDependencyNode *)node __attribute__((swift_name("add(node:)")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKMutableSet<NCSDKWorkflowDependencyNode *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKWorkflowDependencyNode *)doCopyName:(NSString *)name children:(NCSDKMutableSet<NCSDKWorkflowDependencyNode *> *)children __attribute__((swift_name("doCopy(name:children:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NCSDKWorkflowDependencyNode * _Nullable)findNode:(NCSDKWorkflowDependencyNode *)node __attribute__((swift_name("find(node:)")));
- (BOOL)hasNode:(NCSDKWorkflowDependencyNode *)node __attribute__((swift_name("has(node:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKMutableSet<NCSDKWorkflowDependencyNode *> *children __attribute__((swift_name("children")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowDependencyNode.Companion")))
@interface NCSDKWorkflowDependencyNodeCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKWorkflowDependencyNodeCompanion *shared __attribute__((swift_name("shared")));
- (NSArray<NCSDKWorkflowDependencyNode *> *)fromDefinitions:(NSArray<NCSDKWorkflowDefinition *> *)definitions __attribute__((swift_name("from(definitions:)")));
- (void)traverseBottomUpTree:(NCSDKWorkflowDependencyNode *)tree block:(void (^)(NCSDKWorkflowDependencyNode *))block __attribute__((swift_name("traverseBottomUp(tree:block:)")));
@end;

__attribute__((swift_name("Action")))
@protocol NCSDKAction
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoalesceAction")))
@interface NCSDKCoalesceAction : NCSDKBase <NCSDKAction>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DelayAction")))
@interface NCSDKDelayAction : NCSDKBase <NCSDKAction>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EchoAction")))
@interface NCSDKEchoAction : NCSDKBase <NCSDKAction>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EchoSingularAction")))
@interface NCSDKEchoSingularAction : NCSDKBase <NCSDKAction>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExceptionAction")))
@interface NCSDKExceptionAction : NCSDKBase <NCSDKAction>
- (instancetype)initWithException:(NCSDKKotlinThrowable *)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogAction")))
@interface NCSDKLogAction : NCSDKBase <NCSDKAction>
- (instancetype)initWithLogger:(id<NCSDKWorkflowLogger>)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoopAction")))
@interface NCSDKLoopAction : NCSDKBase <NCSDKAction>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol NCSDKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface NCSDKKotlinEnum<E> : NCSDKBase <NCSDKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoopAction.Collect")))
@interface NCSDKLoopActionCollect : NCSDKKotlinEnum<NCSDKLoopActionCollect *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKLoopActionCollect *awaitAll __attribute__((swift_name("awaitAll")));
@property (class, readonly) NCSDKLoopActionCollect *emit __attribute__((swift_name("emit")));
+ (NCSDKKotlinArray<NCSDKLoopActionCollect *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoopAction.LoopActionContext")))
@interface NCSDKLoopActionLoopActionContext : NCSDKBase
- (instancetype)initWithWorkflowRegistry:(id<NCSDKWorkflowRegistry>)workflowRegistry requestId:(NSString * _Nullable)requestId context:(id _Nullable)context template:(NCSDKMapExpression * _Nullable)template_ workflow:(id<NCSDKWorkflow>)workflow mode:(NCSDKLoopActionLoopMode *)mode order:(NCSDKLoopActionResultOrder *)order collect:(NCSDKLoopActionCollect *)collect logger:(id<NCSDKWorkflowLogger>)logger __attribute__((swift_name("init(workflowRegistry:requestId:context:template:workflow:mode:order:collect:logger:)"))) __attribute__((objc_designated_initializer));
- (id<NCSDKWorkflowRegistry>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKMapExpression * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<NCSDKWorkflow>)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKLoopActionLoopMode *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKLoopActionResultOrder *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKLoopActionCollect *)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<NCSDKWorkflowLogger>)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKLoopActionLoopActionContext *)doCopyWorkflowRegistry:(id<NCSDKWorkflowRegistry>)workflowRegistry requestId:(NSString * _Nullable)requestId context:(id _Nullable)context template:(NCSDKMapExpression * _Nullable)template_ workflow:(id<NCSDKWorkflow>)workflow mode:(NCSDKLoopActionLoopMode *)mode order:(NCSDKLoopActionResultOrder *)order collect:(NCSDKLoopActionCollect *)collect logger:(id<NCSDKWorkflowLogger>)logger __attribute__((swift_name("doCopy(workflowRegistry:requestId:context:template:workflow:mode:order:collect:logger:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKLoopActionCollect *collect __attribute__((swift_name("collect")));
@property (readonly) id _Nullable context __attribute__((swift_name("context")));
@property (readonly) id<NCSDKWorkflowLogger> logger __attribute__((swift_name("logger")));
@property (readonly) NCSDKLoopActionLoopMode *mode __attribute__((swift_name("mode")));
@property (readonly) NCSDKLoopActionResultOrder *order __attribute__((swift_name("order")));
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));
@property (readonly, getter=template) NCSDKMapExpression * _Nullable template_ __attribute__((swift_name("template_")));
@property (readonly) id<NCSDKWorkflow> workflow __attribute__((swift_name("workflow")));
@property (readonly) id<NCSDKWorkflowRegistry> workflowRegistry __attribute__((swift_name("workflowRegistry")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoopAction.LoopMode")))
@interface NCSDKLoopActionLoopMode : NCSDKKotlinEnum<NCSDKLoopActionLoopMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKLoopActionLoopMode *map __attribute__((swift_name("map")));
@property (class, readonly) NCSDKLoopActionLoopMode *filter __attribute__((swift_name("filter")));
@property (class, readonly) NCSDKLoopActionLoopMode *forEach __attribute__((swift_name("forEach")));
+ (NCSDKKotlinArray<NCSDKLoopActionLoopMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoopAction.ResultOrder")))
@interface NCSDKLoopActionResultOrder : NCSDKKotlinEnum<NCSDKLoopActionResultOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKLoopActionResultOrder *inputOrder __attribute__((swift_name("inputOrder")));
@property (class, readonly) NCSDKLoopActionResultOrder *resultOrder __attribute__((swift_name("resultOrder")));
+ (NCSDKKotlinArray<NCSDKLoopActionResultOrder *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapGetAction")))
@interface NCSDKMapGetAction : NCSDKBase <NCSDKAction>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatementAction")))
@interface NCSDKStatementAction : NCSDKBase <NCSDKAction>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringReplaceAction")))
@interface NCSDKStringReplaceAction : NCSDKBase <NCSDKAction>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringToLongAction")))
@interface NCSDKStringToLongAction : NCSDKBase <NCSDKAction>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeoutAction")))
@interface NCSDKTimeoutAction : NCSDKBase <NCSDKAction>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("PreludeFactory")))
@protocol NCSDKPreludeFactory
@required
- (NSDictionary<NSString *, id> *)build __attribute__((swift_name("build()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GlobalPreludeFactory")))
@interface NCSDKGlobalPreludeFactory : NCSDKBase <NCSDKPreludeFactory>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)globalPreludeFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKGlobalPreludeFactory *shared __attribute__((swift_name("shared")));
- (NSDictionary<NSString *, id> *)build __attribute__((swift_name("build()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MathPreludeFactory")))
@interface NCSDKMathPreludeFactory : NCSDKBase <NCSDKPreludeFactory>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSDictionary<NSString *, id> *)build __attribute__((swift_name("build()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelsPreludeFactory")))
@interface NCSDKChannelsPreludeFactory : NCSDKBase <NCSDKPreludeFactory>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSDictionary<NSString *, id> *)build __attribute__((swift_name("build()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LangPreludeFactory")))
@interface NCSDKLangPreludeFactory : NCSDKBase <NCSDKPreludeFactory>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSDictionary<NSString *, id> *)build __attribute__((swift_name("build()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectionPreludeFactory")))
@interface NCSDKCollectionPreludeFactory : NCSDKBase <NCSDKPreludeFactory>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSDictionary<NSString *, id> *)build __attribute__((swift_name("build()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringPreludeFactory")))
@interface NCSDKStringPreludeFactory : NCSDKBase <NCSDKPreludeFactory>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSDictionary<NSString *, id> *)build __attribute__((swift_name("build()")));
@end;

__attribute__((swift_name("Recognizer")))
@interface NCSDKRecognizer<Symbol, ATNInterpreter> : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) NCSDKRecognizerCompanion *companion __attribute__((swift_name("companion")));
- (void)action_localctx:(NCSDKRuleContext * _Nullable)_localctx ruleIndex:(int32_t)ruleIndex actionIndex:(int32_t)actionIndex __attribute__((swift_name("action(_localctx:ruleIndex:actionIndex:)")));
- (void)addErrorListenerListener:(id<NCSDKANTLRErrorListener> _Nullable)listener __attribute__((swift_name("addErrorListener(listener:)")));
- (void)assignInputStreamNewValue:(id<NCSDKIntStream> _Nullable)newValue __attribute__((swift_name("assignInputStream(newValue:)")));
- (NSString *)getErrorHeaderE:(NCSDKRecognitionException *)e __attribute__((swift_name("getErrorHeader(e:)")));
- (NSString *)getTokenErrorDisplayT:(id<NCSDKToken> _Nullable)t __attribute__((swift_name("getTokenErrorDisplay(t:)"))) __attribute__((deprecated("This method is not called by the ANTLR 4 Runtime.")));
- (int32_t)getTokenTypeTokenName:(NSString *)tokenName __attribute__((swift_name("getTokenType(tokenName:)")));
- (BOOL)precpredLocalctx:(NCSDKRuleContext *)localctx precedence:(int32_t)precedence __attribute__((swift_name("precpred(localctx:precedence:)")));
- (id<NCSDKIntStream> _Nullable)readInputStream __attribute__((swift_name("readInputStream()")));
- (void)removeErrorListenerListener:(id<NCSDKANTLRErrorListener>)listener __attribute__((swift_name("removeErrorListener(listener:)")));
- (void)removeErrorListeners __attribute__((swift_name("removeErrorListeners()")));
- (BOOL)sempred_localctx:(NCSDKRuleContext * _Nullable)_localctx ruleIndex:(int32_t)ruleIndex actionIndex:(int32_t)actionIndex __attribute__((swift_name("sempred(_localctx:ruleIndex:actionIndex:)")));
@property (readonly) NCSDKATN *atn __attribute__((swift_name("atn")));
@property (readonly) id<NCSDKANTLRErrorListener> errorListenerDispatch __attribute__((swift_name("errorListenerDispatch")));
@property (readonly) NSArray<id<NCSDKANTLRErrorListener>> *errorListeners __attribute__((swift_name("errorListeners")));
@property (readonly) NSString *grammarFileName __attribute__((swift_name("grammarFileName")));
@property id<NCSDKIntStream> _Nullable inputStream __attribute__((swift_name("inputStream")));
@property ATNInterpreter _Nullable interpreter __attribute__((swift_name("interpreter")));
@property (readonly) NCSDKParseInfo * _Nullable parseInfo __attribute__((swift_name("parseInfo")));
@property (readonly) NSDictionary<NSString *, NCSDKInt *> *ruleIndexMap __attribute__((swift_name("ruleIndexMap")));
@property (readonly) NCSDKKotlinArray<NSString *> * _Nullable ruleNames __attribute__((swift_name("ruleNames")));
@property (readonly) NSString *serializedATN __attribute__((swift_name("serializedATN")));
@property int32_t state __attribute__((swift_name("state")));
@property id<NCSDKTokenFactory> tokenFactory __attribute__((swift_name("tokenFactory")));
@property (readonly) NCSDKKotlinArray<NSString *> * _Nullable tokenNames __attribute__((swift_name("tokenNames")));
@property (readonly) NSDictionary<NSString *, NCSDKInt *> *tokenTypeMap __attribute__((swift_name("tokenTypeMap")));
@property (readonly) id<NCSDKVocabulary> vocabulary __attribute__((swift_name("vocabulary")));
@end;

__attribute__((swift_name("TokenSource")))
@protocol NCSDKTokenSource
@required
- (id<NCSDKToken>)nextToken __attribute__((swift_name("nextToken()")));
- (id<NCSDKCharStream> _Nullable)readInputStream __attribute__((swift_name("readInputStream()")));
@property (readonly) int32_t charPositionInLine __attribute__((swift_name("charPositionInLine")));
@property (readonly) int32_t line __attribute__((swift_name("line")));
@property (readonly) NSString * _Nullable sourceName __attribute__((swift_name("sourceName")));
@property id<NCSDKTokenFactory> tokenFactory __attribute__((swift_name("tokenFactory")));
@end;

__attribute__((swift_name("Lexer")))
@interface NCSDKLexer : NCSDKRecognizer<NCSDKInt *, NCSDKLexerATNSimulator *> <NCSDKTokenSource>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithInput:(id<NCSDKCharStream>)input __attribute__((swift_name("init(input:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKLexerCompanion *companion __attribute__((swift_name("companion")));
- (void)assignInputStreamInput:(id<NCSDKCharStream> _Nullable)input __attribute__((swift_name("assignInputStream(input:)")));
- (void)assignInputStreamNewValue:(id<NCSDKIntStream> _Nullable)newValue __attribute__((swift_name("assignInputStream(newValue:)")));
- (id<NCSDKToken>)emit __attribute__((swift_name("emit()")));
- (void)emitToken:(id<NCSDKToken>)token __attribute__((swift_name("emit(token:)")));
- (id<NCSDKToken>)emitEOF __attribute__((swift_name("emitEOF()")));
- (NSString *)getCharErrorDisplayC:(int32_t)c __attribute__((swift_name("getCharErrorDisplay(c:)")));
- (NSString *)getErrorDisplayC:(int32_t)c __attribute__((swift_name("getErrorDisplay(c:)")));
- (NSString *)getErrorDisplayS:(NSString *)s __attribute__((swift_name("getErrorDisplay(s:)")));
- (void)modeM:(int32_t)m __attribute__((swift_name("mode(m:)")));
- (void)more __attribute__((swift_name("more()")));
- (id<NCSDKToken>)nextToken __attribute__((swift_name("nextToken()")));
- (void)notifyListenersE:(NCSDKLexerNoViableAltException *)e __attribute__((swift_name("notifyListeners(e:)")));
- (int32_t)popMode __attribute__((swift_name("popMode()")));
- (void)pushModeM:(int32_t)m __attribute__((swift_name("pushMode(m:)")));
- (id<NCSDKCharStream> _Nullable)readInputStream __attribute__((swift_name("readInputStream()")));
- (void)recoverE:(NCSDKLexerNoViableAltException *)e __attribute__((swift_name("recover(e:)")));
- (void)recoverRe:(NCSDKRecognitionException *)re __attribute__((swift_name("recover(re:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)skip __attribute__((swift_name("skip()")));
@property BOOL _hitEOF __attribute__((swift_name("_hitEOF")));
@property int32_t _mode __attribute__((swift_name("_mode")));
@property (readonly) NCSDKIntegerStack *_modeStack __attribute__((swift_name("_modeStack")));
@property NSString * _Nullable _text __attribute__((swift_name("_text")));
@property NCSDKKotlinPair<id<NCSDKTokenSource>, id<NCSDKCharStream>> * _Nullable _tokenFactorySourcePair __attribute__((swift_name("_tokenFactorySourcePair")));
@property int32_t _tokenStartCharIndex __attribute__((swift_name("_tokenStartCharIndex")));
@property int32_t _tokenStartCharPositionInLine __attribute__((swift_name("_tokenStartCharPositionInLine")));
@property int32_t _tokenStartLine __attribute__((swift_name("_tokenStartLine")));
@property (readonly) NSArray<id<NCSDKToken>> *allTokens __attribute__((swift_name("allTokens")));
@property int32_t channel __attribute__((swift_name("channel")));
@property (readonly) NCSDKKotlinArray<NSString *> * _Nullable channelNames __attribute__((swift_name("channelNames")));
@property (readonly) int32_t charIndex __attribute__((swift_name("charIndex")));
@property int32_t charPositionInLine __attribute__((swift_name("charPositionInLine")));
@property int32_t line __attribute__((swift_name("line")));
@property (readonly) NCSDKKotlinArray<NSString *> * _Nullable modeNames __attribute__((swift_name("modeNames")));
@property (readonly) NSString *sourceName __attribute__((swift_name("sourceName")));
@property NSString *text __attribute__((swift_name("text")));
@property id<NCSDKToken> _Nullable token __attribute__((swift_name("token")));
@property id<NCSDKTokenFactory> tokenFactory __attribute__((swift_name("tokenFactory")));
@property (readonly) NCSDKKotlinArray<NSString *> * _Nullable tokenNames __attribute__((swift_name("tokenNames")));
@property int32_t type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpressionLexer")))
@interface NCSDKExpressionLexer : NCSDKLexer
- (instancetype)initWithInput:(id<NCSDKCharStream>)input __attribute__((swift_name("init(input:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKExpressionLexerCompanion *companion __attribute__((swift_name("companion")));
- (void)action_localctx:(NCSDKRuleContext * _Nullable)_localctx ruleIndex:(int32_t)ruleIndex actionIndex:(int32_t)actionIndex __attribute__((swift_name("action(_localctx:ruleIndex:actionIndex:)")));
@property (readonly) NCSDKATN *atn __attribute__((swift_name("atn")));
@property (readonly) NCSDKKotlinArray<NSString *> *channelNames __attribute__((swift_name("channelNames")));
@property (readonly) NSString *grammarFileName __attribute__((swift_name("grammarFileName")));
@property (readonly) id<NCSDKCharStream> input __attribute__((swift_name("input")));
@property (readonly) NCSDKKotlinArray<NSString *> * _Nullable ruleNames __attribute__((swift_name("ruleNames")));
@property (readonly) id<NCSDKVocabulary> vocabulary __attribute__((swift_name("vocabulary")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpressionLexer.Channels")))
@interface NCSDKExpressionLexerChannels : NCSDKKotlinEnum<NCSDKExpressionLexerChannels *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKExpressionLexerChannels *defaultTokenChannel __attribute__((swift_name("defaultTokenChannel")));
@property (class, readonly) NCSDKExpressionLexerChannels *hidden __attribute__((swift_name("hidden")));
+ (NCSDKKotlinArray<NCSDKExpressionLexerChannels *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpressionLexer.Companion")))
@interface NCSDKExpressionLexerCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKExpressionLexerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKATN *ATN __attribute__((swift_name("ATN")));
@property (readonly) NCSDKVocabularyImpl *VOCABULARY __attribute__((swift_name("VOCABULARY")));
@property (readonly) NCSDKKotlinArray<NCSDKDFA *> *decisionToDFA __attribute__((swift_name("decisionToDFA")));
@property (readonly) NCSDKPredictionContextCache *sharedContextCache __attribute__((swift_name("sharedContextCache")));
@property (readonly) NCSDKKotlinArray<NSString *> *tokenNames __attribute__((swift_name("tokenNames")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpressionLexer.Modes")))
@interface NCSDKExpressionLexerModes : NCSDKKotlinEnum<NCSDKExpressionLexerModes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKExpressionLexerModes *defaultMode __attribute__((swift_name("defaultMode")));
@property (class, readonly) NCSDKExpressionLexerModes *linestring __attribute__((swift_name("linestring")));
@property (class, readonly) NCSDKExpressionLexerModes *multilinestring __attribute__((swift_name("multilinestring")));
@property (class, readonly) NCSDKExpressionLexerModes *inside __attribute__((swift_name("inside")));
+ (NCSDKKotlinArray<NCSDKExpressionLexerModes *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpressionLexer.Rules")))
@interface NCSDKExpressionLexerRules : NCSDKKotlinEnum<NCSDKExpressionLexerRules *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKExpressionLexerRules *delimitedcomment __attribute__((swift_name("delimitedcomment")));
@property (class, readonly) NCSDKExpressionLexerRules *linecomment __attribute__((swift_name("linecomment")));
@property (class, readonly) NCSDKExpressionLexerRules *ws __attribute__((swift_name("ws")));
@property (class, readonly) NCSDKExpressionLexerRules *nl __attribute__((swift_name("nl")));
@property (class, readonly) NCSDKExpressionLexerRules *hidden __attribute__((swift_name("hidden")));
@property (class, readonly) NCSDKExpressionLexerRules *dot __attribute__((swift_name("dot")));
@property (class, readonly) NCSDKExpressionLexerRules *comma __attribute__((swift_name("comma")));
@property (class, readonly) NCSDKExpressionLexerRules *lparen __attribute__((swift_name("lparen")));
@property (class, readonly) NCSDKExpressionLexerRules *rparen __attribute__((swift_name("rparen")));
@property (class, readonly) NCSDKExpressionLexerRules *lsquare __attribute__((swift_name("lsquare")));
@property (class, readonly) NCSDKExpressionLexerRules *rsquare __attribute__((swift_name("rsquare")));
@property (class, readonly) NCSDKExpressionLexerRules *lcurl __attribute__((swift_name("lcurl")));
@property (class, readonly) NCSDKExpressionLexerRules *rcurl __attribute__((swift_name("rcurl")));
@property (class, readonly) NCSDKExpressionLexerRules *pow __attribute__((swift_name("pow")));
@property (class, readonly) NCSDKExpressionLexerRules *mult __attribute__((swift_name("mult")));
@property (class, readonly) NCSDKExpressionLexerRules *mod __attribute__((swift_name("mod")));
@property (class, readonly) NCSDKExpressionLexerRules *div __attribute__((swift_name("div")));
@property (class, readonly) NCSDKExpressionLexerRules *add __attribute__((swift_name("add")));
@property (class, readonly) NCSDKExpressionLexerRules *sub __attribute__((swift_name("sub")));
@property (class, readonly) NCSDKExpressionLexerRules *conj __attribute__((swift_name("conj")));
@property (class, readonly) NCSDKExpressionLexerRules *disj __attribute__((swift_name("disj")));
@property (class, readonly) NCSDKExpressionLexerRules *exclWs __attribute__((swift_name("exclWs")));
@property (class, readonly) NCSDKExpressionLexerRules *exclNoWs __attribute__((swift_name("exclNoWs")));
@property (class, readonly) NCSDKExpressionLexerRules *colon __attribute__((swift_name("colon")));
@property (class, readonly) NCSDKExpressionLexerRules *semicolon __attribute__((swift_name("semicolon")));
@property (class, readonly) NCSDKExpressionLexerRules *assignment __attribute__((swift_name("assignment")));
@property (class, readonly) NCSDKExpressionLexerRules *arrow __attribute__((swift_name("arrow")));
@property (class, readonly) NCSDKExpressionLexerRules *questWs __attribute__((swift_name("questWs")));
@property (class, readonly) NCSDKExpressionLexerRules *questNoWs __attribute__((swift_name("questNoWs")));
@property (class, readonly) NCSDKExpressionLexerRules *langle __attribute__((swift_name("langle")));
@property (class, readonly) NCSDKExpressionLexerRules *rangle __attribute__((swift_name("rangle")));
@property (class, readonly) NCSDKExpressionLexerRules *le __attribute__((swift_name("le")));
@property (class, readonly) NCSDKExpressionLexerRules *ge __attribute__((swift_name("ge")));
@property (class, readonly) NCSDKExpressionLexerRules *exclEq __attribute__((swift_name("exclEq")));
@property (class, readonly) NCSDKExpressionLexerRules *eqeq __attribute__((swift_name("eqeq")));
@property (class, readonly) NCSDKExpressionLexerRules *singleQuote __attribute__((swift_name("singleQuote")));
@property (class, readonly) NCSDKExpressionLexerRules *if_ __attribute__((swift_name("if_")));
@property (class, readonly) NCSDKExpressionLexerRules *else_ __attribute__((swift_name("else_")));
@property (class, readonly) NCSDKExpressionLexerRules *decdigit __attribute__((swift_name("decdigit")));
@property (class, readonly) NCSDKExpressionLexerRules *decdigitnozero __attribute__((swift_name("decdigitnozero")));
@property (class, readonly) NCSDKExpressionLexerRules *decdigitorseparator __attribute__((swift_name("decdigitorseparator")));
@property (class, readonly) NCSDKExpressionLexerRules *decdigits __attribute__((swift_name("decdigits")));
@property (class, readonly) NCSDKExpressionLexerRules *doubleexponent __attribute__((swift_name("doubleexponent")));
@property (class, readonly) NCSDKExpressionLexerRules *realliteral __attribute__((swift_name("realliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *floatliteral __attribute__((swift_name("floatliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *doubleliteral __attribute__((swift_name("doubleliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *integerliteral __attribute__((swift_name("integerliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *hexdigit __attribute__((swift_name("hexdigit")));
@property (class, readonly) NCSDKExpressionLexerRules *hexdigitorseparator __attribute__((swift_name("hexdigitorseparator")));
@property (class, readonly) NCSDKExpressionLexerRules *hexliteral __attribute__((swift_name("hexliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *bindigit __attribute__((swift_name("bindigit")));
@property (class, readonly) NCSDKExpressionLexerRules *bindigitorseparator __attribute__((swift_name("bindigitorseparator")));
@property (class, readonly) NCSDKExpressionLexerRules *binliteral __attribute__((swift_name("binliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *unsignedliteral __attribute__((swift_name("unsignedliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *longliteral __attribute__((swift_name("longliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *booleanliteral __attribute__((swift_name("booleanliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *nullliteral __attribute__((swift_name("nullliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *characterliteral __attribute__((swift_name("characterliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *unicodedigit __attribute__((swift_name("unicodedigit")));
@property (class, readonly) NCSDKExpressionLexerRules *identifier __attribute__((swift_name("identifier")));
@property (class, readonly) NCSDKExpressionLexerRules *unicharacterliteral __attribute__((swift_name("unicharacterliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *escapedidentifier __attribute__((swift_name("escapedidentifier")));
@property (class, readonly) NCSDKExpressionLexerRules *escapeseq __attribute__((swift_name("escapeseq")));
@property (class, readonly) NCSDKExpressionLexerRules *letter __attribute__((swift_name("letter")));
@property (class, readonly) NCSDKExpressionLexerRules *quoteOpen __attribute__((swift_name("quoteOpen")));
@property (class, readonly) NCSDKExpressionLexerRules *tripleQuoteOpen __attribute__((swift_name("tripleQuoteOpen")));
@property (class, readonly) NCSDKExpressionLexerRules *unicodeClassLl __attribute__((swift_name("unicodeClassLl")));
@property (class, readonly) NCSDKExpressionLexerRules *unicodeClassLm __attribute__((swift_name("unicodeClassLm")));
@property (class, readonly) NCSDKExpressionLexerRules *unicodeClassLo __attribute__((swift_name("unicodeClassLo")));
@property (class, readonly) NCSDKExpressionLexerRules *unicodeClassLt __attribute__((swift_name("unicodeClassLt")));
@property (class, readonly) NCSDKExpressionLexerRules *unicodeClassLu __attribute__((swift_name("unicodeClassLu")));
@property (class, readonly) NCSDKExpressionLexerRules *unicodeClassNd __attribute__((swift_name("unicodeClassNd")));
@property (class, readonly) NCSDKExpressionLexerRules *unicodeClassNl __attribute__((swift_name("unicodeClassNl")));
@property (class, readonly) NCSDKExpressionLexerRules *quoteClose __attribute__((swift_name("quoteClose")));
@property (class, readonly) NCSDKExpressionLexerRules *linestrtext __attribute__((swift_name("linestrtext")));
@property (class, readonly) NCSDKExpressionLexerRules *linestrescapedchar __attribute__((swift_name("linestrescapedchar")));
@property (class, readonly) NCSDKExpressionLexerRules *tripleQuoteClose __attribute__((swift_name("tripleQuoteClose")));
@property (class, readonly) NCSDKExpressionLexerRules *multilinestringquote __attribute__((swift_name("multilinestringquote")));
@property (class, readonly) NCSDKExpressionLexerRules *multilinestrtext __attribute__((swift_name("multilinestrtext")));
@property (class, readonly) NCSDKExpressionLexerRules *insideRparen __attribute__((swift_name("insideRparen")));
@property (class, readonly) NCSDKExpressionLexerRules *insideRsquare __attribute__((swift_name("insideRsquare")));
@property (class, readonly) NCSDKExpressionLexerRules *insideLparen __attribute__((swift_name("insideLparen")));
@property (class, readonly) NCSDKExpressionLexerRules *insideLsquare __attribute__((swift_name("insideLsquare")));
@property (class, readonly) NCSDKExpressionLexerRules *insideLcurl __attribute__((swift_name("insideLcurl")));
@property (class, readonly) NCSDKExpressionLexerRules *insideRcurl __attribute__((swift_name("insideRcurl")));
@property (class, readonly) NCSDKExpressionLexerRules *insideDot __attribute__((swift_name("insideDot")));
@property (class, readonly) NCSDKExpressionLexerRules *insideComma __attribute__((swift_name("insideComma")));
@property (class, readonly) NCSDKExpressionLexerRules *insidePow __attribute__((swift_name("insidePow")));
@property (class, readonly) NCSDKExpressionLexerRules *insideMult __attribute__((swift_name("insideMult")));
@property (class, readonly) NCSDKExpressionLexerRules *insideMod __attribute__((swift_name("insideMod")));
@property (class, readonly) NCSDKExpressionLexerRules *insideDiv __attribute__((swift_name("insideDiv")));
@property (class, readonly) NCSDKExpressionLexerRules *insideAdd __attribute__((swift_name("insideAdd")));
@property (class, readonly) NCSDKExpressionLexerRules *insideSub __attribute__((swift_name("insideSub")));
@property (class, readonly) NCSDKExpressionLexerRules *insideConj __attribute__((swift_name("insideConj")));
@property (class, readonly) NCSDKExpressionLexerRules *insideDisj __attribute__((swift_name("insideDisj")));
@property (class, readonly) NCSDKExpressionLexerRules *insideExclWs __attribute__((swift_name("insideExclWs")));
@property (class, readonly) NCSDKExpressionLexerRules *insideExclNoWs __attribute__((swift_name("insideExclNoWs")));
@property (class, readonly) NCSDKExpressionLexerRules *insideColon __attribute__((swift_name("insideColon")));
@property (class, readonly) NCSDKExpressionLexerRules *insideSemicolon __attribute__((swift_name("insideSemicolon")));
@property (class, readonly) NCSDKExpressionLexerRules *insideAssignment __attribute__((swift_name("insideAssignment")));
@property (class, readonly) NCSDKExpressionLexerRules *insideArrow __attribute__((swift_name("insideArrow")));
@property (class, readonly) NCSDKExpressionLexerRules *insideQuestWs __attribute__((swift_name("insideQuestWs")));
@property (class, readonly) NCSDKExpressionLexerRules *insideQuestNoWs __attribute__((swift_name("insideQuestNoWs")));
@property (class, readonly) NCSDKExpressionLexerRules *insideLangle __attribute__((swift_name("insideLangle")));
@property (class, readonly) NCSDKExpressionLexerRules *insideRangle __attribute__((swift_name("insideRangle")));
@property (class, readonly) NCSDKExpressionLexerRules *insideLe __attribute__((swift_name("insideLe")));
@property (class, readonly) NCSDKExpressionLexerRules *insideGe __attribute__((swift_name("insideGe")));
@property (class, readonly) NCSDKExpressionLexerRules *insideExclEq __attribute__((swift_name("insideExclEq")));
@property (class, readonly) NCSDKExpressionLexerRules *insideEqeq __attribute__((swift_name("insideEqeq")));
@property (class, readonly) NCSDKExpressionLexerRules *insideSingleQuote __attribute__((swift_name("insideSingleQuote")));
@property (class, readonly) NCSDKExpressionLexerRules *insideQuoteOpen __attribute__((swift_name("insideQuoteOpen")));
@property (class, readonly) NCSDKExpressionLexerRules *insideTripleQuoteOpen __attribute__((swift_name("insideTripleQuoteOpen")));
@property (class, readonly) NCSDKExpressionLexerRules *insideIf __attribute__((swift_name("insideIf")));
@property (class, readonly) NCSDKExpressionLexerRules *insideElse __attribute__((swift_name("insideElse")));
@property (class, readonly) NCSDKExpressionLexerRules *insideBooleanliteral __attribute__((swift_name("insideBooleanliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *insideIntegerliteral __attribute__((swift_name("insideIntegerliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *insideHexliteral __attribute__((swift_name("insideHexliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *insideBinliteral __attribute__((swift_name("insideBinliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *insideCharacterliteral __attribute__((swift_name("insideCharacterliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *insideRealliteral __attribute__((swift_name("insideRealliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *insideNullliteral __attribute__((swift_name("insideNullliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *insideLongliteral __attribute__((swift_name("insideLongliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *insideUnsignedliteral __attribute__((swift_name("insideUnsignedliteral")));
@property (class, readonly) NCSDKExpressionLexerRules *insideIdentifier __attribute__((swift_name("insideIdentifier")));
@property (class, readonly) NCSDKExpressionLexerRules *insideComment __attribute__((swift_name("insideComment")));
@property (class, readonly) NCSDKExpressionLexerRules *insideWs __attribute__((swift_name("insideWs")));
@property (class, readonly) NCSDKExpressionLexerRules *insideNl __attribute__((swift_name("insideNl")));
@property (class, readonly) NCSDKExpressionLexerRules *errorcharacter __attribute__((swift_name("errorcharacter")));
+ (NCSDKKotlinArray<NCSDKExpressionLexerRules *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpressionLexer.Tokens")))
@interface NCSDKExpressionLexerTokens : NCSDKKotlinEnum<NCSDKExpressionLexerTokens *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKExpressionLexerTokens *delimitedcomment __attribute__((swift_name("delimitedcomment")));
@property (class, readonly) NCSDKExpressionLexerTokens *linecomment __attribute__((swift_name("linecomment")));
@property (class, readonly) NCSDKExpressionLexerTokens *ws __attribute__((swift_name("ws")));
@property (class, readonly) NCSDKExpressionLexerTokens *nl __attribute__((swift_name("nl")));
@property (class, readonly) NCSDKExpressionLexerTokens *dot __attribute__((swift_name("dot")));
@property (class, readonly) NCSDKExpressionLexerTokens *comma __attribute__((swift_name("comma")));
@property (class, readonly) NCSDKExpressionLexerTokens *lparen __attribute__((swift_name("lparen")));
@property (class, readonly) NCSDKExpressionLexerTokens *rparen __attribute__((swift_name("rparen")));
@property (class, readonly) NCSDKExpressionLexerTokens *lsquare __attribute__((swift_name("lsquare")));
@property (class, readonly) NCSDKExpressionLexerTokens *rsquare __attribute__((swift_name("rsquare")));
@property (class, readonly) NCSDKExpressionLexerTokens *lcurl __attribute__((swift_name("lcurl")));
@property (class, readonly) NCSDKExpressionLexerTokens *rcurl __attribute__((swift_name("rcurl")));
@property (class, readonly) NCSDKExpressionLexerTokens *pow __attribute__((swift_name("pow")));
@property (class, readonly) NCSDKExpressionLexerTokens *mult __attribute__((swift_name("mult")));
@property (class, readonly) NCSDKExpressionLexerTokens *mod __attribute__((swift_name("mod")));
@property (class, readonly) NCSDKExpressionLexerTokens *div __attribute__((swift_name("div")));
@property (class, readonly) NCSDKExpressionLexerTokens *add __attribute__((swift_name("add")));
@property (class, readonly) NCSDKExpressionLexerTokens *sub __attribute__((swift_name("sub")));
@property (class, readonly) NCSDKExpressionLexerTokens *conj __attribute__((swift_name("conj")));
@property (class, readonly) NCSDKExpressionLexerTokens *disj __attribute__((swift_name("disj")));
@property (class, readonly) NCSDKExpressionLexerTokens *exclWs __attribute__((swift_name("exclWs")));
@property (class, readonly) NCSDKExpressionLexerTokens *exclNoWs __attribute__((swift_name("exclNoWs")));
@property (class, readonly) NCSDKExpressionLexerTokens *colon __attribute__((swift_name("colon")));
@property (class, readonly) NCSDKExpressionLexerTokens *semicolon __attribute__((swift_name("semicolon")));
@property (class, readonly) NCSDKExpressionLexerTokens *assignment __attribute__((swift_name("assignment")));
@property (class, readonly) NCSDKExpressionLexerTokens *arrow __attribute__((swift_name("arrow")));
@property (class, readonly) NCSDKExpressionLexerTokens *questWs __attribute__((swift_name("questWs")));
@property (class, readonly) NCSDKExpressionLexerTokens *questNoWs __attribute__((swift_name("questNoWs")));
@property (class, readonly) NCSDKExpressionLexerTokens *langle __attribute__((swift_name("langle")));
@property (class, readonly) NCSDKExpressionLexerTokens *rangle __attribute__((swift_name("rangle")));
@property (class, readonly) NCSDKExpressionLexerTokens *le __attribute__((swift_name("le")));
@property (class, readonly) NCSDKExpressionLexerTokens *ge __attribute__((swift_name("ge")));
@property (class, readonly) NCSDKExpressionLexerTokens *exclEq __attribute__((swift_name("exclEq")));
@property (class, readonly) NCSDKExpressionLexerTokens *eqeq __attribute__((swift_name("eqeq")));
@property (class, readonly) NCSDKExpressionLexerTokens *singleQuote __attribute__((swift_name("singleQuote")));
@property (class, readonly) NCSDKExpressionLexerTokens *if_ __attribute__((swift_name("if_")));
@property (class, readonly) NCSDKExpressionLexerTokens *else_ __attribute__((swift_name("else_")));
@property (class, readonly) NCSDKExpressionLexerTokens *realliteral __attribute__((swift_name("realliteral")));
@property (class, readonly) NCSDKExpressionLexerTokens *floatliteral __attribute__((swift_name("floatliteral")));
@property (class, readonly) NCSDKExpressionLexerTokens *doubleliteral __attribute__((swift_name("doubleliteral")));
@property (class, readonly) NCSDKExpressionLexerTokens *integerliteral __attribute__((swift_name("integerliteral")));
@property (class, readonly) NCSDKExpressionLexerTokens *hexliteral __attribute__((swift_name("hexliteral")));
@property (class, readonly) NCSDKExpressionLexerTokens *binliteral __attribute__((swift_name("binliteral")));
@property (class, readonly) NCSDKExpressionLexerTokens *unsignedliteral __attribute__((swift_name("unsignedliteral")));
@property (class, readonly) NCSDKExpressionLexerTokens *longliteral __attribute__((swift_name("longliteral")));
@property (class, readonly) NCSDKExpressionLexerTokens *booleanliteral __attribute__((swift_name("booleanliteral")));
@property (class, readonly) NCSDKExpressionLexerTokens *nullliteral __attribute__((swift_name("nullliteral")));
@property (class, readonly) NCSDKExpressionLexerTokens *characterliteral __attribute__((swift_name("characterliteral")));
@property (class, readonly) NCSDKExpressionLexerTokens *identifier __attribute__((swift_name("identifier")));
@property (class, readonly) NCSDKExpressionLexerTokens *quoteOpen __attribute__((swift_name("quoteOpen")));
@property (class, readonly) NCSDKExpressionLexerTokens *tripleQuoteOpen __attribute__((swift_name("tripleQuoteOpen")));
@property (class, readonly) NCSDKExpressionLexerTokens *unicodeClassLl __attribute__((swift_name("unicodeClassLl")));
@property (class, readonly) NCSDKExpressionLexerTokens *unicodeClassLm __attribute__((swift_name("unicodeClassLm")));
@property (class, readonly) NCSDKExpressionLexerTokens *unicodeClassLo __attribute__((swift_name("unicodeClassLo")));
@property (class, readonly) NCSDKExpressionLexerTokens *unicodeClassLt __attribute__((swift_name("unicodeClassLt")));
@property (class, readonly) NCSDKExpressionLexerTokens *unicodeClassLu __attribute__((swift_name("unicodeClassLu")));
@property (class, readonly) NCSDKExpressionLexerTokens *unicodeClassNd __attribute__((swift_name("unicodeClassNd")));
@property (class, readonly) NCSDKExpressionLexerTokens *unicodeClassNl __attribute__((swift_name("unicodeClassNl")));
@property (class, readonly) NCSDKExpressionLexerTokens *quoteClose __attribute__((swift_name("quoteClose")));
@property (class, readonly) NCSDKExpressionLexerTokens *linestrtext __attribute__((swift_name("linestrtext")));
@property (class, readonly) NCSDKExpressionLexerTokens *linestrescapedchar __attribute__((swift_name("linestrescapedchar")));
@property (class, readonly) NCSDKExpressionLexerTokens *tripleQuoteClose __attribute__((swift_name("tripleQuoteClose")));
@property (class, readonly) NCSDKExpressionLexerTokens *multilinestringquote __attribute__((swift_name("multilinestringquote")));
@property (class, readonly) NCSDKExpressionLexerTokens *multilinestrtext __attribute__((swift_name("multilinestrtext")));
@property (class, readonly) NCSDKExpressionLexerTokens *insideComment __attribute__((swift_name("insideComment")));
@property (class, readonly) NCSDKExpressionLexerTokens *insideWs __attribute__((swift_name("insideWs")));
@property (class, readonly) NCSDKExpressionLexerTokens *insideNl __attribute__((swift_name("insideNl")));
@property (class, readonly) NCSDKExpressionLexerTokens *errorcharacter __attribute__((swift_name("errorcharacter")));
+ (NCSDKKotlinArray<NCSDKExpressionLexerTokens *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@end;

__attribute__((swift_name("Parser")))
@interface NCSDKParser : NCSDKRecognizer<id<NCSDKToken>, NCSDKParserATNSimulator *>
- (instancetype)initWithInput:(id<NCSDKTokenStream>)input __attribute__((swift_name("init(input:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)addContextToParseTree __attribute__((swift_name("addContextToParseTree()")));
- (void)addParseListenerListener:(id<NCSDKParseTreeListener>)listener __attribute__((swift_name("addParseListener(listener:)")));
- (void)assignInputStreamNewValue:(id<NCSDKIntStream> _Nullable)newValue __attribute__((swift_name("assignInputStream(newValue:)")));
- (id<NCSDKToken>)consume __attribute__((swift_name("consume()")));
- (id<NCSDKErrorNode>)createErrorNodeParent:(NCSDKParserRuleContext * _Nullable)parent t:(id<NCSDKToken>)t __attribute__((swift_name("createErrorNode(parent:t:)")));
- (id<NCSDKTerminalNode>)createTerminalNodeParent:(NCSDKParserRuleContext * _Nullable)parent t:(id<NCSDKToken>)t __attribute__((swift_name("createTerminalNode(parent:t:)")));
- (void)enterOuterAltLocalctx:(NCSDKParserRuleContext *)localctx altNum:(int32_t)altNum __attribute__((swift_name("enterOuterAlt(localctx:altNum:)")));
- (void)enterRecursionRuleLocalctx:(NCSDKParserRuleContext *)localctx ruleIndex:(int32_t)ruleIndex __attribute__((swift_name("enterRecursionRule(localctx:ruleIndex:)"))) __attribute__((deprecated("Use {@link #enterRecursionRule(ParserRuleContext, int, int, int)} instead.")));
- (void)enterRecursionRuleLocalctx:(NCSDKParserRuleContext *)localctx state:(int32_t)state ruleIndex:(int32_t)ruleIndex precedence:(int32_t)precedence __attribute__((swift_name("enterRecursionRule(localctx:state:ruleIndex:precedence:)")));
- (void)enterRuleLocalctx:(NCSDKParserRuleContext *)localctx state:(int32_t)state ruleIndex:(int32_t)ruleIndex __attribute__((swift_name("enterRule(localctx:state:ruleIndex:)")));
- (void)exitRule __attribute__((swift_name("exitRule()")));
- (NCSDKParserRuleContext * _Nullable)getRuleContext __attribute__((swift_name("getRuleContext()")));
- (int32_t)getRuleIndexRuleName:(NSString *)ruleName __attribute__((swift_name("getRuleIndex(ruleName:)")));
- (NSArray<NSString *> *)getRuleInvocationStackP:(NCSDKRuleContext * _Nullable)p __attribute__((swift_name("getRuleInvocationStack(p:)")));
- (id<NCSDKToken>)matchTtype:(int32_t)ttype __attribute__((swift_name("match(ttype:)")));
- (id<NCSDKToken>)matchWildcard __attribute__((swift_name("matchWildcard()")));
- (void)notifyErrorListenersOffendingToken:(id<NCSDKToken>)offendingToken msg:(NSString *)msg e:(NCSDKRecognitionException * _Nullable)e __attribute__((swift_name("notifyErrorListeners(offendingToken:msg:e:)")));
- (void)notifyErrorListenersMsg:(NSString *)msg __attribute__((swift_name("notifyErrorListeners(msg:)")));
- (void)pushNewRecursionContextLocalctx:(NCSDKParserRuleContext *)localctx state:(int32_t)state ruleIndex:(int32_t)ruleIndex __attribute__((swift_name("pushNewRecursionContext(localctx:state:ruleIndex:)")));
- (id<NCSDKIntStream> _Nullable)readInputStream __attribute__((swift_name("readInputStream()")));
- (void)removeParseListenerListener:(id<NCSDKParseTreeListener>)listener __attribute__((swift_name("removeParseListener(listener:)")));
- (void)removeParseListeners __attribute__((swift_name("removeParseListeners()")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)triggerEnterRuleEvent __attribute__((swift_name("triggerEnterRuleEvent()")));
- (void)triggerExitRuleEvent __attribute__((swift_name("triggerExitRuleEvent()")));
- (void)unrollRecursionContexts_parentctx:(NCSDKParserRuleContext * _Nullable)_parentctx __attribute__((swift_name("unrollRecursionContexts(_parentctx:)")));
@property id<NCSDKTokenStream> _Nullable _input __attribute__((swift_name("_input")));
@property NSMutableArray<id<NCSDKParseTreeListener>> *_parseListeners __attribute__((swift_name("_parseListeners")));
@property (readonly) NCSDKIntegerStack *_precedenceStack __attribute__((swift_name("_precedenceStack")));
@property BOOL buildParseTree __attribute__((swift_name("buildParseTree")));
@property NCSDKParserRuleContext * _Nullable context __attribute__((swift_name("context")));
@property (readonly) id<NCSDKToken> _Nullable currentToken __attribute__((swift_name("currentToken")));
@property (readonly) NSArray<NSString *> *dfaStrings __attribute__((swift_name("dfaStrings")));
@property id<NCSDKANTLRErrorStrategy> errorHandler __attribute__((swift_name("errorHandler")));
@property (readonly) NCSDKIntervalSet *expectedTokens __attribute__((swift_name("expectedTokens")));
@property BOOL isMatchedEOF __attribute__((swift_name("isMatchedEOF")));
@property int32_t numberOfSyntaxErrors __attribute__((swift_name("numberOfSyntaxErrors")));
@property (readonly) NCSDKParseInfo * _Nullable parseInfo __attribute__((swift_name("parseInfo")));
@property (readonly) NSArray<id<NCSDKParseTreeListener>> *parseListeners __attribute__((swift_name("parseListeners")));
@property (readonly) int32_t precedence __attribute__((swift_name("precedence")));
@property (readonly) NSArray<NSString *> *ruleInvocationStack __attribute__((swift_name("ruleInvocationStack")));
@property (readonly) NSString *sourceName __attribute__((swift_name("sourceName")));
@property id<NCSDKTokenFactory> tokenFactory __attribute__((swift_name("tokenFactory")));
@property id<NCSDKTokenStream> _Nullable tokenStream __attribute__((swift_name("tokenStream")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpressionParser")))
@interface NCSDKExpressionParser : NCSDKParser
- (instancetype)initWithInput:(id<NCSDKTokenStream>)input __attribute__((swift_name("init(input:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKExpressionParserCompanion *companion __attribute__((swift_name("companion")));
- (NCSDKExpressionParserAdditiveExpressionContext *)additiveExpression __attribute__((swift_name("additiveExpression()")));
- (NCSDKExpressionParserAdditiveOperatorContext *)additiveOperator __attribute__((swift_name("additiveOperator()")));
- (NCSDKExpressionParserCollectionLiteralContext *)collectionLiteral __attribute__((swift_name("collectionLiteral()")));
- (NCSDKExpressionParserComparisonContext *)comparison __attribute__((swift_name("comparison()")));
- (NCSDKExpressionParserComparisonOperatorContext *)comparisonOperator __attribute__((swift_name("comparisonOperator()")));
- (NCSDKExpressionParserConjunctionContext *)conjunction __attribute__((swift_name("conjunction()")));
- (NCSDKExpressionParserDisjunctionContext *)disjunction __attribute__((swift_name("disjunction()")));
- (NCSDKExpressionParserElvisContext *)elvis __attribute__((swift_name("elvis()")));
- (NCSDKExpressionParserElvisExpressionContext *)elvisExpression __attribute__((swift_name("elvisExpression()")));
- (NCSDKExpressionParserEqualityContext *)equality __attribute__((swift_name("equality()")));
- (NCSDKExpressionParserEqualityOperatorContext *)equalityOperator __attribute__((swift_name("equalityOperator()")));
- (NCSDKExpressionParserExclContext *)excl __attribute__((swift_name("excl()")));
- (NCSDKExpressionParserExponentExpressionContext *)exponentExpression __attribute__((swift_name("exponentExpression()")));
- (NCSDKExpressionParserExponentOperatorContext *)exponentOperator __attribute__((swift_name("exponentOperator()")));
- (NCSDKExpressionParserExpressionContext *)expression __attribute__((swift_name("expression()")));
- (NCSDKExpressionParserIfExpressionContext *)ifExpression __attribute__((swift_name("ifExpression()")));
- (NCSDKExpressionParserIndexingSuffixContext *)indexingSuffix __attribute__((swift_name("indexingSuffix()")));
- (NCSDKExpressionParserInfixFunctionCallContext *)infixFunctionCall __attribute__((swift_name("infixFunctionCall()")));
- (NCSDKExpressionParserLambdaContext *)lambda __attribute__((swift_name("lambda()")));
- (NCSDKExpressionParserLineStringContentContext *)lineStringContent __attribute__((swift_name("lineStringContent()")));
- (NCSDKExpressionParserLineStringLiteralContext *)lineStringLiteral __attribute__((swift_name("lineStringLiteral()")));
- (NCSDKExpressionParserLiteralConstantContext *)literalConstant __attribute__((swift_name("literalConstant()")));
- (NCSDKExpressionParserMapKeyContext *)mapKey __attribute__((swift_name("mapKey()")));
- (NCSDKExpressionParserMemberAccessOperatorContext *)memberAccessOperator __attribute__((swift_name("memberAccessOperator()")));
- (NCSDKExpressionParserMultiplicativeExpressionContext *)multiplicativeExpression __attribute__((swift_name("multiplicativeExpression()")));
- (NCSDKExpressionParserMultiplicativeOperatorContext *)multiplicativeOperator __attribute__((swift_name("multiplicativeOperator()")));
- (NCSDKExpressionParserNavigationSuffixContext *)navigationSuffix __attribute__((swift_name("navigationSuffix()")));
- (NCSDKExpressionParserObjectLiteralContext *)objectLiteral __attribute__((swift_name("objectLiteral()")));
- (NCSDKExpressionParserParenthesizedExpressionContext *)parenthesizedExpression __attribute__((swift_name("parenthesizedExpression()")));
- (NCSDKExpressionParserPostfixUnaryExpressionContext *)postfixUnaryExpression __attribute__((swift_name("postfixUnaryExpression()")));
- (NCSDKExpressionParserPostfixUnarySuffixContext *)postfixUnarySuffix __attribute__((swift_name("postfixUnarySuffix()")));
- (NCSDKExpressionParserPrefixUnaryExpressionContext *)prefixUnaryExpression __attribute__((swift_name("prefixUnaryExpression()")));
- (NCSDKExpressionParserPrefixUnaryOperatorContext *)prefixUnaryOperator __attribute__((swift_name("prefixUnaryOperator()")));
- (NCSDKExpressionParserPrimaryExpressionContext *)primaryExpression __attribute__((swift_name("primaryExpression()")));
- (NCSDKExpressionParserSimpleIdentifierContext *)simpleIdentifier __attribute__((swift_name("simpleIdentifier()")));
- (NCSDKExpressionParserStatementContext *)statement __attribute__((swift_name("statement()")));
- (NCSDKExpressionParserStringLiteralContext *)stringLiteral __attribute__((swift_name("stringLiteral()")));
- (NCSDKExpressionParserUnaryPrefixContext *)unaryPrefix __attribute__((swift_name("unaryPrefix()")));
- (NCSDKExpressionParserValueArgumentsContext *)valueArguments __attribute__((swift_name("valueArguments()")));
@property (readonly) NCSDKATN *atn __attribute__((swift_name("atn")));
@property (readonly) NSString *grammarFileName __attribute__((swift_name("grammarFileName")));
@property (readonly) NCSDKKotlinArray<NSString *> * _Nullable ruleNames __attribute__((swift_name("ruleNames")));
@property (readonly) NCSDKKotlinArray<NSString *> * _Nullable tokenNames __attribute__((swift_name("tokenNames")));
@property (readonly) id<NCSDKVocabulary> vocabulary __attribute__((swift_name("vocabulary")));
@end;

__attribute__((swift_name("Tree")))
@protocol NCSDKTree
@required
- (id<NCSDKTree> _Nullable)getChildI:(int32_t)i __attribute__((swift_name("getChild(i:)")));
- (id<NCSDKTree> _Nullable)readParent __attribute__((swift_name("readParent()")));
- (NSString *)toStringTree __attribute__((swift_name("toStringTree()")));
@property (readonly) int32_t childCount __attribute__((swift_name("childCount")));
@property (readonly) id _Nullable payload __attribute__((swift_name("payload")));
@end;

__attribute__((swift_name("SyntaxTree")))
@protocol NCSDKSyntaxTree <NCSDKTree>
@required
@property (readonly) NCSDKInterval *sourceInterval __attribute__((swift_name("sourceInterval")));
@end;

__attribute__((swift_name("ParseTree")))
@protocol NCSDKParseTree <NCSDKSyntaxTree>
@required
- (id _Nullable)acceptVisitor:(id<NCSDKParseTreeVisitor>)visitor __attribute__((swift_name("accept(visitor:)")));
- (void)assignParentValue:(id<NCSDKParseTree> _Nullable)value __attribute__((swift_name("assignParent(value:)")));
- (NSString *)toStringTreeParser:(NCSDKParser *)parser __attribute__((swift_name("toStringTree(parser:)")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end;

__attribute__((swift_name("RuleNode")))
@protocol NCSDKRuleNode <NCSDKParseTree>
@required
@property (readonly) NCSDKRuleContext *ruleContext __attribute__((swift_name("ruleContext")));
@end;

__attribute__((swift_name("RuleContext")))
@interface NCSDKRuleContext : NCSDKBase <NCSDKRuleNode>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithParent:(NCSDKRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)acceptVisitor:(id<NCSDKParseTreeVisitor>)visitor __attribute__((swift_name("accept(visitor:)")));
- (void)assignParentValue_:(NCSDKRuleContext * _Nullable)value __attribute__((swift_name("assignParent(value_:)")));
- (void)assignParentValue:(id<NCSDKParseTree> _Nullable)value __attribute__((swift_name("assignParent(value:)")));
- (int32_t)depth __attribute__((swift_name("depth()")));
- (id<NCSDKParseTree> _Nullable)getChildI:(int32_t)i __attribute__((swift_name("getChild(i:)")));
- (NCSDKRuleContext * _Nullable)readParent __attribute__((swift_name("readParent()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)toStringRecog:(NCSDKRecognizer<id, id> * _Nullable)recog stop:(NCSDKRuleContext *)stop __attribute__((swift_name("toString(recog:stop:)")));
- (NSString *)toStringRuleNames:(NSArray<NSString *> * _Nullable)ruleNames stop:(NCSDKRuleContext * _Nullable)stop __attribute__((swift_name("toString(ruleNames:stop:)")));
- (NSString *)toStringTree __attribute__((swift_name("toStringTree()")));
- (NSString *)toStringTreeParser:(NCSDKParser *)recog __attribute__((swift_name("toStringTree(parser:)")));
- (NSString *)toStringTreeRuleNames:(NSArray<NSString *> * _Nullable)ruleNames __attribute__((swift_name("toStringTree(ruleNames:)")));
@property int32_t altNumber __attribute__((swift_name("altNumber")));
@property (readonly) int32_t childCount __attribute__((swift_name("childCount")));
@property int32_t invokingState __attribute__((swift_name("invokingState")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property NCSDKRuleContext * _Nullable parent __attribute__((swift_name("parent")));
@property (readonly) NCSDKRuleContext *payload __attribute__((swift_name("payload")));
@property (readonly) NCSDKRuleContext *ruleContext __attribute__((swift_name("ruleContext")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@property (readonly) NCSDKInterval *sourceInterval __attribute__((swift_name("sourceInterval")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end;

__attribute__((swift_name("ParserRuleContext")))
@interface NCSDKParserRuleContext : NCSDKRuleContext
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithParent:(NCSDKRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKParseTree>)addAnyChildT:(id<NCSDKParseTree>)t __attribute__((swift_name("addAnyChild(t:)")));
- (NCSDKRuleContext *)addChildRuleInvocation:(NCSDKRuleContext *)ruleInvocation __attribute__((swift_name("addChild(ruleInvocation:)")));
- (id<NCSDKTerminalNode>)addChildMatchedToken:(id<NCSDKToken>)matchedToken __attribute__((swift_name("addChild(matchedToken:)"))) __attribute__((deprecated("")));
- (id<NCSDKTerminalNode>)addChildT:(id<NCSDKTerminalNode>)t __attribute__((swift_name("addChild(t:)")));
- (id<NCSDKErrorNode>)addErrorNodeBadToken:(id<NCSDKToken>)badToken __attribute__((swift_name("addErrorNode(badToken:)"))) __attribute__((deprecated("")));
- (id<NCSDKErrorNode>)addErrorNodeErrorNode:(id<NCSDKErrorNode>)errorNode __attribute__((swift_name("addErrorNode(errorNode:)")));
- (void)assignParentValue__:(NCSDKParserRuleContext * _Nullable)value __attribute__((swift_name("assignParent(value__:)")));
- (void)assignParentValue:(id<NCSDKParseTree> _Nullable)value __attribute__((swift_name("assignParent(value:)")));
- (void)doCopyFromCtx:(NCSDKParserRuleContext *)ctx __attribute__((swift_name("doCopyFrom(ctx:)")));
- (void)enterRuleListener:(id<NCSDKParseTreeListener>)listener __attribute__((swift_name("enterRule(listener:)")));
- (void)exitRuleListener:(id<NCSDKParseTreeListener>)listener __attribute__((swift_name("exitRule(listener:)")));
- (id<NCSDKParseTree> _Nullable)getChildCtxType:(NCSDKType *)ctxType i:(int32_t)i __attribute__((swift_name("getChild(ctxType:i:)")));
- (id<NCSDKParseTree> _Nullable)getChildI:(int32_t)i __attribute__((swift_name("getChild(i:)")));
- (NCSDKParserRuleContext * _Nullable)getRuleContextCtxType:(NCSDKType *)ctxType i:(int32_t)i __attribute__((swift_name("getRuleContext(ctxType:i:)")));
- (NSArray<NCSDKParserRuleContext *> *)getRuleContextsCtxType:(NCSDKType *)ctxType __attribute__((swift_name("getRuleContexts(ctxType:)")));
- (id<NCSDKTerminalNode> _Nullable)getTokenTtype:(int32_t)ttype i:(int32_t)i __attribute__((swift_name("getToken(ttype:i:)")));
- (NSArray<id<NCSDKTerminalNode>> *)getTokensTtype:(int32_t)ttype __attribute__((swift_name("getTokens(ttype:)")));
- (void)removeLastChild __attribute__((swift_name("removeLastChild()")));
@property (readonly) int32_t childCount __attribute__((swift_name("childCount")));
@property NSMutableArray<id<NCSDKParseTree>> * _Nullable children __attribute__((swift_name("children")));
@property NCSDKRecognitionException * _Nullable exception __attribute__((swift_name("exception")));
@property (readonly) NCSDKPosition * _Nullable position __attribute__((swift_name("position")));
@property (readonly) NCSDKInterval *sourceInterval __attribute__((swift_name("sourceInterval")));
@property id<NCSDKToken> _Nullable start __attribute__((swift_name("start")));
@property id<NCSDKToken> _Nullable stop __attribute__((swift_name("stop")));
@end;

__attribute__((swift_name("ExpressionParser.AdditiveExpressionContext")))
@interface NCSDKExpressionParserAdditiveExpressionContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (NSArray<NCSDKExpressionParserAdditiveOperatorContext *> *)findAdditiveOperator __attribute__((swift_name("findAdditiveOperator()")));
- (NCSDKExpressionParserAdditiveOperatorContext * _Nullable)findAdditiveOperatorI:(int32_t)i __attribute__((swift_name("findAdditiveOperator(i:)")));
- (NSArray<NCSDKExpressionParserMultiplicativeExpressionContext *> *)findMultiplicativeExpression __attribute__((swift_name("findMultiplicativeExpression()")));
- (NCSDKExpressionParserMultiplicativeExpressionContext * _Nullable)findMultiplicativeExpressionI:(int32_t)i __attribute__((swift_name("findMultiplicativeExpression(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.AdditiveOperatorContext")))
@interface NCSDKExpressionParserAdditiveOperatorContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)ADD __attribute__((swift_name("ADD()")));
- (id<NCSDKTerminalNode> _Nullable)SUB __attribute__((swift_name("SUB()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.CollectionLiteralContext")))
@interface NCSDKExpressionParserCollectionLiteralContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSArray<id<NCSDKTerminalNode>> *)COMMA __attribute__((swift_name("COMMA()")));
- (id<NCSDKTerminalNode>)COMMAI:(int32_t)i __attribute__((swift_name("COMMA(i:)")));
- (id<NCSDKTerminalNode> _Nullable)LSQUARE __attribute__((swift_name("LSQUARE()")));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (id<NCSDKTerminalNode> _Nullable)RSQUARE __attribute__((swift_name("RSQUARE()")));
- (NSArray<NCSDKExpressionParserExpressionContext *> *)findExpression __attribute__((swift_name("findExpression()")));
- (NCSDKExpressionParserExpressionContext * _Nullable)findExpressionI:(int32_t)i __attribute__((swift_name("findExpression(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpressionParser.Companion")))
@interface NCSDKExpressionParserCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKExpressionParserCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKATN *ATN __attribute__((swift_name("ATN")));
@property (readonly) NCSDKVocabularyImpl *VOCABULARY __attribute__((swift_name("VOCABULARY")));
@property (readonly) NCSDKKotlinArray<NCSDKDFA *> *decisionToDFA __attribute__((swift_name("decisionToDFA")));
@property (readonly) NCSDKKotlinArray<NSString *> *ruleNames __attribute__((swift_name("ruleNames")));
@property (readonly) NCSDKPredictionContextCache *sharedContextCache __attribute__((swift_name("sharedContextCache")));
@property (readonly) NCSDKKotlinArray<NSString *> *tokenNames __attribute__((swift_name("tokenNames")));
@end;

__attribute__((swift_name("ExpressionParser.ComparisonContext")))
@interface NCSDKExpressionParserComparisonContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (NSArray<NCSDKExpressionParserComparisonOperatorContext *> *)findComparisonOperator __attribute__((swift_name("findComparisonOperator()")));
- (NCSDKExpressionParserComparisonOperatorContext * _Nullable)findComparisonOperatorI:(int32_t)i __attribute__((swift_name("findComparisonOperator(i:)")));
- (NSArray<NCSDKExpressionParserElvisExpressionContext *> *)findElvisExpression __attribute__((swift_name("findElvisExpression()")));
- (NCSDKExpressionParserElvisExpressionContext * _Nullable)findElvisExpressionI:(int32_t)i __attribute__((swift_name("findElvisExpression(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.ComparisonOperatorContext")))
@interface NCSDKExpressionParserComparisonOperatorContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)GE __attribute__((swift_name("GE()")));
- (id<NCSDKTerminalNode> _Nullable)LANGLE __attribute__((swift_name("LANGLE()")));
- (id<NCSDKTerminalNode> _Nullable)LE __attribute__((swift_name("LE()")));
- (id<NCSDKTerminalNode> _Nullable)RANGLE __attribute__((swift_name("RANGLE()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.ConjunctionContext")))
@interface NCSDKExpressionParserConjunctionContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSArray<id<NCSDKTerminalNode>> *)CONJ __attribute__((swift_name("CONJ()")));
- (id<NCSDKTerminalNode>)CONJI:(int32_t)i __attribute__((swift_name("CONJ(i:)")));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (NSArray<NCSDKExpressionParserEqualityContext *> *)findEquality __attribute__((swift_name("findEquality()")));
- (NCSDKExpressionParserEqualityContext * _Nullable)findEqualityI:(int32_t)i __attribute__((swift_name("findEquality(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.DisjunctionContext")))
@interface NCSDKExpressionParserDisjunctionContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSArray<id<NCSDKTerminalNode>> *)DISJ __attribute__((swift_name("DISJ()")));
- (id<NCSDKTerminalNode>)DISJI:(int32_t)i __attribute__((swift_name("DISJ(i:)")));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (NSArray<NCSDKExpressionParserConjunctionContext *> *)findConjunction __attribute__((swift_name("findConjunction()")));
- (NCSDKExpressionParserConjunctionContext * _Nullable)findConjunctionI:(int32_t)i __attribute__((swift_name("findConjunction(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.ElvisContext")))
@interface NCSDKExpressionParserElvisContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)COLON __attribute__((swift_name("COLON()")));
- (id<NCSDKTerminalNode> _Nullable)QUEST_NO_WS __attribute__((swift_name("QUEST_NO_WS()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.ElvisExpressionContext")))
@interface NCSDKExpressionParserElvisExpressionContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (NSArray<NCSDKExpressionParserElvisContext *> *)findElvis __attribute__((swift_name("findElvis()")));
- (NCSDKExpressionParserElvisContext * _Nullable)findElvisI:(int32_t)i __attribute__((swift_name("findElvis(i:)")));
- (NSArray<NCSDKExpressionParserInfixFunctionCallContext *> *)findInfixFunctionCall __attribute__((swift_name("findInfixFunctionCall()")));
- (NCSDKExpressionParserInfixFunctionCallContext * _Nullable)findInfixFunctionCallI:(int32_t)i __attribute__((swift_name("findInfixFunctionCall(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.EqualityContext")))
@interface NCSDKExpressionParserEqualityContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (NSArray<NCSDKExpressionParserComparisonContext *> *)findComparison __attribute__((swift_name("findComparison()")));
- (NCSDKExpressionParserComparisonContext * _Nullable)findComparisonI:(int32_t)i __attribute__((swift_name("findComparison(i:)")));
- (NSArray<NCSDKExpressionParserEqualityOperatorContext *> *)findEqualityOperator __attribute__((swift_name("findEqualityOperator()")));
- (NCSDKExpressionParserEqualityOperatorContext * _Nullable)findEqualityOperatorI:(int32_t)i __attribute__((swift_name("findEqualityOperator(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.EqualityOperatorContext")))
@interface NCSDKExpressionParserEqualityOperatorContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)EQEQ __attribute__((swift_name("EQEQ()")));
- (id<NCSDKTerminalNode> _Nullable)EXCL_EQ __attribute__((swift_name("EXCL_EQ()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.ExclContext")))
@interface NCSDKExpressionParserExclContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)EXCL_NO_WS __attribute__((swift_name("EXCL_NO_WS()")));
- (id<NCSDKTerminalNode> _Nullable)EXCL_WS __attribute__((swift_name("EXCL_WS()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.ExponentExpressionContext")))
@interface NCSDKExpressionParserExponentExpressionContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSArray<NCSDKExpressionParserExponentOperatorContext *> *)findExponentOperator __attribute__((swift_name("findExponentOperator()")));
- (NCSDKExpressionParserExponentOperatorContext * _Nullable)findExponentOperatorI:(int32_t)i __attribute__((swift_name("findExponentOperator(i:)")));
- (NSArray<NCSDKExpressionParserPrefixUnaryExpressionContext *> *)findPrefixUnaryExpression __attribute__((swift_name("findPrefixUnaryExpression()")));
- (NCSDKExpressionParserPrefixUnaryExpressionContext * _Nullable)findPrefixUnaryExpressionI:(int32_t)i __attribute__((swift_name("findPrefixUnaryExpression(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.ExponentOperatorContext")))
@interface NCSDKExpressionParserExponentOperatorContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)POW __attribute__((swift_name("POW()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.ExpressionContext")))
@interface NCSDKExpressionParserExpressionContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NCSDKExpressionParserDisjunctionContext * _Nullable)findDisjunction __attribute__((swift_name("findDisjunction()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.IfExpressionContext")))
@interface NCSDKExpressionParserIfExpressionContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)ELSE __attribute__((swift_name("ELSE()")));
- (id<NCSDKTerminalNode> _Nullable)IF __attribute__((swift_name("IF()")));
- (id<NCSDKTerminalNode> _Nullable)LPAREN __attribute__((swift_name("LPAREN()")));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (id<NCSDKTerminalNode> _Nullable)RPAREN __attribute__((swift_name("RPAREN()")));
- (NSArray<NCSDKExpressionParserExpressionContext *> *)findExpression __attribute__((swift_name("findExpression()")));
- (NCSDKExpressionParserExpressionContext * _Nullable)findExpressionI:(int32_t)i __attribute__((swift_name("findExpression(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.IndexingSuffixContext")))
@interface NCSDKExpressionParserIndexingSuffixContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)LSQUARE __attribute__((swift_name("LSQUARE()")));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (id<NCSDKTerminalNode> _Nullable)RSQUARE __attribute__((swift_name("RSQUARE()")));
- (NCSDKExpressionParserExpressionContext * _Nullable)findExpression __attribute__((swift_name("findExpression()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.InfixFunctionCallContext")))
@interface NCSDKExpressionParserInfixFunctionCallContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (NSArray<NCSDKExpressionParserAdditiveExpressionContext *> *)findAdditiveExpression __attribute__((swift_name("findAdditiveExpression()")));
- (NCSDKExpressionParserAdditiveExpressionContext * _Nullable)findAdditiveExpressionI:(int32_t)i __attribute__((swift_name("findAdditiveExpression(i:)")));
- (NSArray<NCSDKExpressionParserSimpleIdentifierContext *> *)findSimpleIdentifier __attribute__((swift_name("findSimpleIdentifier()")));
- (NCSDKExpressionParserSimpleIdentifierContext * _Nullable)findSimpleIdentifierI:(int32_t)i __attribute__((swift_name("findSimpleIdentifier(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.LambdaContext")))
@interface NCSDKExpressionParserLambdaContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)ARROW __attribute__((swift_name("ARROW()")));
- (NSArray<id<NCSDKTerminalNode>> *)COMMA __attribute__((swift_name("COMMA()")));
- (id<NCSDKTerminalNode>)COMMAI:(int32_t)i __attribute__((swift_name("COMMA(i:)")));
- (NSArray<id<NCSDKTerminalNode>> *)Identifier __attribute__((swift_name("Identifier()")));
- (id<NCSDKTerminalNode>)IdentifierI:(int32_t)i __attribute__((swift_name("Identifier(i:)")));
- (id<NCSDKTerminalNode> _Nullable)LCURL __attribute__((swift_name("LCURL()")));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (id<NCSDKTerminalNode> _Nullable)RCURL __attribute__((swift_name("RCURL()")));
- (NCSDKExpressionParserExpressionContext * _Nullable)findExpression __attribute__((swift_name("findExpression()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.LineStringContentContext")))
@interface NCSDKExpressionParserLineStringContentContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)LineStrEscapedChar __attribute__((swift_name("LineStrEscapedChar()")));
- (id<NCSDKTerminalNode> _Nullable)LineStrText __attribute__((swift_name("LineStrText()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.LineStringLiteralContext")))
@interface NCSDKExpressionParserLineStringLiteralContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)QUOTE_CLOSE __attribute__((swift_name("QUOTE_CLOSE()")));
- (id<NCSDKTerminalNode> _Nullable)QUOTE_OPEN __attribute__((swift_name("QUOTE_OPEN()")));
- (NSArray<NCSDKExpressionParserLineStringContentContext *> *)findLineStringContent __attribute__((swift_name("findLineStringContent()")));
- (NCSDKExpressionParserLineStringContentContext * _Nullable)findLineStringContentI:(int32_t)i __attribute__((swift_name("findLineStringContent(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.LiteralConstantContext")))
@interface NCSDKExpressionParserLiteralConstantContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)BinLiteral __attribute__((swift_name("BinLiteral()")));
- (id<NCSDKTerminalNode> _Nullable)BooleanLiteral __attribute__((swift_name("BooleanLiteral()")));
- (id<NCSDKTerminalNode> _Nullable)CharacterLiteral __attribute__((swift_name("CharacterLiteral()")));
- (id<NCSDKTerminalNode> _Nullable)HexLiteral __attribute__((swift_name("HexLiteral()")));
- (id<NCSDKTerminalNode> _Nullable)IntegerLiteral __attribute__((swift_name("IntegerLiteral()")));
- (id<NCSDKTerminalNode> _Nullable)LongLiteral __attribute__((swift_name("LongLiteral()")));
- (id<NCSDKTerminalNode> _Nullable)NullLiteral __attribute__((swift_name("NullLiteral()")));
- (id<NCSDKTerminalNode> _Nullable)RealLiteral __attribute__((swift_name("RealLiteral()")));
- (id<NCSDKTerminalNode> _Nullable)UnsignedLiteral __attribute__((swift_name("UnsignedLiteral()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.MapKeyContext")))
@interface NCSDKExpressionParserMapKeyContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)Identifier __attribute__((swift_name("Identifier()")));
- (id<NCSDKTerminalNode> _Nullable)QUOTE_CLOSE __attribute__((swift_name("QUOTE_CLOSE()")));
- (id<NCSDKTerminalNode> _Nullable)QUOTE_OPEN __attribute__((swift_name("QUOTE_OPEN()")));
- (NSArray<NCSDKExpressionParserLineStringContentContext *> *)findLineStringContent __attribute__((swift_name("findLineStringContent()")));
- (NCSDKExpressionParserLineStringContentContext * _Nullable)findLineStringContentI:(int32_t)i __attribute__((swift_name("findLineStringContent(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.MemberAccessOperatorContext")))
@interface NCSDKExpressionParserMemberAccessOperatorContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)DOT __attribute__((swift_name("DOT()")));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.MultiplicativeExpressionContext")))
@interface NCSDKExpressionParserMultiplicativeExpressionContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (NSArray<NCSDKExpressionParserExponentExpressionContext *> *)findExponentExpression __attribute__((swift_name("findExponentExpression()")));
- (NCSDKExpressionParserExponentExpressionContext * _Nullable)findExponentExpressionI:(int32_t)i __attribute__((swift_name("findExponentExpression(i:)")));
- (NSArray<NCSDKExpressionParserMultiplicativeOperatorContext *> *)findMultiplicativeOperator __attribute__((swift_name("findMultiplicativeOperator()")));
- (NCSDKExpressionParserMultiplicativeOperatorContext * _Nullable)findMultiplicativeOperatorI:(int32_t)i __attribute__((swift_name("findMultiplicativeOperator(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.MultiplicativeOperatorContext")))
@interface NCSDKExpressionParserMultiplicativeOperatorContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)DIV __attribute__((swift_name("DIV()")));
- (id<NCSDKTerminalNode> _Nullable)MOD __attribute__((swift_name("MOD()")));
- (id<NCSDKTerminalNode> _Nullable)MULT __attribute__((swift_name("MULT()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.NavigationSuffixContext")))
@interface NCSDKExpressionParserNavigationSuffixContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (NCSDKExpressionParserMemberAccessOperatorContext * _Nullable)findMemberAccessOperator __attribute__((swift_name("findMemberAccessOperator()")));
- (NCSDKExpressionParserParenthesizedExpressionContext * _Nullable)findParenthesizedExpression __attribute__((swift_name("findParenthesizedExpression()")));
- (NCSDKExpressionParserSimpleIdentifierContext * _Nullable)findSimpleIdentifier __attribute__((swift_name("findSimpleIdentifier()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.ObjectLiteralContext")))
@interface NCSDKExpressionParserObjectLiteralContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSArray<id<NCSDKTerminalNode>> *)COLON __attribute__((swift_name("COLON()")));
- (id<NCSDKTerminalNode>)COLONI:(int32_t)i __attribute__((swift_name("COLON(i:)")));
- (NSArray<id<NCSDKTerminalNode>> *)COMMA __attribute__((swift_name("COMMA()")));
- (id<NCSDKTerminalNode>)COMMAI:(int32_t)i __attribute__((swift_name("COMMA(i:)")));
- (id<NCSDKTerminalNode> _Nullable)LCURL __attribute__((swift_name("LCURL()")));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (id<NCSDKTerminalNode> _Nullable)RCURL __attribute__((swift_name("RCURL()")));
- (NSArray<NCSDKExpressionParserExpressionContext *> *)findExpression __attribute__((swift_name("findExpression()")));
- (NCSDKExpressionParserExpressionContext * _Nullable)findExpressionI:(int32_t)i __attribute__((swift_name("findExpression(i:)")));
- (NSArray<NCSDKExpressionParserMapKeyContext *> *)findMapKey __attribute__((swift_name("findMapKey()")));
- (NCSDKExpressionParserMapKeyContext * _Nullable)findMapKeyI:(int32_t)i __attribute__((swift_name("findMapKey(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.ParenthesizedExpressionContext")))
@interface NCSDKExpressionParserParenthesizedExpressionContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)LPAREN __attribute__((swift_name("LPAREN()")));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (id<NCSDKTerminalNode> _Nullable)RPAREN __attribute__((swift_name("RPAREN()")));
- (NCSDKExpressionParserExpressionContext * _Nullable)findExpression __attribute__((swift_name("findExpression()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.PostfixUnaryExpressionContext")))
@interface NCSDKExpressionParserPostfixUnaryExpressionContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSArray<NCSDKExpressionParserPostfixUnarySuffixContext *> *)findPostfixUnarySuffix __attribute__((swift_name("findPostfixUnarySuffix()")));
- (NCSDKExpressionParserPostfixUnarySuffixContext * _Nullable)findPostfixUnarySuffixI:(int32_t)i __attribute__((swift_name("findPostfixUnarySuffix(i:)")));
- (NCSDKExpressionParserPrimaryExpressionContext * _Nullable)findPrimaryExpression __attribute__((swift_name("findPrimaryExpression()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.PostfixUnarySuffixContext")))
@interface NCSDKExpressionParserPostfixUnarySuffixContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NCSDKExpressionParserIndexingSuffixContext * _Nullable)findIndexingSuffix __attribute__((swift_name("findIndexingSuffix()")));
- (NCSDKExpressionParserNavigationSuffixContext * _Nullable)findNavigationSuffix __attribute__((swift_name("findNavigationSuffix()")));
- (NCSDKExpressionParserValueArgumentsContext * _Nullable)findValueArguments __attribute__((swift_name("findValueArguments()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.PrefixUnaryExpressionContext")))
@interface NCSDKExpressionParserPrefixUnaryExpressionContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NCSDKExpressionParserPostfixUnaryExpressionContext * _Nullable)findPostfixUnaryExpression __attribute__((swift_name("findPostfixUnaryExpression()")));
- (NSArray<NCSDKExpressionParserUnaryPrefixContext *> *)findUnaryPrefix __attribute__((swift_name("findUnaryPrefix()")));
- (NCSDKExpressionParserUnaryPrefixContext * _Nullable)findUnaryPrefixI:(int32_t)i __attribute__((swift_name("findUnaryPrefix(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.PrefixUnaryOperatorContext")))
@interface NCSDKExpressionParserPrefixUnaryOperatorContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)ADD __attribute__((swift_name("ADD()")));
- (id<NCSDKTerminalNode> _Nullable)SUB __attribute__((swift_name("SUB()")));
- (NCSDKExpressionParserExclContext * _Nullable)findExcl __attribute__((swift_name("findExcl()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.PrimaryExpressionContext")))
@interface NCSDKExpressionParserPrimaryExpressionContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NCSDKExpressionParserCollectionLiteralContext * _Nullable)findCollectionLiteral __attribute__((swift_name("findCollectionLiteral()")));
- (NCSDKExpressionParserIfExpressionContext * _Nullable)findIfExpression __attribute__((swift_name("findIfExpression()")));
- (NCSDKExpressionParserLambdaContext * _Nullable)findLambda __attribute__((swift_name("findLambda()")));
- (NCSDKExpressionParserLiteralConstantContext * _Nullable)findLiteralConstant __attribute__((swift_name("findLiteralConstant()")));
- (NCSDKExpressionParserObjectLiteralContext * _Nullable)findObjectLiteral __attribute__((swift_name("findObjectLiteral()")));
- (NCSDKExpressionParserParenthesizedExpressionContext * _Nullable)findParenthesizedExpression __attribute__((swift_name("findParenthesizedExpression()")));
- (NCSDKExpressionParserSimpleIdentifierContext * _Nullable)findSimpleIdentifier __attribute__((swift_name("findSimpleIdentifier()")));
- (NCSDKExpressionParserStringLiteralContext * _Nullable)findStringLiteral __attribute__((swift_name("findStringLiteral()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpressionParser.Rules")))
@interface NCSDKExpressionParserRules : NCSDKKotlinEnum<NCSDKExpressionParserRules *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKExpressionParserRules *ruleStatement __attribute__((swift_name("ruleStatement")));
@property (class, readonly) NCSDKExpressionParserRules *ruleExpression __attribute__((swift_name("ruleExpression")));
@property (class, readonly) NCSDKExpressionParserRules *ruleDisjunction __attribute__((swift_name("ruleDisjunction")));
@property (class, readonly) NCSDKExpressionParserRules *ruleConjunction __attribute__((swift_name("ruleConjunction")));
@property (class, readonly) NCSDKExpressionParserRules *ruleEquality __attribute__((swift_name("ruleEquality")));
@property (class, readonly) NCSDKExpressionParserRules *ruleComparison __attribute__((swift_name("ruleComparison")));
@property (class, readonly) NCSDKExpressionParserRules *ruleElvisexpression __attribute__((swift_name("ruleElvisexpression")));
@property (class, readonly) NCSDKExpressionParserRules *ruleInfixfunctioncall __attribute__((swift_name("ruleInfixfunctioncall")));
@property (class, readonly) NCSDKExpressionParserRules *ruleElvis __attribute__((swift_name("ruleElvis")));
@property (class, readonly) NCSDKExpressionParserRules *ruleAdditiveexpression __attribute__((swift_name("ruleAdditiveexpression")));
@property (class, readonly) NCSDKExpressionParserRules *ruleMultiplicativeexpression __attribute__((swift_name("ruleMultiplicativeexpression")));
@property (class, readonly) NCSDKExpressionParserRules *ruleExponentexpression __attribute__((swift_name("ruleExponentexpression")));
@property (class, readonly) NCSDKExpressionParserRules *rulePrefixunaryexpression __attribute__((swift_name("rulePrefixunaryexpression")));
@property (class, readonly) NCSDKExpressionParserRules *ruleUnaryprefix __attribute__((swift_name("ruleUnaryprefix")));
@property (class, readonly) NCSDKExpressionParserRules *rulePostfixunaryexpression __attribute__((swift_name("rulePostfixunaryexpression")));
@property (class, readonly) NCSDKExpressionParserRules *rulePostfixunarysuffix __attribute__((swift_name("rulePostfixunarysuffix")));
@property (class, readonly) NCSDKExpressionParserRules *ruleIndexingsuffix __attribute__((swift_name("ruleIndexingsuffix")));
@property (class, readonly) NCSDKExpressionParserRules *ruleNavigationsuffix __attribute__((swift_name("ruleNavigationsuffix")));
@property (class, readonly) NCSDKExpressionParserRules *ruleValuearguments __attribute__((swift_name("ruleValuearguments")));
@property (class, readonly) NCSDKExpressionParserRules *rulePrimaryexpression __attribute__((swift_name("rulePrimaryexpression")));
@property (class, readonly) NCSDKExpressionParserRules *ruleParenthesizedexpression __attribute__((swift_name("ruleParenthesizedexpression")));
@property (class, readonly) NCSDKExpressionParserRules *ruleObjectliteral __attribute__((swift_name("ruleObjectliteral")));
@property (class, readonly) NCSDKExpressionParserRules *ruleMapkey __attribute__((swift_name("ruleMapkey")));
@property (class, readonly) NCSDKExpressionParserRules *ruleCollectionliteral __attribute__((swift_name("ruleCollectionliteral")));
@property (class, readonly) NCSDKExpressionParserRules *ruleLiteralconstant __attribute__((swift_name("ruleLiteralconstant")));
@property (class, readonly) NCSDKExpressionParserRules *ruleLambda __attribute__((swift_name("ruleLambda")));
@property (class, readonly) NCSDKExpressionParserRules *ruleStringliteral __attribute__((swift_name("ruleStringliteral")));
@property (class, readonly) NCSDKExpressionParserRules *ruleLinestringliteral __attribute__((swift_name("ruleLinestringliteral")));
@property (class, readonly) NCSDKExpressionParserRules *ruleLinestringcontent __attribute__((swift_name("ruleLinestringcontent")));
@property (class, readonly) NCSDKExpressionParserRules *ruleIfexpression __attribute__((swift_name("ruleIfexpression")));
@property (class, readonly) NCSDKExpressionParserRules *ruleExponentoperator __attribute__((swift_name("ruleExponentoperator")));
@property (class, readonly) NCSDKExpressionParserRules *ruleEqualityoperator __attribute__((swift_name("ruleEqualityoperator")));
@property (class, readonly) NCSDKExpressionParserRules *ruleComparisonoperator __attribute__((swift_name("ruleComparisonoperator")));
@property (class, readonly) NCSDKExpressionParserRules *ruleAdditiveoperator __attribute__((swift_name("ruleAdditiveoperator")));
@property (class, readonly) NCSDKExpressionParserRules *ruleMultiplicativeoperator __attribute__((swift_name("ruleMultiplicativeoperator")));
@property (class, readonly) NCSDKExpressionParserRules *rulePrefixunaryoperator __attribute__((swift_name("rulePrefixunaryoperator")));
@property (class, readonly) NCSDKExpressionParserRules *ruleExcl __attribute__((swift_name("ruleExcl")));
@property (class, readonly) NCSDKExpressionParserRules *ruleMemberaccessoperator __attribute__((swift_name("ruleMemberaccessoperator")));
@property (class, readonly) NCSDKExpressionParserRules *ruleSimpleidentifier __attribute__((swift_name("ruleSimpleidentifier")));
+ (NCSDKKotlinArray<NCSDKExpressionParserRules *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@end;

__attribute__((swift_name("ExpressionParser.SimpleIdentifierContext")))
@interface NCSDKExpressionParserSimpleIdentifierContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)Identifier __attribute__((swift_name("Identifier()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.StatementContext")))
@interface NCSDKExpressionParserStatementContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKTerminalNode> _Nullable)EOF __attribute__((swift_name("EOF()")));
- (NCSDKExpressionParserExpressionContext * _Nullable)findExpression __attribute__((swift_name("findExpression()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.StringLiteralContext")))
@interface NCSDKExpressionParserStringLiteralContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NCSDKExpressionParserLineStringLiteralContext * _Nullable)findLineStringLiteral __attribute__((swift_name("findLineStringLiteral()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpressionParser.Tokens")))
@interface NCSDKExpressionParserTokens : NCSDKKotlinEnum<NCSDKExpressionParserTokens *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKExpressionParserTokens *eof __attribute__((swift_name("eof")));
@property (class, readonly) NCSDKExpressionParserTokens *delimitedcomment __attribute__((swift_name("delimitedcomment")));
@property (class, readonly) NCSDKExpressionParserTokens *linecomment __attribute__((swift_name("linecomment")));
@property (class, readonly) NCSDKExpressionParserTokens *ws __attribute__((swift_name("ws")));
@property (class, readonly) NCSDKExpressionParserTokens *nl __attribute__((swift_name("nl")));
@property (class, readonly) NCSDKExpressionParserTokens *dot __attribute__((swift_name("dot")));
@property (class, readonly) NCSDKExpressionParserTokens *comma __attribute__((swift_name("comma")));
@property (class, readonly) NCSDKExpressionParserTokens *lparen __attribute__((swift_name("lparen")));
@property (class, readonly) NCSDKExpressionParserTokens *rparen __attribute__((swift_name("rparen")));
@property (class, readonly) NCSDKExpressionParserTokens *lsquare __attribute__((swift_name("lsquare")));
@property (class, readonly) NCSDKExpressionParserTokens *rsquare __attribute__((swift_name("rsquare")));
@property (class, readonly) NCSDKExpressionParserTokens *lcurl __attribute__((swift_name("lcurl")));
@property (class, readonly) NCSDKExpressionParserTokens *rcurl __attribute__((swift_name("rcurl")));
@property (class, readonly) NCSDKExpressionParserTokens *pow __attribute__((swift_name("pow")));
@property (class, readonly) NCSDKExpressionParserTokens *mult __attribute__((swift_name("mult")));
@property (class, readonly) NCSDKExpressionParserTokens *mod __attribute__((swift_name("mod")));
@property (class, readonly) NCSDKExpressionParserTokens *div __attribute__((swift_name("div")));
@property (class, readonly) NCSDKExpressionParserTokens *add __attribute__((swift_name("add")));
@property (class, readonly) NCSDKExpressionParserTokens *sub __attribute__((swift_name("sub")));
@property (class, readonly) NCSDKExpressionParserTokens *conj __attribute__((swift_name("conj")));
@property (class, readonly) NCSDKExpressionParserTokens *disj __attribute__((swift_name("disj")));
@property (class, readonly) NCSDKExpressionParserTokens *exclWs __attribute__((swift_name("exclWs")));
@property (class, readonly) NCSDKExpressionParserTokens *exclNoWs __attribute__((swift_name("exclNoWs")));
@property (class, readonly) NCSDKExpressionParserTokens *colon __attribute__((swift_name("colon")));
@property (class, readonly) NCSDKExpressionParserTokens *semicolon __attribute__((swift_name("semicolon")));
@property (class, readonly) NCSDKExpressionParserTokens *assignment __attribute__((swift_name("assignment")));
@property (class, readonly) NCSDKExpressionParserTokens *arrow __attribute__((swift_name("arrow")));
@property (class, readonly) NCSDKExpressionParserTokens *questWs __attribute__((swift_name("questWs")));
@property (class, readonly) NCSDKExpressionParserTokens *questNoWs __attribute__((swift_name("questNoWs")));
@property (class, readonly) NCSDKExpressionParserTokens *langle __attribute__((swift_name("langle")));
@property (class, readonly) NCSDKExpressionParserTokens *rangle __attribute__((swift_name("rangle")));
@property (class, readonly) NCSDKExpressionParserTokens *le __attribute__((swift_name("le")));
@property (class, readonly) NCSDKExpressionParserTokens *ge __attribute__((swift_name("ge")));
@property (class, readonly) NCSDKExpressionParserTokens *exclEq __attribute__((swift_name("exclEq")));
@property (class, readonly) NCSDKExpressionParserTokens *eqeq __attribute__((swift_name("eqeq")));
@property (class, readonly) NCSDKExpressionParserTokens *singleQuote __attribute__((swift_name("singleQuote")));
@property (class, readonly) NCSDKExpressionParserTokens *if_ __attribute__((swift_name("if_")));
@property (class, readonly) NCSDKExpressionParserTokens *else_ __attribute__((swift_name("else_")));
@property (class, readonly) NCSDKExpressionParserTokens *realliteral __attribute__((swift_name("realliteral")));
@property (class, readonly) NCSDKExpressionParserTokens *floatliteral __attribute__((swift_name("floatliteral")));
@property (class, readonly) NCSDKExpressionParserTokens *doubleliteral __attribute__((swift_name("doubleliteral")));
@property (class, readonly) NCSDKExpressionParserTokens *integerliteral __attribute__((swift_name("integerliteral")));
@property (class, readonly) NCSDKExpressionParserTokens *hexliteral __attribute__((swift_name("hexliteral")));
@property (class, readonly) NCSDKExpressionParserTokens *binliteral __attribute__((swift_name("binliteral")));
@property (class, readonly) NCSDKExpressionParserTokens *unsignedliteral __attribute__((swift_name("unsignedliteral")));
@property (class, readonly) NCSDKExpressionParserTokens *longliteral __attribute__((swift_name("longliteral")));
@property (class, readonly) NCSDKExpressionParserTokens *booleanliteral __attribute__((swift_name("booleanliteral")));
@property (class, readonly) NCSDKExpressionParserTokens *nullliteral __attribute__((swift_name("nullliteral")));
@property (class, readonly) NCSDKExpressionParserTokens *characterliteral __attribute__((swift_name("characterliteral")));
@property (class, readonly) NCSDKExpressionParserTokens *identifier __attribute__((swift_name("identifier")));
@property (class, readonly) NCSDKExpressionParserTokens *quoteOpen __attribute__((swift_name("quoteOpen")));
@property (class, readonly) NCSDKExpressionParserTokens *tripleQuoteOpen __attribute__((swift_name("tripleQuoteOpen")));
@property (class, readonly) NCSDKExpressionParserTokens *unicodeClassLl __attribute__((swift_name("unicodeClassLl")));
@property (class, readonly) NCSDKExpressionParserTokens *unicodeClassLm __attribute__((swift_name("unicodeClassLm")));
@property (class, readonly) NCSDKExpressionParserTokens *unicodeClassLo __attribute__((swift_name("unicodeClassLo")));
@property (class, readonly) NCSDKExpressionParserTokens *unicodeClassLt __attribute__((swift_name("unicodeClassLt")));
@property (class, readonly) NCSDKExpressionParserTokens *unicodeClassLu __attribute__((swift_name("unicodeClassLu")));
@property (class, readonly) NCSDKExpressionParserTokens *unicodeClassNd __attribute__((swift_name("unicodeClassNd")));
@property (class, readonly) NCSDKExpressionParserTokens *unicodeClassNl __attribute__((swift_name("unicodeClassNl")));
@property (class, readonly) NCSDKExpressionParserTokens *quoteClose __attribute__((swift_name("quoteClose")));
@property (class, readonly) NCSDKExpressionParserTokens *linestrtext __attribute__((swift_name("linestrtext")));
@property (class, readonly) NCSDKExpressionParserTokens *linestrescapedchar __attribute__((swift_name("linestrescapedchar")));
@property (class, readonly) NCSDKExpressionParserTokens *tripleQuoteClose __attribute__((swift_name("tripleQuoteClose")));
@property (class, readonly) NCSDKExpressionParserTokens *multilinestringquote __attribute__((swift_name("multilinestringquote")));
@property (class, readonly) NCSDKExpressionParserTokens *multilinestrtext __attribute__((swift_name("multilinestrtext")));
@property (class, readonly) NCSDKExpressionParserTokens *insideComment __attribute__((swift_name("insideComment")));
@property (class, readonly) NCSDKExpressionParserTokens *insideWs __attribute__((swift_name("insideWs")));
@property (class, readonly) NCSDKExpressionParserTokens *insideNl __attribute__((swift_name("insideNl")));
@property (class, readonly) NCSDKExpressionParserTokens *errorcharacter __attribute__((swift_name("errorcharacter")));
+ (NCSDKKotlinArray<NCSDKExpressionParserTokens *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@end;

__attribute__((swift_name("ExpressionParser.UnaryPrefixContext")))
@interface NCSDKExpressionParserUnaryPrefixContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (NCSDKExpressionParserPrefixUnaryOperatorContext * _Nullable)findPrefixUnaryOperator __attribute__((swift_name("findPrefixUnaryOperator()")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("ExpressionParser.ValueArgumentsContext")))
@interface NCSDKExpressionParserValueArgumentsContext : NCSDKParserRuleContext
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingState:(int32_t)invokingState __attribute__((swift_name("init(parent:invokingState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSArray<id<NCSDKTerminalNode>> *)COMMA __attribute__((swift_name("COMMA()")));
- (id<NCSDKTerminalNode>)COMMAI:(int32_t)i __attribute__((swift_name("COMMA(i:)")));
- (id<NCSDKTerminalNode> _Nullable)LPAREN __attribute__((swift_name("LPAREN()")));
- (NSArray<id<NCSDKTerminalNode>> *)NL __attribute__((swift_name("NL()")));
- (id<NCSDKTerminalNode>)NLI:(int32_t)i __attribute__((swift_name("NL(i:)")));
- (id<NCSDKTerminalNode> _Nullable)RPAREN __attribute__((swift_name("RPAREN()")));
- (NSArray<NCSDKExpressionParserExpressionContext *> *)findExpression __attribute__((swift_name("findExpression()")));
- (NCSDKExpressionParserExpressionContext * _Nullable)findExpressionI:(int32_t)i __attribute__((swift_name("findExpression(i:)")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((swift_name("TypeDeclarator")))
@protocol NCSDKTypeDeclarator
@required
@property (readonly) NSArray<id<NCSDKKotlinKClass>> *classesByName __attribute__((swift_name("classesByName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpressionParser.solver")))
@interface NCSDKExpressionParserSolver : NCSDKBase <NCSDKTypeDeclarator>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)solver __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKExpressionParserSolver *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<id<NCSDKKotlinKClass>> *classesByName __attribute__((swift_name("classesByName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol NCSDKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<NCSDKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<NCSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol NCSDKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<NCSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<NCSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol NCSDKKotlinx_serialization_coreKSerializer <NCSDKKotlinx_serialization_coreSerializationStrategy, NCSDKKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonAnySerializer")))
@interface NCSDKJsonAnySerializer : NCSDKBase <NCSDKKotlinx_serialization_coreKSerializer>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)deserializeDecoder:(id<NCSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<NCSDKKotlinx_serialization_coreEncoder>)encoder value:(id)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<NCSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonNullableAnySerializer")))
@interface NCSDKJsonNullableAnySerializer : NCSDKBase <NCSDKKotlinx_serialization_coreKSerializer>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)deserializeDecoder:(id<NCSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<NCSDKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<NCSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Workflow")))
@protocol NCSDKWorkflow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(NCSDKWorkflowResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSSet<NSString *> *dependencies __attribute__((swift_name("dependencies")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionWorkflow")))
@interface NCSDKActionWorkflow : NCSDKBase <NCSDKWorkflow>
- (instancetype)initWithAction:(id<NCSDKAction>)action __attribute__((swift_name("init(action:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(NCSDKWorkflowResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSSet<NSString *> *dependencies __attribute__((swift_name("dependencies")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Expression")))
@interface NCSDKExpression : NCSDKBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndExpression")))
@interface NCSDKAndExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NCSDKExpression *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((swift_name("Parser_")))
@protocol NCSDKParser
@required
- (NCSDKExpression *)parseExpression:(NSString *)expression __attribute__((swift_name("parse(expression:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AntlrParser")))
@interface NCSDKAntlrParser : NCSDKBase <NCSDKParser>
- (instancetype)initWithLogger:(id<NCSDKWorkflowLogger>)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (NCSDKExpression *)parseExpression:(NSString *)expression __attribute__((swift_name("parse(expression:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArrayAccessExpression")))
@interface NCSDKArrayAccessExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NCSDKExpression *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BooleanExpression")))
@interface NCSDKBooleanExpression : NCSDKExpression
- (instancetype)initWithValue:(BOOL)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@property (readonly) BOOL value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallExpression")))
@interface NCSDKCallExpression : NCSDKExpression
- (instancetype)initWithExpression:(NCSDKExpression *)expression args:(NCSDKExpression *)args __attribute__((swift_name("init(expression:args:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomWorkflow")))
@interface NCSDKCustomWorkflow : NCSDKBase <NCSDKWorkflow>
- (instancetype)initWithProps:(NCSDKWorkflowProps *)props logger:(id<NCSDKWorkflowLogger>)logger __attribute__((swift_name("init(props:logger:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(NCSDKWorkflowResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSSet<NSString *> *dependencies __attribute__((swift_name("dependencies")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DagNode")))
@interface NCSDKDagNode : NCSDKBase
- (instancetype)initWithId:(NSString *)id if:(NCSDKExpression * _Nullable)if_ workflow:(id<NCSDKWorkflow>)workflow inputs:(NSDictionary<NSString *, NCSDKExpression *> *)inputs parents:(NSSet<NSString *> * _Nullable)parents children:(NSSet<NSString *> * _Nullable)children __attribute__((swift_name("init(id:if:workflow:inputs:parents:children:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKExpression * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<NCSDKWorkflow>)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, NCSDKExpression *> *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSSet<NSString *> * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSSet<NSString *> * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKDagNode *)doCopyId:(NSString *)id if:(NCSDKExpression * _Nullable)if_ workflow:(id<NCSDKWorkflow>)workflow inputs:(NSDictionary<NSString *, NCSDKExpression *> *)inputs parents:(NSSet<NSString *> * _Nullable)parents children:(NSSet<NSString *> * _Nullable)children __attribute__((swift_name("doCopy(id:if:workflow:inputs:parents:children:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSSet<NSString *> * _Nullable children __attribute__((swift_name("children")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly, getter=if) NCSDKExpression * _Nullable if_ __attribute__((swift_name("if_")));
@property (readonly) NSDictionary<NSString *, NCSDKExpression *> *inputs __attribute__((swift_name("inputs")));
@property (readonly) NSSet<NSString *> * _Nullable parents __attribute__((swift_name("parents")));
@property (readonly) id<NCSDKWorkflow> workflow __attribute__((swift_name("workflow")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DivisionExpression")))
@interface NCSDKDivisionExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NCSDKExpression *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoubleExpression")))
@interface NCSDKDoubleExpression : NCSDKExpression
- (instancetype)initWithValue:(double)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@property (readonly) double value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ElvisExpression")))
@interface NCSDKElvisExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NCSDKExpression *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EqExpression")))
@interface NCSDKEqExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NCSDKExpression *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpressionContext")))
@interface NCSDKExpressionContext : NCSDKBase
- (instancetype)initWithLogger:(id<NCSDKWorkflowLogger>)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (id<NCSDKWorkflowLogger>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKExpressionContext *)doCopyLogger:(id<NCSDKWorkflowLogger>)logger __attribute__((swift_name("doCopy(logger:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<NCSDKWorkflowLogger> logger __attribute__((swift_name("logger")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GtExpression")))
@interface NCSDKGtExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NCSDKExpression *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GteExpression")))
@interface NCSDKGteExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NCSDKExpression *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((swift_name("PreludeRegistry")))
@protocol NCSDKPreludeRegistry
@required
@property (readonly) NSDictionary<NSString *, id> *preludes __attribute__((swift_name("preludes")));
@end;

__attribute__((swift_name("MutablePreludeRegistry")))
@protocol NCSDKMutablePreludeRegistry <NCSDKPreludeRegistry>
@required
- (void)registerName:(NSString *)name value:(id)value __attribute__((swift_name("register(name:value:)")));
- (void)registerAllPreludes:(NSDictionary<NSString *, id> *)preludes __attribute__((swift_name("registerAll(preludes:)")));
- (id<NCSDKPreludeRegistry>)takeSnapshot __attribute__((swift_name("takeSnapshot()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HashMapPreludeRegistry")))
@interface NCSDKHashMapPreludeRegistry : NCSDKBase <NCSDKMutablePreludeRegistry>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)registerName:(NSString *)name value:(id)value __attribute__((swift_name("register(name:value:)")));
- (void)registerAllPreludes:(NSDictionary<NSString *, id> *)preludes __attribute__((swift_name("registerAll(preludes:)")));
- (id<NCSDKPreludeRegistry>)takeSnapshot __attribute__((swift_name("takeSnapshot()")));
@property (readonly) NSDictionary<NSString *, id> *preludes __attribute__((swift_name("preludes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentifierExpression")))
@interface NCSDKIdentifierExpression : NCSDKExpression
- (instancetype)initWithIdentifier:(NSString *)identifier __attribute__((swift_name("init(identifier:)"))) __attribute__((objc_designated_initializer));
- (NCSDKIdentifierExpression *)doCopyIdentifier:(NSString *)identifier __attribute__((swift_name("doCopy(identifier:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface NCSDKKotlinThrowable : NCSDKBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (NCSDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface NCSDKKotlinException : NCSDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface NCSDKKotlinRuntimeException : NCSDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface NCSDKKotlinIllegalStateException : NCSDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IllegalOperatorException")))
@interface NCSDKIllegalOperatorException : NCSDKKotlinIllegalStateException
- (instancetype)initWithOperator:(NSString *)operator_ leftValue:(id _Nullable)leftValue rightValue:(id _Nullable)rightValue __attribute__((swift_name("init(operator:leftValue:rightValue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImmutablePreludeRegistry")))
@interface NCSDKImmutablePreludeRegistry : NCSDKBase <NCSDKPreludeRegistry>
- (instancetype)initWithPreludes:(NSDictionary<NSString *, id> *)preludes __attribute__((swift_name("init(preludes:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSDictionary<NSString *, id> *preludes __attribute__((swift_name("preludes")));
@end;

__attribute__((swift_name("WorkflowRegistry")))
@protocol NCSDKWorkflowRegistry
@required
- (NSSet<NSString *> *)getAllRegisteredNames __attribute__((swift_name("getAllRegisteredNames()")));
- (NSArray<id<NCSDKWorkflow>> *)getAllWorkflows __attribute__((swift_name("getAllWorkflows()")));
- (id<NCSDKWorkflow> _Nullable)getOrNullName:(NSString *)name __attribute__((swift_name("getOrNull(name:)")));
- (id<NCSDKWorkflow>)getOrThrowName:(NSString *)name __attribute__((swift_name("getOrThrow(name:)")));
- (BOOL)hasName:(NSString *)name __attribute__((swift_name("has(name:)")));
- (id<NCSDKWorkflowRegistry>)takeSnapshotKeys:(NSSet<NSString *> *)keys __attribute__((swift_name("takeSnapshot(keys:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImmutableWorkflowRegistry")))
@interface NCSDKImmutableWorkflowRegistry : NCSDKBase <NCSDKWorkflowRegistry>
- (instancetype)initWithWorkflows:(NSDictionary<NSString *, id<NCSDKWorkflow>> *)workflows __attribute__((swift_name("init(workflows:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKImmutableWorkflowRegistryCompanion *companion __attribute__((swift_name("companion")));
- (NSSet<NSString *> *)getAllRegisteredNames __attribute__((swift_name("getAllRegisteredNames()")));
- (NSArray<id<NCSDKWorkflow>> *)getAllWorkflows __attribute__((swift_name("getAllWorkflows()")));
- (id<NCSDKWorkflow> _Nullable)getOrNullName:(NSString *)name __attribute__((swift_name("getOrNull(name:)")));
- (id<NCSDKWorkflow>)getOrThrowName:(NSString *)name __attribute__((swift_name("getOrThrow(name:)")));
- (BOOL)hasName:(NSString *)name __attribute__((swift_name("has(name:)")));
- (id<NCSDKWorkflowRegistry>)takeSnapshotKeys:(NSSet<NSString *> *)keys __attribute__((swift_name("takeSnapshot(keys:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImmutableWorkflowRegistry.Companion")))
@interface NCSDKImmutableWorkflowRegistryCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKImmutableWorkflowRegistryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKImmutableWorkflowRegistry *EMPTY __attribute__((swift_name("EMPTY")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvalidSyntaxException")))
@interface NCSDKInvalidSyntaxException : NCSDKKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LambdaExpression")))
@interface NCSDKLambdaExpression : NCSDKExpression
- (instancetype)initWithIdentifiers:(NSArray<NSString *> *)identifiers expression:(NCSDKExpression *)expression __attribute__((swift_name("init(identifiers:expression:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListExpression")))
@interface NCSDKListExpression : NCSDKExpression
- (instancetype)initWithValue:(NSArray<NCSDKExpression *> *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@property (readonly) NSArray<NCSDKExpression *> *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LongExpression")))
@interface NCSDKLongExpression : NCSDKExpression
- (instancetype)initWithValue:(int64_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@property (readonly) int64_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LtExpression")))
@interface NCSDKLtExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NCSDKExpression *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LteExpression")))
@interface NCSDKLteExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NCSDKExpression *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapExpression")))
@interface NCSDKMapExpression : NCSDKExpression
- (instancetype)initWithValue:(NSDictionary<NSString *, NCSDKExpression *> *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@property (readonly) NSDictionary<NSString *, NCSDKExpression *> *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Matcher")))
@protocol NCSDKMatcher
@required
- (BOOL)matchesValue:(NSString *)value __attribute__((swift_name("matches(value:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemberAccessExpression")))
@interface NCSDKMemberAccessExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NSString *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));
- (NCSDKMemberAccessExpression *)doCopyLeft:(NCSDKExpression *)left right:(NSString *)right __attribute__((swift_name("doCopy(left:right:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MinusExpression")))
@interface NCSDKMinusExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NCSDKExpression *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissingRequiredInputException")))
@interface NCSDKMissingRequiredInputException : NCSDKKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissingRequiredWorkflowException")))
@interface NCSDKMissingRequiredWorkflowException : NCSDKKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModularExpression")))
@interface NCSDKModularExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NCSDKExpression *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultiExpression")))
@interface NCSDKMultiExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NCSDKExpression *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((swift_name("MutableWorkflowRegistry")))
@protocol NCSDKMutableWorkflowRegistry <NCSDKWorkflowRegistry>
@required
- (void)registerAction:(id<NCSDKAction>)action __attribute__((swift_name("register(action:)")));
- (void)registerWorkflow:(id<NCSDKWorkflow>)workflow __attribute__((swift_name("register(workflow:)")));
- (void)registerWorkflowDefinition:(NCSDKWorkflowDefinition *)workflowDefinition __attribute__((swift_name("register(workflowDefinition:)")));
- (void)registerName:(NSString *)name workflow:(id<NCSDKWorkflow>)workflow __attribute__((swift_name("register(name:workflow:)")));
- (void)unregisterName:(NSString *)name __attribute__((swift_name("unregister(name:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NegativeUnaryExpression")))
@interface NCSDKNegativeUnaryExpression : NCSDKExpression
- (instancetype)initWithExpression:(NCSDKExpression *)expression __attribute__((swift_name("init(expression:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((swift_name("Scope")))
@protocol NCSDKScope
@required
- (id _Nullable)getExpression:(NSString *)expression __attribute__((swift_name("get(expression:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NestedScope")))
@interface NCSDKNestedScope : NCSDKBase <NCSDKScope>
- (instancetype)initWithInner:(id<NCSDKScope>)inner outer:(id<NCSDKScope>)outer __attribute__((swift_name("init(inner:outer:)"))) __attribute__((objc_designated_initializer));
- (NCSDKNestedScope *)doCopyInner:(id<NCSDKScope>)inner outer:(id<NCSDKScope>)outer __attribute__((swift_name("doCopy(inner:outer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getExpression:(NSString *)expression __attribute__((swift_name("get(expression:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("WorkflowLogger")))
@protocol NCSDKWorkflowLogger
@required
@property (readonly) NCSDKWorkflowLoggerLevel *level __attribute__((swift_name("level")));
@property (readonly) id<NCSDKWorkflowLoggerWriter> writer __attribute__((swift_name("writer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoOpWorkflowLogger")))
@interface NCSDKNoOpWorkflowLogger : NCSDKBase <NCSDKWorkflowLogger>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noOpWorkflowLogger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKNoOpWorkflowLogger *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKWorkflowLoggerLevel *level __attribute__((swift_name("level")));
@property (readonly) NCSDKNoOpWorkflowLoggerWriter *writer __attribute__((swift_name("writer")));
@end;

__attribute__((swift_name("WorkflowLoggerWriter")))
@protocol NCSDKWorkflowLoggerWriter
@required
- (void)debugMessage:(NSString *)message __attribute__((swift_name("debug(message:)")));
- (void)errorMessage:(NSString *)message __attribute__((swift_name("error(message:)")));
- (void)errorMessage:(NSString *)message e:(NCSDKKotlinThrowable *)e __attribute__((swift_name("error(message:e:)")));
- (void)infoMessage:(NSString *)message __attribute__((swift_name("info(message:)")));
- (void)warnMessage:(NSString *)message __attribute__((swift_name("warn(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoOpWorkflowLoggerWriter")))
@interface NCSDKNoOpWorkflowLoggerWriter : NCSDKBase <NCSDKWorkflowLoggerWriter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noOpWorkflowLoggerWriter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKNoOpWorkflowLoggerWriter *shared __attribute__((swift_name("shared")));
- (void)debugMessage:(NSString *)message __attribute__((swift_name("debug(message:)")));
- (void)errorMessage:(NSString *)message __attribute__((swift_name("error(message:)")));
- (void)errorMessage:(NSString *)message e:(NCSDKKotlinThrowable *)e __attribute__((swift_name("error(message:e:)")));
- (void)infoMessage:(NSString *)message __attribute__((swift_name("info(message:)")));
- (void)warnMessage:(NSString *)message __attribute__((swift_name("warn(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotEqExpression")))
@interface NCSDKNotEqExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NCSDKExpression *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotExpression")))
@interface NCSDKNotExpression : NCSDKExpression
- (instancetype)initWithExpression:(NCSDKExpression *)expression __attribute__((swift_name("init(expression:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NullExpression")))
@interface NCSDKNullExpression : NCSDKExpression
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nullExpression __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKNullExpression *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrExpression")))
@interface NCSDKOrExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NCSDKExpression *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlusExpression")))
@interface NCSDKPlusExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NCSDKExpression *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@property (readonly) NCSDKExpression *left __attribute__((swift_name("left")));
@property (readonly) NCSDKExpression *right __attribute__((swift_name("right")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositiveUnaryExpression")))
@interface NCSDKPositiveUnaryExpression : NCSDKExpression
- (instancetype)initWithExpression:(NCSDKExpression *)expression __attribute__((swift_name("init(expression:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PowerExpression")))
@interface NCSDKPowerExpression : NCSDKExpression
- (instancetype)initWithLeft:(NCSDKExpression *)left right:(NCSDKExpression *)right __attribute__((swift_name("init(left:right:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScopeCompanion")))
@interface NCSDKScopeCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKScopeCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKScope>)ofValue:(NSDictionary<NSString *, id> *)value __attribute__((swift_name("of(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleMatcher")))
@interface NCSDKSimpleMatcher : NCSDKBase <NCSDKMatcher>
- (instancetype)initWithName:(NSString *)name matcher:(NCSDKKotlinRegex *)matcher __attribute__((swift_name("init(name:matcher:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSimpleMatcher *)doCopyName:(NSString *)name matcher:(NCSDKKotlinRegex *)matcher __attribute__((swift_name("doCopy(name:matcher:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchesValue:(NSString *)value __attribute__((swift_name("matches(value:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleScope")))
@interface NCSDKSimpleScope : NCSDKBase <NCSDKScope>
- (instancetype)initWithValue:(NSDictionary<NSString *, id> *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NCSDKSimpleScope *)doCopyValue:(NSDictionary<NSString *, id> *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getExpression:(NSString *)expression __attribute__((swift_name("get(expression:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StdoutWorkflowLogger")))
@interface NCSDKStdoutWorkflowLogger : NCSDKBase <NCSDKWorkflowLoggerWriter>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) NCSDKStdoutWorkflowLoggerCompanion *companion __attribute__((swift_name("companion")));
- (void)debugMessage:(NSString *)message __attribute__((swift_name("debug(message:)")));
- (void)errorMessage:(NSString *)message __attribute__((swift_name("error(message:)")));
- (void)errorMessage:(NSString *)message e:(NCSDKKotlinThrowable *)e __attribute__((swift_name("error(message:e:)")));
- (void)infoMessage:(NSString *)message __attribute__((swift_name("info(message:)")));
- (void)warnMessage:(NSString *)message __attribute__((swift_name("warn(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StdoutWorkflowLogger.Companion")))
@interface NCSDKStdoutWorkflowLoggerCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKStdoutWorkflowLoggerCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKWorkflowLogger>)createLevel:(NCSDKWorkflowLoggerLevel *)level __attribute__((swift_name("create(level:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringExpression")))
@interface NCSDKStringExpression : NCSDKExpression
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TernaryExpression")))
@interface NCSDKTernaryExpression : NCSDKExpression
- (instancetype)initWithCondition:(NCSDKExpression *)condition ifTrue:(NCSDKExpression *)ifTrue ifFalse:(NCSDKExpression *)ifFalse __attribute__((swift_name("init(condition:ifTrue:ifFalse:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)evaluateContext:(NCSDKExpressionContext *)context scope:(id<NCSDKScope>)scope completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("evaluate(context:scope:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UndefinedException")))
@interface NCSDKUndefinedException : NCSDKKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnsupportedArgumentTypeException")))
@interface NCSDKUnsupportedArgumentTypeException : NCSDKKotlinException
- (instancetype)initWithType:(id<NCSDKKotlinKClass>)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) id<NCSDKKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Value")))
@interface NCSDKValue : NCSDKBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Value.FuncValue")))
@interface NCSDKValueFuncValue : NCSDKValue
- (instancetype)initWithFunc:(id<NCSDKKotlinSuspendFunction1>)func __attribute__((swift_name("init(func:)"))) __attribute__((objc_designated_initializer));
- (id<NCSDKKotlinSuspendFunction1>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKValueFuncValue *)doCopyFunc:(id<NCSDKKotlinSuspendFunction1>)func __attribute__((swift_name("doCopy(func:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<NCSDKKotlinSuspendFunction1> func __attribute__((swift_name("func")));
@end;

__attribute__((swift_name("WorkflowContext")))
@protocol NCSDKWorkflowContext
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getInputKey:(NSString *)key completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getInput(key:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getInputsWithCompletionHandler:(void (^)(NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getInputs(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRawExpressionKey:(NSString *)key completionHandler:(void (^)(NCSDKExpression * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getRawExpression(key:completionHandler:)")));
@property (readonly) id<NCSDKWorkflowLogger> logger __attribute__((swift_name("logger")));
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));
@property (readonly) id<NCSDKScope> scope __attribute__((swift_name("scope")));
@property (readonly) id<NCSDKWorkflowRegistry> workflowRegistry __attribute__((swift_name("workflowRegistry")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowContextCompanion")))
@interface NCSDKWorkflowContextCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKWorkflowContextCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKWorkflowContext>)ofInputs:(NSDictionary<NSString *, id> *)inputs requestId:(NSString * _Nullable)requestId __attribute__((swift_name("of(inputs:requestId:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowFactory")))
@interface NCSDKWorkflowFactory : NCSDKBase
- (instancetype)initWithWorkflowRegistry:(id<NCSDKMutableWorkflowRegistry>)workflowRegistry preludeRegistry:(id<NCSDKPreludeRegistry>)preludeRegistry parser:(id<NCSDKParser>)parser logger:(id<NCSDKWorkflowLogger>)logger __attribute__((swift_name("init(workflowRegistry:preludeRegistry:parser:logger:)"))) __attribute__((objc_designated_initializer));
- (id<NCSDKWorkflow>)createDefinition:(NCSDKWorkflowDefinition *)definition coroutineScope:(id<NCSDKKotlinx_coroutines_coreCoroutineScope>)coroutineScope __attribute__((swift_name("create(definition:coroutineScope:)")));
- (void)createAndRegisterAllDefinitions:(NSArray<NCSDKWorkflowDefinition *> *)definitions __attribute__((swift_name("createAndRegisterAll(definitions:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowLoggerLevel")))
@interface NCSDKWorkflowLoggerLevel : NCSDKKotlinEnum<NCSDKWorkflowLoggerLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKWorkflowLoggerLevel *off __attribute__((swift_name("off")));
@property (class, readonly) NCSDKWorkflowLoggerLevel *error __attribute__((swift_name("error")));
@property (class, readonly) NCSDKWorkflowLoggerLevel *warn __attribute__((swift_name("warn")));
@property (class, readonly) NCSDKWorkflowLoggerLevel *info __attribute__((swift_name("info")));
@property (class, readonly) NCSDKWorkflowLoggerLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) NCSDKWorkflowLoggerLevel *trace __attribute__((swift_name("trace")));
+ (NCSDKKotlinArray<NCSDKWorkflowLoggerLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("WorkflowMessage")))
@interface NCSDKWorkflowMessage : NCSDKBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowMessage.Completed")))
@interface NCSDKWorkflowMessageCompleted : NCSDKWorkflowMessage
- (instancetype)initWithId:(NSString *)id results:(id _Nullable)results __attribute__((swift_name("init(id:results:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKWorkflowMessageCompleted *)doCopyId:(NSString *)id results:(id _Nullable)results __attribute__((swift_name("doCopy(id:results:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) id _Nullable results __attribute__((swift_name("results")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowMessage.Error")))
@interface NCSDKWorkflowMessageError : NCSDKWorkflowMessage
- (instancetype)initWithId:(NSString *)id cause:(NCSDKKotlinThrowable *)cause __attribute__((swift_name("init(id:cause:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKKotlinThrowable *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKWorkflowMessageError *)doCopyId:(NSString *)id cause:(NCSDKKotlinThrowable *)cause __attribute__((swift_name("doCopy(id:cause:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKKotlinThrowable *cause __attribute__((swift_name("cause")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowMessage.Progress")))
@interface NCSDKWorkflowMessageProgress : NCSDKWorkflowMessage
- (instancetype)initWithId:(NSString *)id outputs:(id _Nullable)outputs __attribute__((swift_name("init(id:outputs:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKWorkflowMessageProgress *)doCopyId:(NSString *)id outputs:(id _Nullable)outputs __attribute__((swift_name("doCopy(id:outputs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) id _Nullable outputs __attribute__((swift_name("outputs")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowMessage.Skipped")))
@interface NCSDKWorkflowMessageSkipped : NCSDKWorkflowMessage
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKWorkflowMessageSkipped *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowMessage.WorkflowEvent")))
@interface NCSDKWorkflowMessageWorkflowEvent : NCSDKWorkflowMessage
- (instancetype)initWithId:(NSString *)id type:(NSString *)type isDebug:(BOOL)isDebug value:(id _Nullable)value __attribute__((swift_name("init(id:type:isDebug:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKWorkflowMessageWorkflowEvent *)doCopyId:(NSString *)id type:(NSString *)type isDebug:(BOOL)isDebug value:(id _Nullable)value __attribute__((swift_name("doCopy(id:type:isDebug:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isDebug __attribute__((swift_name("isDebug")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowProps")))
@interface NCSDKWorkflowProps : NCSDKBase
- (instancetype)initWithName:(NSString *)name registry:(id<NCSDKWorkflowRegistry>)registry preludes:(NSDictionary<NSString *, id> *)preludes dags:(NSDictionary<NSString *, NCSDKDagNode *> *)dags outputs:(NCSDKExpression * _Nullable)outputs __attribute__((swift_name("init(name:registry:preludes:dags:outputs:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<NCSDKWorkflowRegistry>)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, id> *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKExpression * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKWorkflowProps *)doCopyName:(NSString *)name registry:(id<NCSDKWorkflowRegistry>)registry preludes:(NSDictionary<NSString *, id> *)preludes dags:(NSDictionary<NSString *, NCSDKDagNode *> *)dags outputs:(NCSDKExpression * _Nullable)outputs __attribute__((swift_name("doCopy(name:registry:preludes:dags:outputs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NCSDKDagNode * _Nullable)getNodeId:(NSString *)id __attribute__((swift_name("getNode(id:)")));
- (id)getNodes __attribute__((swift_name("getNodes()")));
- (NSArray<NCSDKDagNode *> *)getNodesAtFirstLevel __attribute__((swift_name("getNodesAtFirstLevel()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NCSDKExpression * _Nullable outputs __attribute__((swift_name("outputs")));
@property (readonly) NSDictionary<NSString *, id> *preludes __attribute__((swift_name("preludes")));
@property (readonly) id<NCSDKWorkflowRegistry> registry __attribute__((swift_name("registry")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowRegistryImpl")))
@interface NCSDKWorkflowRegistryImpl : NCSDKBase <NCSDKMutableWorkflowRegistry>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSSet<NSString *> *)getAllRegisteredNames __attribute__((swift_name("getAllRegisteredNames()")));
- (NSArray<id<NCSDKWorkflow>> *)getAllWorkflows __attribute__((swift_name("getAllWorkflows()")));
- (id<NCSDKWorkflow> _Nullable)getOrNullName:(NSString *)name __attribute__((swift_name("getOrNull(name:)")));
- (id<NCSDKWorkflow>)getOrThrowName:(NSString *)name __attribute__((swift_name("getOrThrow(name:)")));
- (BOOL)hasName:(NSString *)name __attribute__((swift_name("has(name:)")));
- (void)registerWorkflowDefinition:(NCSDKWorkflowDefinition *)workflowDefinition __attribute__((swift_name("register(workflowDefinition:)")));
- (void)registerName:(NSString *)name workflow:(id<NCSDKWorkflow>)workflow __attribute__((swift_name("register(name:workflow:)")));
- (id<NCSDKWorkflowRegistry>)takeSnapshotKeys:(NSSet<NSString *> *)keys __attribute__((swift_name("takeSnapshot(keys:)")));
- (void)unregisterName:(NSString *)name __attribute__((swift_name("unregister(name:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowResult")))
@interface NCSDKWorkflowResult : NCSDKBase
- (instancetype)initWithChannel:(id<NCSDKKotlinx_coroutines_coreReceiveChannel>)channel result:(id<NCSDKKotlinx_coroutines_coreDeferred>)result __attribute__((swift_name("init(channel:result:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)consumeEachBlock:(id<NCSDKKotlinSuspendFunction1>)block completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("consumeEach(block:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowState")))
@interface NCSDKWorkflowState : NCSDKBase
- (instancetype)initWithChannel:(id<NCSDKKotlinx_coroutines_coreSendChannel>)channel coroutineScope:(id<NCSDKKotlinx_coroutines_coreCoroutineScope>)coroutineScope props:(NCSDKWorkflowProps *)props context:(id<NCSDKWorkflowContext>)context logger:(id<NCSDKWorkflowLogger>)logger __attribute__((swift_name("init(channel:coroutineScope:props:context:logger:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKWorkflowStateCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFinalOutputsWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFinalOutputs(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)onReceiveMessage:(NCSDKWorkflowMessage *)message completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("onReceive(message:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)startWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("start(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowState.Companion")))
@interface NCSDKWorkflowStateCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKWorkflowStateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) id<NCSDKScope> PRELUDE_SCOPE __attribute__((swift_name("PRELUDE_SCOPE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobDefinition")))
@interface NCSDKJobDefinition : NCSDKBase
- (instancetype)initWithUse:(NSString *)use if:(NSString * _Nullable)if_ needs:(NSSet<NSString *> * _Nullable)needs inputs:(NSDictionary<NSString *, NCSDKKotlinx_serialization_jsonJsonElement *> * _Nullable)inputs __attribute__((swift_name("init(use:if:needs:inputs:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKJobDefinitionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSSet<NSString *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, NCSDKKotlinx_serialization_jsonJsonElement *> * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKJobDefinition *)doCopyUse:(NSString *)use if:(NSString * _Nullable)if_ needs:(NSSet<NSString *> * _Nullable)needs inputs:(NSDictionary<NSString *, NCSDKKotlinx_serialization_jsonJsonElement *> * _Nullable)inputs __attribute__((swift_name("doCopy(use:if:needs:inputs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=if) NSString * _Nullable if_ __attribute__((swift_name("if_")));
@property (readonly) NSDictionary<NSString *, NCSDKKotlinx_serialization_jsonJsonElement *> * _Nullable inputs __attribute__((swift_name("inputs")));
@property (readonly) NSSet<NSString *> * _Nullable needs __attribute__((swift_name("needs")));
@property (readonly) NSString *use __attribute__((swift_name("use")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobDefinition.Companion")))
@interface NCSDKJobDefinitionCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKJobDefinitionCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowDefinition")))
@interface NCSDKWorkflowDefinition : NCSDKBase
- (instancetype)initWithName:(NSString *)name imports:(NSArray<NSString *> * _Nullable)imports inputs:(NSDictionary<NSString *, NSDictionary<NSString *, NCSDKKotlinx_serialization_jsonJsonElement *> *> * _Nullable)inputs jobs:(NSDictionary<NSString *, NCSDKJobDefinition *> *)jobs outputs:(NCSDKKotlinx_serialization_jsonJsonElement * _Nullable)outputs __attribute__((swift_name("init(name:imports:inputs:jobs:outputs:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKWorkflowDefinitionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, NSDictionary<NSString *, NCSDKKotlinx_serialization_jsonJsonElement *> *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, NCSDKJobDefinition *> *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKKotlinx_serialization_jsonJsonElement * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKWorkflowDefinition *)doCopyName:(NSString *)name imports:(NSArray<NSString *> * _Nullable)imports inputs:(NSDictionary<NSString *, NSDictionary<NSString *, NCSDKKotlinx_serialization_jsonJsonElement *> *> * _Nullable)inputs jobs:(NSDictionary<NSString *, NCSDKJobDefinition *> *)jobs outputs:(NCSDKKotlinx_serialization_jsonJsonElement * _Nullable)outputs __attribute__((swift_name("doCopy(name:imports:inputs:jobs:outputs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable imports __attribute__((swift_name("imports")));
@property (readonly) NSDictionary<NSString *, NSDictionary<NSString *, NCSDKKotlinx_serialization_jsonJsonElement *> *> * _Nullable inputs __attribute__((swift_name("inputs")));
@property (readonly) NSDictionary<NSString *, NCSDKJobDefinition *> *jobs __attribute__((swift_name("jobs")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NCSDKKotlinx_serialization_jsonJsonElement * _Nullable outputs __attribute__((swift_name("outputs")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowDefinition.Companion")))
@interface NCSDKWorkflowDefinitionCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKWorkflowDefinitionCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Closeable")))
@protocol NCSDKCloseable
@required

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("StringIdGenerator")))
@protocol NCSDKStringIdGenerator
@required
- (NSString *)nextId __attribute__((swift_name("nextId()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Arrays")))
@interface NCSDKArrays : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)arrays __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKArrays *shared __attribute__((swift_name("shared")));
- (BOOL)equalsA:(NCSDKKotlinArray<id> * _Nullable)a b:(NCSDKKotlinArray<id> * _Nullable)b __attribute__((swift_name("equals(a:b:)")));
- (BOOL)equalsA:(NCSDKKotlinIntArray * _Nullable)a b_:(NCSDKKotlinIntArray * _Nullable)b __attribute__((swift_name("equals(a:b_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BitSet")))
@interface NCSDKBitSet : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)cardinality __attribute__((swift_name("cardinality()")));
- (void)clearBitIndex:(int32_t)bitIndex __attribute__((swift_name("clear(bitIndex:)")));
- (BOOL)getBitIndex:(int32_t)bitIndex __attribute__((swift_name("get(bitIndex:)")));
- (int32_t)nextSetBitI:(int32_t)i __attribute__((swift_name("nextSetBit(i:)")));
- (void)orAlts:(NCSDKBitSet *)alts __attribute__((swift_name("or(alts:)")));
- (void)setBitIndex:(int32_t)bitIndex __attribute__((swift_name("set(bitIndex:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Collections")))
@interface NCSDKCollections : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)collections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKCollections *shared __attribute__((swift_name("shared")));
- (id)maxPrecedencePredicates:(NSArray<id> *)precedencePredicates __attribute__((swift_name("max(precedencePredicates:)")));
- (id)minPrecedencePredicates:(NSArray<id> *)precedencePredicates __attribute__((swift_name("min(precedencePredicates:)")));
@end;

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("IdentityHashMap")))
@interface NCSDKIdentityHashMap : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Math")))
@interface NCSDKMath : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)math __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKMath *shared __attribute__((swift_name("shared")));
- (double)floorD:(double)d __attribute__((swift_name("floor(d:)")));
- (int32_t)maxA:(int32_t)a b:(int32_t)b __attribute__((swift_name("max(a:b:)")));
- (int32_t)minA:(int32_t)a b:(int32_t)b __attribute__((swift_name("min(a:b:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Type")))
@interface NCSDKType : NCSDKBase
- (instancetype)initWithJavaClass:(id<NCSDKKotlinKClass>)javaClass __attribute__((swift_name("init(javaClass:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<NCSDKKotlinKClass> javaClass __attribute__((swift_name("javaClass")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UUID")))
@interface NCSDKUUID : NCSDKBase
- (instancetype)initWithMost:(int64_t)most least:(int64_t)least __attribute__((swift_name("init(most:least:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithWrapped:(NCSDKUuidUuid *)wrapped __attribute__((swift_name("init(wrapped:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKUUIDCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UUID.Companion")))
@interface NCSDKUUIDCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKUUIDCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKUUID *)fromStringEncoded:(NSString *)encoded __attribute__((swift_name("fromString(encoded:)")));
@end;

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("WeakHashMap")))
@interface NCSDKWeakHashMap : NSObject
@end;

__attribute__((swift_name("ANTLRErrorListener")))
@protocol NCSDKANTLRErrorListener
@required
- (void)reportAmbiguityRecognizer:(NCSDKParser *)recognizer dfa:(NCSDKDFA *)dfa startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex exact:(BOOL)exact ambigAlts:(NCSDKBitSet *)ambigAlts configs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("reportAmbiguity(recognizer:dfa:startIndex:stopIndex:exact:ambigAlts:configs:)")));
- (void)reportAttemptingFullContextRecognizer:(NCSDKParser *)recognizer dfa:(NCSDKDFA *)dfa startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex conflictingAlts:(NCSDKBitSet *)conflictingAlts configs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("reportAttemptingFullContext(recognizer:dfa:startIndex:stopIndex:conflictingAlts:configs:)")));
- (void)reportContextSensitivityRecognizer:(NCSDKParser *)recognizer dfa:(NCSDKDFA *)dfa startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex prediction:(int32_t)prediction configs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("reportContextSensitivity(recognizer:dfa:startIndex:stopIndex:prediction:configs:)")));
- (void)syntaxErrorRecognizer:(NCSDKRecognizer<id, id> *)recognizer offendingSymbol:(id _Nullable)offendingSymbol line:(int32_t)line charPositionInLine:(int32_t)charPositionInLine msg:(NSString *)msg e:(NCSDKRecognitionException * _Nullable)e __attribute__((swift_name("syntaxError(recognizer:offendingSymbol:line:charPositionInLine:msg:e:)")));
@end;

__attribute__((swift_name("ANTLRErrorStrategy")))
@protocol NCSDKANTLRErrorStrategy
@required
- (BOOL)inErrorRecoveryModeRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("inErrorRecoveryMode(recognizer:)")));
- (void)recoverRecognizer:(NCSDKParser *)recognizer e:(NCSDKRecognitionException *)e __attribute__((swift_name("recover(recognizer:e:)")));
- (id<NCSDKToken>)recoverInlineRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("recoverInline(recognizer:)")));
- (void)reportErrorRecognizer:(NCSDKParser *)recognizer e:(NCSDKRecognitionException *)e __attribute__((swift_name("reportError(recognizer:e:)")));
- (void)reportMatchRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("reportMatch(recognizer:)")));
- (void)resetRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("reset(recognizer:)")));
- (void)syncRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("sync(recognizer:)")));
@end;

__attribute__((swift_name("IntStream")))
@protocol NCSDKIntStream
@required
- (int32_t)LAI:(int32_t)i __attribute__((swift_name("LA(i:)")));
- (void)consume_ __attribute__((swift_name("consume_()")));
- (int32_t)index __attribute__((swift_name("index()")));
- (int32_t)mark __attribute__((swift_name("mark()")));
- (void)releaseMarker:(int32_t)marker __attribute__((swift_name("release(marker:)")));
- (void)seekIndex:(int32_t)index __attribute__((swift_name("seek(index:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) NSString * _Nullable sourceName __attribute__((swift_name("sourceName")));
@end;

__attribute__((swift_name("CharStream")))
@protocol NCSDKCharStream <NCSDKIntStream>
@required
- (NSString *)getTextInterval:(NCSDKInterval *)interval __attribute__((swift_name("getText(interval:)")));
@end;

__attribute__((swift_name("ANTLRInputStream")))
@interface NCSDKANTLRInputStream : NCSDKBase <NCSDKCharStream>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("as of 4.7 Please use {@link CharStreams} interface.")));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithInput:(NSString *)input __attribute__((swift_name("init(input:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("as of 4.7 Please use {@link CharStreams} interface.")));
@property (class, readonly, getter=companion) NCSDKANTLRInputStreamCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)LAI:(int32_t)i __attribute__((swift_name("LA(i:)")));
- (int32_t)LTI:(int32_t)i __attribute__((swift_name("LT(i:)")));
- (void)consume_ __attribute__((swift_name("consume_()")));
- (NSString *)getTextInterval:(NCSDKInterval *)interval __attribute__((swift_name("getText(interval:)")));
- (int32_t)index __attribute__((swift_name("index()")));
- (int32_t)mark __attribute__((swift_name("mark()")));
- (void)releaseMarker:(int32_t)marker __attribute__((swift_name("release(marker:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)seekIndex:(int32_t)index __attribute__((swift_name("seek(index:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property NCSDKKotlinCharArray * _Nullable data __attribute__((swift_name("data")));
@property int32_t n __attribute__((swift_name("n")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property int32_t p __attribute__((swift_name("p")));
@property (readonly) NSString *sourceName __attribute__((swift_name("sourceName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ANTLRFileStream")))
@interface NCSDKANTLRFileStream : NCSDKANTLRInputStream
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithInput:(NSString *)input __attribute__((swift_name("init(input:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKANTLRFileStreamCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *sourceName __attribute__((swift_name("sourceName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ANTLRFileStream.Companion")))
@interface NCSDKANTLRFileStreamCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKANTLRFileStreamCompanion *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeFileName:(NSString *)fileName completionHandler:(void (^)(NCSDKANTLRFileStream * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(fileName:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ANTLRInputStream.Companion")))
@interface NCSDKANTLRInputStreamCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKANTLRInputStreamCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t INITIAL_BUFFER_SIZE __attribute__((swift_name("INITIAL_BUFFER_SIZE")));
@property (readonly) int32_t READ_BUFFER_SIZE __attribute__((swift_name("READ_BUFFER_SIZE")));
@end;

__attribute__((swift_name("AbstractCharStreams")))
@interface NCSDKAbstractCharStreams : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<NCSDKCharStream>)fromStringS:(NSString *)s sourceName:(NSString *)sourceName __attribute__((swift_name("fromString(s:sourceName:)")));
@end;

__attribute__((swift_name("DefaultErrorStrategy")))
@interface NCSDKDefaultErrorStrategy : NCSDKBase <NCSDKANTLRErrorStrategy>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)beginErrorConditionRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("beginErrorCondition(recognizer:)")));
- (void)consumeUntilRecognizer:(NCSDKParser *)recognizer set:(NCSDKIntervalSet *)set __attribute__((swift_name("consumeUntil(recognizer:set:)")));
- (void)endErrorConditionRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("endErrorCondition(recognizer:)")));
- (NSString *)escapeWSAndQuoteS:(NSString *)s __attribute__((swift_name("escapeWSAndQuote(s:)")));
- (NCSDKIntervalSet *)getErrorRecoverySetRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("getErrorRecoverySet(recognizer:)")));
- (NCSDKIntervalSet *)getExpectedTokensRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("getExpectedTokens(recognizer:)")));
- (id<NCSDKToken>)getMissingSymbolRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("getMissingSymbol(recognizer:)")));
- (NSString *)getSymbolTextSymbol:(id<NCSDKToken>)symbol __attribute__((swift_name("getSymbolText(symbol:)")));
- (int32_t)getSymbolTypeSymbol:(id<NCSDKToken>)symbol __attribute__((swift_name("getSymbolType(symbol:)")));
- (NSString *)getTokenErrorDisplayT:(id<NCSDKToken> _Nullable)t __attribute__((swift_name("getTokenErrorDisplay(t:)")));
- (BOOL)inErrorRecoveryModeRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("inErrorRecoveryMode(recognizer:)")));
- (void)recoverRecognizer:(NCSDKParser *)recognizer e:(NCSDKRecognitionException *)e __attribute__((swift_name("recover(recognizer:e:)")));
- (id<NCSDKToken>)recoverInlineRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("recoverInline(recognizer:)")));
- (void)reportErrorRecognizer:(NCSDKParser *)recognizer e:(NCSDKRecognitionException *)e __attribute__((swift_name("reportError(recognizer:e:)")));
- (void)reportFailedPredicateRecognizer:(NCSDKParser *)recognizer e:(NCSDKFailedPredicateException *)e __attribute__((swift_name("reportFailedPredicate(recognizer:e:)")));
- (void)reportInputMismatchRecognizer:(NCSDKParser *)recognizer e:(NCSDKInputMismatchException *)e __attribute__((swift_name("reportInputMismatch(recognizer:e:)")));
- (void)reportMatchRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("reportMatch(recognizer:)")));
- (void)reportMissingTokenRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("reportMissingToken(recognizer:)")));
- (void)reportNoViableAlternativeRecognizer:(NCSDKParser *)recognizer e:(NCSDKNoViableAltException *)e __attribute__((swift_name("reportNoViableAlternative(recognizer:e:)")));
- (void)reportUnwantedTokenRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("reportUnwantedToken(recognizer:)")));
- (void)resetRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("reset(recognizer:)")));
- (id<NCSDKToken> _Nullable)singleTokenDeletionRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("singleTokenDeletion(recognizer:)")));
- (BOOL)singleTokenInsertionRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("singleTokenInsertion(recognizer:)")));
- (void)syncRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("sync(recognizer:)")));
@property BOOL errorRecoveryMode __attribute__((swift_name("errorRecoveryMode")));
@property int32_t lastErrorIndex __attribute__((swift_name("lastErrorIndex")));
@property NCSDKIntervalSet * _Nullable lastErrorStates __attribute__((swift_name("lastErrorStates")));
@property NCSDKParserRuleContext * _Nullable nextTokensContext __attribute__((swift_name("nextTokensContext")));
@property int32_t nextTokensState __attribute__((swift_name("nextTokensState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BailErrorStrategy")))
@interface NCSDKBailErrorStrategy : NCSDKDefaultErrorStrategy
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)recoverRecognizer:(NCSDKParser *)recognizer e:(NCSDKRecognitionException *)e __attribute__((swift_name("recover(recognizer:e:)")));
- (id<NCSDKToken>)recoverInlineRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("recoverInline(recognizer:)")));
- (void)syncRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("sync(recognizer:)")));
@end;

__attribute__((swift_name("BaseErrorListener")))
@interface NCSDKBaseErrorListener : NCSDKBase <NCSDKANTLRErrorListener>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)reportAmbiguityRecognizer:(NCSDKParser *)recognizer dfa:(NCSDKDFA *)dfa startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex exact:(BOOL)exact ambigAlts:(NCSDKBitSet *)ambigAlts configs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("reportAmbiguity(recognizer:dfa:startIndex:stopIndex:exact:ambigAlts:configs:)")));
- (void)reportAttemptingFullContextRecognizer:(NCSDKParser *)recognizer dfa:(NCSDKDFA *)dfa startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex conflictingAlts:(NCSDKBitSet *)conflictingAlts configs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("reportAttemptingFullContext(recognizer:dfa:startIndex:stopIndex:conflictingAlts:configs:)")));
- (void)reportContextSensitivityRecognizer:(NCSDKParser *)recognizer dfa:(NCSDKDFA *)dfa startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex prediction:(int32_t)prediction configs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("reportContextSensitivity(recognizer:dfa:startIndex:stopIndex:prediction:configs:)")));
- (void)syntaxErrorRecognizer:(NCSDKRecognizer<id, id> *)recognizer offendingSymbol:(id _Nullable)offendingSymbol line:(int32_t)line charPositionInLine:(int32_t)charPositionInLine msg:(NSString *)msg e:(NCSDKRecognitionException * _Nullable)e __attribute__((swift_name("syntaxError(recognizer:offendingSymbol:line:charPositionInLine:msg:e:)")));
@end;

__attribute__((swift_name("TokenStream")))
@protocol NCSDKTokenStream <NCSDKIntStream>
@required
- (id<NCSDKToken> _Nullable)LTK:(int32_t)k __attribute__((swift_name("LT(k:)")));
- (id<NCSDKToken>)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NSString *)getTextCtx:(NCSDKRuleContext *)ctx __attribute__((swift_name("getText(ctx:)")));
- (NSString * _Nullable)getTextStart:(id<NCSDKToken> _Nullable)start stop:(id<NCSDKToken> _Nullable)stop __attribute__((swift_name("getText(start:stop:)")));
- (NSString *)getTextInterval:(NCSDKInterval *)interval __attribute__((swift_name("getText(interval:)")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) id<NCSDKTokenSource> _Nullable tokenSource __attribute__((swift_name("tokenSource")));
@end;

__attribute__((swift_name("BufferedTokenStream")))
@interface NCSDKBufferedTokenStream : NCSDKBase <NCSDKTokenStream>
- (instancetype)initWithTokenSource:(id<NCSDKTokenSource>)tokenSource __attribute__((swift_name("init(tokenSource:)"))) __attribute__((objc_designated_initializer));
- (int32_t)LAI:(int32_t)i __attribute__((swift_name("LA(i:)")));
- (id<NCSDKToken> _Nullable)LBK:(int32_t)k __attribute__((swift_name("LB(k:)")));
- (id<NCSDKToken> _Nullable)LTK:(int32_t)k __attribute__((swift_name("LT(k:)")));
- (int32_t)adjustSeekIndexI:(int32_t)i __attribute__((swift_name("adjustSeekIndex(i:)")));
- (void)consume_ __attribute__((swift_name("consume_()")));
- (int32_t)fetchN:(int32_t)n __attribute__((swift_name("fetch(n:)")));
- (void)fill __attribute__((swift_name("fill()")));
- (NSArray<id<NCSDKToken>> * _Nullable)filterForChannelFrom:(int32_t)from to:(int32_t)to channel:(int32_t)channel __attribute__((swift_name("filterForChannel(from:to:channel:)")));
- (id<NCSDKToken>)getIndex:(int32_t)i __attribute__((swift_name("get(index:)")));
- (NSArray<id<NCSDKToken>> * _Nullable)getStart:(int32_t)start stop:(int32_t)stop __attribute__((swift_name("get(start:stop:)")));
- (NSArray<id<NCSDKToken>> * _Nullable)getHiddenTokensToLeftTokenIndex:(int32_t)tokenIndex channel:(int32_t)channel __attribute__((swift_name("getHiddenTokensToLeft(tokenIndex:channel:)")));
- (NSArray<id<NCSDKToken>> * _Nullable)getHiddenTokensToRightTokenIndex:(int32_t)tokenIndex channel:(int32_t)channel __attribute__((swift_name("getHiddenTokensToRight(tokenIndex:channel:)")));
- (NSString *)getTextCtx:(NCSDKRuleContext *)ctx __attribute__((swift_name("getText(ctx:)")));
- (NSString * _Nullable)getTextStart:(id<NCSDKToken> _Nullable)start stop:(id<NCSDKToken> _Nullable)stop __attribute__((swift_name("getText(start:stop:)")));
- (NSString *)getTextInterval:(NCSDKInterval *)interval __attribute__((swift_name("getText(interval:)")));
- (NSArray<id<NCSDKToken>> * _Nullable)getTokensStart:(int32_t)start stop:(int32_t)stop ttype:(int32_t)ttype __attribute__((swift_name("getTokens(start:stop:ttype:)")));
- (NSArray<id<NCSDKToken>> * _Nullable)getTokensStart:(int32_t)start stop:(int32_t)stop types:(NSSet<NCSDKInt *> * _Nullable)types __attribute__((swift_name("getTokens(start:stop:types:)")));
- (int32_t)index __attribute__((swift_name("index()")));
- (void)lazyInit __attribute__((swift_name("lazyInit()")));
- (int32_t)mark __attribute__((swift_name("mark()")));
- (int32_t)nextTokenOnChannelI:(int32_t)i channel:(int32_t)channel __attribute__((swift_name("nextTokenOnChannel(i:channel:)")));
- (int32_t)previousTokenOnChannelI:(int32_t)i channel:(int32_t)channel __attribute__((swift_name("previousTokenOnChannel(i:channel:)")));
- (void)releaseMarker:(int32_t)marker __attribute__((swift_name("release(marker:)")));
- (void)reset __attribute__((swift_name("reset()"))) __attribute__((deprecated("Use {@code seek(0)} instead.")));
- (void)seekIndex:(int32_t)index __attribute__((swift_name("seek(index:)")));
- (void)setup __attribute__((swift_name("setup()")));
- (int32_t)size __attribute__((swift_name("size()")));
- (BOOL)syncI:(int32_t)i __attribute__((swift_name("sync(i:)")));
@property BOOL fetchedEOF __attribute__((swift_name("fetchedEOF")));
@property int32_t p __attribute__((swift_name("p")));
@property (readonly) NSString *sourceName __attribute__((swift_name("sourceName")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property id<NCSDKTokenSource> tokenSource __attribute__((swift_name("tokenSource")));
@property NSMutableArray<id<NCSDKToken>> *tokens __attribute__((swift_name("tokens")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CharStreamCompanion")))
@interface NCSDKCharStreamCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKCharStreamCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t EOF __attribute__((swift_name("EOF")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CharStreams")))
@interface NCSDKCharStreams : NCSDKAbstractCharStreams
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)charStreams __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKCharStreams *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Token")))
@protocol NCSDKToken
@required
- (NCSDKPoint * _Nullable)endPoint __attribute__((swift_name("endPoint()")));
- (NCSDKPoint *)startPoint __attribute__((swift_name("startPoint()")));
@property (readonly) int32_t channel __attribute__((swift_name("channel")));
@property (readonly) int32_t charPositionInLine __attribute__((swift_name("charPositionInLine")));
@property (readonly) id<NCSDKCharStream> _Nullable inputStream __attribute__((swift_name("inputStream")));
@property (readonly) int32_t line __attribute__((swift_name("line")));
@property (readonly) int32_t startIndex __attribute__((swift_name("startIndex")));
@property (readonly) int32_t stopIndex __attribute__((swift_name("stopIndex")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) int32_t tokenIndex __attribute__((swift_name("tokenIndex")));
@property (readonly) id<NCSDKTokenSource> _Nullable tokenSource __attribute__((swift_name("tokenSource")));
@property (readonly) int32_t type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("WritableToken")))
@protocol NCSDKWritableToken <NCSDKToken>
@required
- (void)setChannel:(int32_t)value __attribute__((swift_name("setChannel(_:)")));
- (void)setCharPositionInLine:(int32_t)value __attribute__((swift_name("setCharPositionInLine(_:)")));
- (void)setLine:(int32_t)value __attribute__((swift_name("setLine(_:)")));
- (void)setText:(NSString * _Nullable)value __attribute__((swift_name("setText(_:)")));
- (void)setTokenIndex:(int32_t)value __attribute__((swift_name("setTokenIndex(_:)")));
- (void)setType:(int32_t)value __attribute__((swift_name("setType(_:)")));
@end;

__attribute__((swift_name("CommonToken")))
@interface NCSDKCommonToken : NCSDKBase <NCSDKWritableToken>
- (instancetype)initWithType:(int32_t)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSource:(NCSDKKotlinPair<id<NCSDKTokenSource>, id<NCSDKCharStream>> *)source type:(int32_t)type channel:(int32_t)channel start:(int32_t)start stop:(int32_t)stop __attribute__((swift_name("init(source:type:channel:start:stop:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(int32_t)type text:(NSString *)text __attribute__((swift_name("init(type:text:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithOldToken:(id<NCSDKToken>)oldToken __attribute__((swift_name("init(oldToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKCommonTokenCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)toStringR:(NCSDKRecognizer<id, id> * _Nullable)r __attribute__((swift_name("toString(r:)")));
@property int32_t channel __attribute__((swift_name("channel")));
@property int32_t charPositionInLine __attribute__((swift_name("charPositionInLine")));
@property (readonly) id<NCSDKCharStream> _Nullable inputStream __attribute__((swift_name("inputStream")));
@property int32_t line __attribute__((swift_name("line")));
@property NCSDKKotlinPair<id<NCSDKTokenSource>, id<NCSDKCharStream>> *source __attribute__((swift_name("source")));
@property int32_t startIndex __attribute__((swift_name("startIndex")));
@property int32_t stopIndex __attribute__((swift_name("stopIndex")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property int32_t tokenIndex __attribute__((swift_name("tokenIndex")));
@property (readonly) id<NCSDKTokenSource> _Nullable tokenSource __attribute__((swift_name("tokenSource")));
@property int32_t type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonToken.Companion")))
@interface NCSDKCommonTokenCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKCommonTokenCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKKotlinPair<id<NCSDKTokenSource>, id<NCSDKCharStream>> *EMPTY_SOURCE __attribute__((swift_name("EMPTY_SOURCE")));
@end;

__attribute__((swift_name("TokenFactory")))
@protocol NCSDKTokenFactory
@required
- (id<NCSDKToken>)createType:(int32_t)type text:(NSString *)text __attribute__((swift_name("create(type:text:)")));
- (id<NCSDKToken>)createSource:(NCSDKKotlinPair<id<NCSDKTokenSource>, id<NCSDKCharStream>> *)source type:(int32_t)type text:(NSString * _Nullable)text channel:(int32_t)channel start:(int32_t)start stop:(int32_t)stop line:(int32_t)line charPositionInLine:(int32_t)charPositionInLine __attribute__((swift_name("create(source:type:text:channel:start:stop:line:charPositionInLine:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonTokenFactory")))
@interface NCSDKCommonTokenFactory : NCSDKBase <NCSDKTokenFactory>
- (instancetype)initWithCopyText:(BOOL)copyText __attribute__((swift_name("init(copyText:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKCommonTokenFactoryCompanion *companion __attribute__((swift_name("companion")));
- (NCSDKCommonToken *)createType:(int32_t)type text:(NSString *)text __attribute__((swift_name("create(type:text:)")));
- (NCSDKCommonToken *)createSource:(NCSDKKotlinPair<id<NCSDKTokenSource>, id<NCSDKCharStream>> *)source type:(int32_t)type text:(NSString * _Nullable)text channel:(int32_t)channel start:(int32_t)start stop:(int32_t)stop line:(int32_t)line charPositionInLine:(int32_t)charPositionInLine __attribute__((swift_name("create(source:type:text:channel:start:stop:line:charPositionInLine:)")));
@property (readonly, getter=doCopyText) BOOL copyText __attribute__((swift_name("copyText")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonTokenFactory.Companion")))
@interface NCSDKCommonTokenFactoryCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKCommonTokenFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) id<NCSDKTokenFactory> DEFAULT __attribute__((swift_name("DEFAULT")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonTokenStream")))
@interface NCSDKCommonTokenStream : NCSDKBufferedTokenStream
- (instancetype)initWithTokenSource:(id<NCSDKTokenSource>)tokenSource channel:(int32_t)channel __attribute__((swift_name("init(tokenSource:channel:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTokenSource:(id<NCSDKTokenSource>)tokenSource __attribute__((swift_name("init(tokenSource:)"))) __attribute__((objc_designated_initializer));
- (id<NCSDKToken> _Nullable)LBK:(int32_t)k __attribute__((swift_name("LB(k:)")));
- (id<NCSDKToken> _Nullable)LTK:(int32_t)k __attribute__((swift_name("LT(k:)")));
- (int32_t)adjustSeekIndexI:(int32_t)i __attribute__((swift_name("adjustSeekIndex(i:)")));
@property int32_t channel __attribute__((swift_name("channel")));
@property (readonly) int32_t numberOfOnChannelTokens __attribute__((swift_name("numberOfOnChannelTokens")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsoleErrorListener")))
@interface NCSDKConsoleErrorListener : NCSDKBaseErrorListener
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) NCSDKConsoleErrorListenerCompanion *companion __attribute__((swift_name("companion")));
- (void)syntaxErrorRecognizer:(NCSDKRecognizer<id, id> *)recognizer offendingSymbol:(id _Nullable)offendingSymbol line:(int32_t)line charPositionInLine:(int32_t)charPositionInLine msg:(NSString *)msg e:(NCSDKRecognitionException * _Nullable)e __attribute__((swift_name("syntaxError(recognizer:offendingSymbol:line:charPositionInLine:msg:e:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsoleErrorListener.Companion")))
@interface NCSDKConsoleErrorListenerCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKConsoleErrorListenerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKConsoleErrorListener *INSTANCE __attribute__((swift_name("INSTANCE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiagnosticErrorListener")))
@interface NCSDKDiagnosticErrorListener : NCSDKBaseErrorListener
- (instancetype)initWithExactOnly:(BOOL)exactOnly __attribute__((swift_name("init(exactOnly:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NCSDKBitSet *)getConflictingAltsReportedAlts:(NCSDKBitSet * _Nullable)reportedAlts configs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("getConflictingAlts(reportedAlts:configs:)")));
- (NSString *)getDecisionDescriptionRecognizer:(NCSDKParser *)recognizer dfa:(NCSDKDFA *)dfa __attribute__((swift_name("getDecisionDescription(recognizer:dfa:)")));
- (void)reportAmbiguityRecognizer:(NCSDKParser *)recognizer dfa:(NCSDKDFA *)dfa startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex exact:(BOOL)exact ambigAlts:(NCSDKBitSet *)ambigAlts configs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("reportAmbiguity(recognizer:dfa:startIndex:stopIndex:exact:ambigAlts:configs:)")));
- (void)reportAttemptingFullContextRecognizer:(NCSDKParser *)recognizer dfa:(NCSDKDFA *)dfa startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex conflictingAlts:(NCSDKBitSet *)conflictingAlts configs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("reportAttemptingFullContext(recognizer:dfa:startIndex:stopIndex:conflictingAlts:configs:)")));
- (void)reportContextSensitivityRecognizer:(NCSDKParser *)recognizer dfa:(NCSDKDFA *)dfa startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex prediction:(int32_t)prediction configs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("reportContextSensitivity(recognizer:dfa:startIndex:stopIndex:prediction:configs:)")));
@property (readonly) BOOL exactOnly __attribute__((swift_name("exactOnly")));
@end;

__attribute__((swift_name("RecognitionException")))
@interface NCSDKRecognitionException : NCSDKKotlinRuntimeException
- (instancetype)initWithRecognizer:(NCSDKRecognizer<id, id> * _Nullable)recognizer inputStream:(id<NCSDKIntStream>)inputStream ctx:(NCSDKParserRuleContext * _Nullable)ctx message:(NSString * _Nullable)message __attribute__((swift_name("init(recognizer:inputStream:ctx:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NCSDKParserRuleContext * _Nullable ctx __attribute__((swift_name("ctx")));
@property (readonly) NCSDKIntervalSet * _Nullable expectedTokens __attribute__((swift_name("expectedTokens")));
@property (readonly) id<NCSDKIntStream> inputStream __attribute__((swift_name("inputStream")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property int32_t offendingState __attribute__((swift_name("offendingState")));
@property id<NCSDKToken> _Nullable offendingToken __attribute__((swift_name("offendingToken")));
@property (readonly) NCSDKRecognizer<id, id> * _Nullable recognizer __attribute__((swift_name("recognizer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FailedPredicateException")))
@interface NCSDKFailedPredicateException : NCSDKRecognitionException
- (instancetype)initWithRecognizer:(NCSDKParser *)recognizer predicate:(NSString * _Nullable)predicate message:(NSString * _Nullable)message __attribute__((swift_name("init(recognizer:predicate:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRecognizer:(NCSDKRecognizer<id, id> * _Nullable)recognizer inputStream:(id<NCSDKIntStream>)inputStream ctx:(NCSDKParserRuleContext * _Nullable)ctx message:(NSString * _Nullable)message __attribute__((swift_name("init(recognizer:inputStream:ctx:message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property int32_t predIndex __attribute__((swift_name("predIndex")));
@property (readonly) NSString * _Nullable predicate __attribute__((swift_name("predicate")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputMismatchException")))
@interface NCSDKInputMismatchException : NCSDKRecognitionException
- (instancetype)initWithRecognizer:(NCSDKParser *)recognizer __attribute__((swift_name("init(recognizer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRecognizer:(NCSDKParser *)recognizer state:(int32_t)state ctx:(NCSDKParserRuleContext *)ctx __attribute__((swift_name("init(recognizer:state:ctx:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRecognizer:(NCSDKRecognizer<id, id> * _Nullable)recognizer inputStream:(id<NCSDKIntStream>)inputStream ctx:(NCSDKParserRuleContext * _Nullable)ctx message:(NSString * _Nullable)message __attribute__((swift_name("init(recognizer:inputStream:ctx:message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntStreamCompanion")))
@interface NCSDKIntStreamCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKIntStreamCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t EOF __attribute__((swift_name("EOF")));
@property (readonly) NSString *UNKNOWN_SOURCE_NAME __attribute__((swift_name("UNKNOWN_SOURCE_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterpreterRuleContext")))
@interface NCSDKInterpreterRuleContext : NCSDKParserRuleContext
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithParent:(NCSDKParserRuleContext *)parent invokingStateNumber:(int32_t)invokingStateNumber ruleIndex:(int32_t)ruleIndex __attribute__((swift_name("init(parent:invokingStateNumber:ruleIndex:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithParent:(NCSDKParserRuleContext * _Nullable)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Lexer.Companion")))
@interface NCSDKLexerCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKLexerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DEFAULT_MODE __attribute__((swift_name("DEFAULT_MODE")));
@property (readonly) int32_t DEFAULT_TOKEN_CHANNEL __attribute__((swift_name("DEFAULT_TOKEN_CHANNEL")));
@property (readonly) int32_t HIDDEN __attribute__((swift_name("HIDDEN")));
@property (readonly) int32_t MAX_CHAR_VALUE __attribute__((swift_name("MAX_CHAR_VALUE")));
@property (readonly) int32_t MIN_CHAR_VALUE __attribute__((swift_name("MIN_CHAR_VALUE")));
@property (readonly) int32_t MORE __attribute__((swift_name("MORE")));
@property (readonly) int32_t SKIP __attribute__((swift_name("SKIP")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerInterpreter")))
@interface NCSDKLexerInterpreter : NCSDKLexer
- (instancetype)initWithGrammarFileName:(NSString *)grammarFileName tokenNames:(id)tokenNames ruleNames:(id)ruleNames modeNames:(id)modeNames atn:(NCSDKATN *)atn input:(id<NCSDKCharStream>)input __attribute__((swift_name("init(grammarFileName:tokenNames:ruleNames:modeNames:atn:input:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("")));
- (instancetype)initWithGrammarFileName:(NSString *)grammarFileName vocabulary:(id<NCSDKVocabulary>)vocabulary ruleNames:(id)ruleNames modeNames:(id)modeNames atn:(NCSDKATN *)atn input:(id<NCSDKCharStream>)input __attribute__((swift_name("init(grammarFileName:vocabulary:ruleNames:modeNames:atn:input:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("")));
- (instancetype)initWithGrammarFileName:(NSString *)grammarFileName vocabulary:(id<NCSDKVocabulary>)vocabulary ruleNames:(id)ruleNames channelNames:(id)channelNames modeNames:(id)modeNames atn:(NCSDKATN *)atn input:(id<NCSDKCharStream>)input __attribute__((swift_name("init(grammarFileName:vocabulary:ruleNames:channelNames:modeNames:atn:input:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithInput:(id<NCSDKCharStream>)input __attribute__((swift_name("init(input:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NCSDKKotlinArray<NCSDKDFA *> *_decisionToDFA __attribute__((swift_name("_decisionToDFA")));
@property (readonly) NCSDKPredictionContextCache *_sharedContextCache __attribute__((swift_name("_sharedContextCache")));
@property (readonly) NCSDKATN *atn __attribute__((swift_name("atn")));
@property (readonly) NCSDKKotlinArray<NSString *> * _Nullable channelNames __attribute__((swift_name("channelNames")));
@property (readonly) NSString *grammarFileName __attribute__((swift_name("grammarFileName")));
@property (readonly) NCSDKKotlinArray<NSString *> * _Nullable modeNames __attribute__((swift_name("modeNames")));
@property (readonly) NCSDKKotlinArray<NSString *> * _Nullable ruleNames __attribute__((swift_name("ruleNames")));
@property (readonly) NCSDKKotlinArray<NSString *> * _Nullable tokenNames __attribute__((swift_name("tokenNames"))) __attribute__((deprecated("")));
@property (readonly) id<NCSDKVocabulary> vocabulary __attribute__((swift_name("vocabulary")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerNoViableAltException")))
@interface NCSDKLexerNoViableAltException : NCSDKRecognitionException
- (instancetype)initWithLexer:(NCSDKLexer *)lexer input:(id<NCSDKCharStream>)input startIndex:(int32_t)startIndex deadEndConfigs:(NSSet<NCSDKATNConfig *> *)deadEndConfigs __attribute__((swift_name("init(lexer:input:startIndex:deadEndConfigs:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRecognizer:(NCSDKRecognizer<id, id> * _Nullable)recognizer inputStream:(id<NCSDKIntStream>)inputStream ctx:(NCSDKParserRuleContext * _Nullable)ctx message:(NSString * _Nullable)message __attribute__((swift_name("init(recognizer:inputStream:ctx:message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSSet<NCSDKATNConfig *> *deadEndConfigs __attribute__((swift_name("deadEndConfigs")));
@property (readonly) id<NCSDKCharStream> inputStream __attribute__((swift_name("inputStream")));
@property (readonly) int32_t startIndex __attribute__((swift_name("startIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListTokenSource")))
@interface NCSDKListTokenSource : NCSDKBase <NCSDKTokenSource>
- (instancetype)initWithTokens:(NSArray<id<NCSDKToken>> * _Nullable)tokens sourceName:(NSString * _Nullable)sourceName __attribute__((swift_name("init(tokens:sourceName:)"))) __attribute__((objc_designated_initializer));
- (id<NCSDKToken>)nextToken __attribute__((swift_name("nextToken()")));
- (id<NCSDKCharStream> _Nullable)readInputStream __attribute__((swift_name("readInputStream()")));
@property (readonly) int32_t charPositionInLine __attribute__((swift_name("charPositionInLine")));
@property id<NCSDKToken> _Nullable eofToken __attribute__((swift_name("eofToken")));
@property int32_t i __attribute__((swift_name("i")));
@property (readonly) int32_t line __attribute__((swift_name("line")));
@property (readonly) NSString * _Nullable sourceName __attribute__((swift_name("sourceName")));
@property id<NCSDKTokenFactory> tokenFactory __attribute__((swift_name("tokenFactory")));
@property (readonly) NSArray<id<NCSDKToken>> * _Nullable tokens __attribute__((swift_name("tokens")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoViableAltException")))
@interface NCSDKNoViableAltException : NCSDKRecognitionException
- (instancetype)initWithRecognizer:(NCSDKParser *)recognizer input:(id<NCSDKTokenStream> _Nullable)input startToken:(id<NCSDKToken> _Nullable)startToken offendingToken:(id<NCSDKToken> _Nullable)offendingToken deadEndConfigs:(NSSet<NCSDKATNConfig *> * _Nullable)deadEndConfigs ctx:(NCSDKParserRuleContext * _Nullable)ctx __attribute__((swift_name("init(recognizer:input:startToken:offendingToken:deadEndConfigs:ctx:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRecognizer:(NCSDKRecognizer<id, id> * _Nullable)recognizer inputStream:(id<NCSDKIntStream>)inputStream ctx:(NCSDKParserRuleContext * _Nullable)ctx message:(NSString * _Nullable)message __attribute__((swift_name("init(recognizer:inputStream:ctx:message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSSet<NCSDKATNConfig *> * _Nullable deadEndConfigs __attribute__((swift_name("deadEndConfigs")));
@property (readonly) id<NCSDKToken> _Nullable startToken __attribute__((swift_name("startToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProxyErrorListener")))
@interface NCSDKProxyErrorListener : NCSDKBase <NCSDKANTLRErrorListener>
- (instancetype)initWithDelegates:(id _Nullable)delegates __attribute__((swift_name("init(delegates:)"))) __attribute__((objc_designated_initializer));
- (void)reportAmbiguityRecognizer:(NCSDKParser *)recognizer dfa:(NCSDKDFA *)dfa startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex exact:(BOOL)exact ambigAlts:(NCSDKBitSet *)ambigAlts configs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("reportAmbiguity(recognizer:dfa:startIndex:stopIndex:exact:ambigAlts:configs:)")));
- (void)reportAttemptingFullContextRecognizer:(NCSDKParser *)recognizer dfa:(NCSDKDFA *)dfa startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex conflictingAlts:(NCSDKBitSet *)conflictingAlts configs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("reportAttemptingFullContext(recognizer:dfa:startIndex:stopIndex:conflictingAlts:configs:)")));
- (void)reportContextSensitivityRecognizer:(NCSDKParser *)recognizer dfa:(NCSDKDFA *)dfa startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex prediction:(int32_t)prediction configs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("reportContextSensitivity(recognizer:dfa:startIndex:stopIndex:prediction:configs:)")));
- (void)syntaxErrorRecognizer:(NCSDKRecognizer<id, id> *)recognizer offendingSymbol:(id _Nullable)offendingSymbol line:(int32_t)line charPositionInLine:(int32_t)charPositionInLine msg:(NSString *)msg e:(NCSDKRecognitionException * _Nullable)e __attribute__((swift_name("syntaxError(recognizer:offendingSymbol:line:charPositionInLine:msg:e:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecognizerCompanion")))
@interface NCSDKRecognizerCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKRecognizerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t EOF __attribute__((swift_name("EOF")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuleContextWithAltNum")))
@interface NCSDKRuleContextWithAltNum : NCSDKParserRuleContext
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithParent:(NCSDKParserRuleContext *)parent invokingStateNumber:(int32_t)invokingStateNumber __attribute__((swift_name("init(parent:invokingStateNumber:)"))) __attribute__((objc_designated_initializer));
@property int32_t altNumber __attribute__((swift_name("altNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuntimeMetaData")))
@interface NCSDKRuntimeMetaData : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)runtimeMetaData __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKRuntimeMetaData *shared __attribute__((swift_name("shared")));
- (void)checkVersionGeneratingToolVersion:(NSString * _Nullable)generatingToolVersion compileTimeVersion:(NSString *)compileTimeVersion __attribute__((swift_name("checkVersion(generatingToolVersion:compileTimeVersion:)")));
- (NSString *)getMajorMinorVersionVersion:(NSString *)version __attribute__((swift_name("getMajorMinorVersion(version:)")));
@property (readonly) NSString *runtimeVersion __attribute__((swift_name("runtimeVersion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringCharStream")))
@interface NCSDKStringCharStream : NCSDKBase <NCSDKCharStream>
- (instancetype)initWithSource:(NSString *)source sourceName:(NSString *)sourceName __attribute__((swift_name("init(source:sourceName:)"))) __attribute__((objc_designated_initializer));
- (int32_t)LAI:(int32_t)i __attribute__((swift_name("LA(i:)")));
- (void)consume_ __attribute__((swift_name("consume_()")));
- (NSString *)getTextInterval:(NCSDKInterval *)interval __attribute__((swift_name("getText(interval:)")));
- (int32_t)index __attribute__((swift_name("index()")));
- (int32_t)mark __attribute__((swift_name("mark()")));
- (void)releaseMarker:(int32_t)marker __attribute__((swift_name("release(marker:)")));
- (void)seekIndex:(int32_t)index __attribute__((swift_name("seek(index:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *sourceName __attribute__((swift_name("sourceName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenCompanion")))
@interface NCSDKTokenCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKTokenCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DEFAULT_CHANNEL __attribute__((swift_name("DEFAULT_CHANNEL")));
@property (readonly) int32_t EOF __attribute__((swift_name("EOF")));
@property (readonly) int32_t EPSILON __attribute__((swift_name("EPSILON")));
@property (readonly) int32_t HIDDEN_CHANNEL __attribute__((swift_name("HIDDEN_CHANNEL")));
@property (readonly) int32_t INVALID_TYPE __attribute__((swift_name("INVALID_TYPE")));
@property (readonly) int32_t MIN_USER_CHANNEL_VALUE __attribute__((swift_name("MIN_USER_CHANNEL_VALUE")));
@property (readonly) int32_t MIN_USER_TOKEN_TYPE __attribute__((swift_name("MIN_USER_TOKEN_TYPE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenStreamRewriter")))
@interface NCSDKTokenStreamRewriter : NCSDKBase <NCSDKTypeDeclarator>
- (instancetype)initWithTokenStream:(id<NCSDKTokenStream>)tokenStream __attribute__((swift_name("init(tokenStream:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKTokenStreamRewriterCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)catOpTextA:(id _Nullable)a b:(id _Nullable)b __attribute__((swift_name("catOpText(a:b:)")));
- (void)deleteIndexT:(id<NCSDKToken>)indexT __attribute__((swift_name("delete(indexT:)")));
- (void)deleteFrom:(id<NCSDKToken>)from to:(id<NCSDKToken>)to __attribute__((swift_name("delete(from:to:)")));
- (void)deleteIndex:(int32_t)index __attribute__((swift_name("delete(index:)")));
- (void)deleteFrom:(int32_t)from to_:(int32_t)to __attribute__((swift_name("delete(from:to_:)")));
- (void)deleteProgramName:(NSString *)programName from:(id<NCSDKToken>)from to:(id<NCSDKToken>)to __attribute__((swift_name("delete(programName:from:to:)")));
- (void)deleteProgramName:(NSString *)programName from:(int32_t)from to_:(int32_t)to __attribute__((swift_name("delete(programName:from:to_:)")));
- (void)deleteProgramProgramName:(NSString *)programName __attribute__((swift_name("deleteProgram(programName:)")));
- (NSArray<NCSDKTokenStreamRewriterRewriteOperation *> *)getKindOfOpsRewrites:(NSArray<id> *)rewrites kind:(NCSDKType *)kind before:(int32_t)before __attribute__((swift_name("getKindOfOps(rewrites:kind:before:)")));
- (int32_t)getLastRewriteTokenIndexProgramName:(NSString *)programName __attribute__((swift_name("getLastRewriteTokenIndex(programName:)")));
- (NSMutableArray<id> *)getProgramName:(NSString *)name __attribute__((swift_name("getProgram(name:)")));
- (NSString *)getTextInterval:(NCSDKInterval *)interval __attribute__((swift_name("getText(interval:)")));
- (NSString *)getTextProgramName:(NSString *)programName interval:(NCSDKInterval *)interval __attribute__((swift_name("getText(programName:interval:)")));
- (void)insertAfterT:(id<NCSDKToken>)t text:(id)text __attribute__((swift_name("insertAfter(t:text:)")));
- (void)insertAfterIndex:(int32_t)index text:(id)text __attribute__((swift_name("insertAfter(index:text:)")));
- (void)insertAfterProgramName:(NSString *)programName t:(id<NCSDKToken>)t text:(id)text __attribute__((swift_name("insertAfter(programName:t:text:)")));
- (void)insertAfterProgramName:(NSString *)programName index:(int32_t)index text:(id)text __attribute__((swift_name("insertAfter(programName:index:text:)")));
- (void)insertBeforeT:(id<NCSDKToken>)t text:(id)text __attribute__((swift_name("insertBefore(t:text:)")));
- (void)insertBeforeIndex:(int32_t)index text:(id)text __attribute__((swift_name("insertBefore(index:text:)")));
- (void)insertBeforeProgramName:(NSString *)programName t:(id<NCSDKToken>)t text:(id)text __attribute__((swift_name("insertBefore(programName:t:text:)")));
- (void)insertBeforeProgramName:(NSString *)programName index:(int32_t)index text:(id)text __attribute__((swift_name("insertBefore(programName:index:text:)")));
- (NCSDKMutableDictionary<NCSDKInt *, NCSDKTokenStreamRewriterRewriteOperation *> *)reduceToSingleOperationPerIndexRewrites:(NSMutableArray<id> *)rewrites __attribute__((swift_name("reduceToSingleOperationPerIndex(rewrites:)")));
- (void)replaceFrom:(id<NCSDKToken>)from to:(id<NCSDKToken>)to text:(id)text __attribute__((swift_name("replace(from:to:text:)")));
- (void)replaceIndexT:(id<NCSDKToken>)indexT text:(id)text __attribute__((swift_name("replace(indexT:text:)")));
- (void)replaceIndex:(int32_t)index text:(id)text __attribute__((swift_name("replace(index:text:)")));
- (void)replaceFrom:(int32_t)from to:(int32_t)to text_:(id)text __attribute__((swift_name("replace(from:to:text_:)")));
- (void)replaceProgramName:(NSString *)programName from:(id<NCSDKToken>)from to:(id<NCSDKToken>)to text:(id _Nullable)text __attribute__((swift_name("replace(programName:from:to:text:)")));
- (void)replaceProgramName:(NSString *)programName from:(int32_t)from to:(int32_t)to text_:(id _Nullable)text __attribute__((swift_name("replace(programName:from:to:text_:)")));
- (void)rollbackInstructionIndex:(int32_t)instructionIndex __attribute__((swift_name("rollback(instructionIndex:)")));
- (void)rollbackProgramName:(NSString *)programName instructionIndex:(int32_t)instructionIndex __attribute__((swift_name("rollback(programName:instructionIndex:)")));
- (void)setLastRewriteTokenIndexProgramName:(NSString *)programName i:(int32_t)i __attribute__((swift_name("setLastRewriteTokenIndex(programName:i:)")));
@property (readonly) NSArray<id<NCSDKKotlinKClass>> *classesByName __attribute__((swift_name("classesByName")));
@property (readonly) int32_t lastRewriteTokenIndex __attribute__((swift_name("lastRewriteTokenIndex")));
@property (readonly) NCSDKMutableDictionary<NSString *, NCSDKInt *> *lastRewriteTokenIndexes __attribute__((swift_name("lastRewriteTokenIndexes")));
@property (readonly) NCSDKMutableDictionary<NSString *, NSMutableArray<id> *> *programs __attribute__((swift_name("programs")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) id<NCSDKTokenStream> tokenStream __attribute__((swift_name("tokenStream")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenStreamRewriter.Companion")))
@interface NCSDKTokenStreamRewriterCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKTokenStreamRewriterCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *DEFAULT_PROGRAM_NAME __attribute__((swift_name("DEFAULT_PROGRAM_NAME")));
@property (readonly) int32_t MIN_TOKEN_INDEX __attribute__((swift_name("MIN_TOKEN_INDEX")));
@property (readonly) int32_t PROGRAM_INIT_SIZE __attribute__((swift_name("PROGRAM_INIT_SIZE")));
@end;

__attribute__((swift_name("TokenStreamRewriter.RewriteOperation")))
@interface NCSDKTokenStreamRewriterRewriteOperation : NCSDKBase
- (instancetype)initWith:(NCSDKTokenStreamRewriter *)receiver index:(int32_t)index __attribute__((swift_name("init(_:index:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWith:(NCSDKTokenStreamRewriter *)receiver index:(int32_t)index text:(id)text __attribute__((swift_name("init(_:index:text:)"))) __attribute__((objc_designated_initializer));
- (int32_t)executeBuf:(NCSDKKotlinStringBuilder *)buf __attribute__((swift_name("execute(buf:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (getter=index_) int32_t index __attribute__((swift_name("index")));
@property int32_t instructionIndex __attribute__((swift_name("instructionIndex")));
@property id _Nullable text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnbufferedTokenStream")))
@interface NCSDKUnbufferedTokenStream<T> : NCSDKBase <NCSDKTokenStream>
- (instancetype)initWithTokenSource:(id<NCSDKTokenSource>)tokenSource bufferSize:(int32_t)bufferSize __attribute__((swift_name("init(tokenSource:bufferSize:)"))) __attribute__((objc_designated_initializer));
- (int32_t)LAI:(int32_t)i __attribute__((swift_name("LA(i:)")));
- (id<NCSDKToken>)LTK:(int32_t)i __attribute__((swift_name("LT(k:)")));
- (void)addT:(id<NCSDKToken>)t __attribute__((swift_name("add(t:)")));
- (void)consume_ __attribute__((swift_name("consume_()")));
- (int32_t)fillN:(int32_t)n __attribute__((swift_name("fill(n:)")));
- (id<NCSDKToken>)getIndex:(int32_t)i __attribute__((swift_name("get(index:)")));
- (NSString *)getTextCtx:(NCSDKRuleContext *)ctx __attribute__((swift_name("getText(ctx:)")));
- (NSString *)getTextStart:(id<NCSDKToken> _Nullable)start stop:(id<NCSDKToken> _Nullable)stop __attribute__((swift_name("getText(start:stop:)")));
- (NSString *)getTextInterval:(NCSDKInterval *)interval __attribute__((swift_name("getText(interval:)")));
- (int32_t)index __attribute__((swift_name("index()")));
- (int32_t)mark __attribute__((swift_name("mark()")));
- (void)releaseMarker:(int32_t)marker __attribute__((swift_name("release(marker:)")));
- (void)seekIndex:(int32_t)index __attribute__((swift_name("seek(index:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (void)syncWant:(int32_t)want __attribute__((swift_name("sync(want:)")));
@property (readonly) int32_t bufferStartIndex __attribute__((swift_name("bufferStartIndex")));
@property int32_t currentTokenIndex __attribute__((swift_name("currentTokenIndex")));
@property id<NCSDKToken> _Nullable lastToken __attribute__((swift_name("lastToken")));
@property id<NCSDKToken> _Nullable lastTokenBufferStart __attribute__((swift_name("lastTokenBufferStart")));
@property int32_t n __attribute__((swift_name("n")));
@property int32_t numMarkers __attribute__((swift_name("numMarkers")));
@property int32_t p __attribute__((swift_name("p")));
@property (readonly) NSString * _Nullable sourceName __attribute__((swift_name("sourceName")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property id<NCSDKTokenSource> _Nullable tokenSource __attribute__((swift_name("tokenSource")));
@property NCSDKKotlinArray<id<NCSDKToken>> *tokens __attribute__((swift_name("tokens")));
@end;

__attribute__((swift_name("Vocabulary")))
@protocol NCSDKVocabulary
@required
- (NSString *)getDisplayNameTokenType:(int32_t)tokenType __attribute__((swift_name("getDisplayName(tokenType:)")));
- (NSString * _Nullable)getLiteralNameTokenType:(int32_t)tokenType __attribute__((swift_name("getLiteralName(tokenType:)")));
- (NSString * _Nullable)getSymbolicNameTokenType:(int32_t)tokenType __attribute__((swift_name("getSymbolicName(tokenType:)")));
@property (readonly) int32_t maxTokenType __attribute__((swift_name("maxTokenType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VocabularyImpl")))
@interface NCSDKVocabularyImpl : NCSDKBase <NCSDKVocabulary>
- (instancetype)initWithLiteralNames:(NCSDKKotlinArray<NSString *> * _Nullable)literalNames symbolicNames:(NCSDKKotlinArray<NSString *> * _Nullable)symbolicNames displayNames:(NCSDKKotlinArray<NSString *> * _Nullable)displayNames __attribute__((swift_name("init(literalNames:symbolicNames:displayNames:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKVocabularyImplCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)getDisplayNameTokenType:(int32_t)tokenType __attribute__((swift_name("getDisplayName(tokenType:)")));
- (NSString * _Nullable)getLiteralNameTokenType:(int32_t)tokenType __attribute__((swift_name("getLiteralName(tokenType:)")));
- (NSString * _Nullable)getSymbolicNameTokenType:(int32_t)tokenType __attribute__((swift_name("getSymbolicName(tokenType:)")));
@property (readonly) int32_t maxTokenType __attribute__((swift_name("maxTokenType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VocabularyImpl.Companion")))
@interface NCSDKVocabularyImplCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKVocabularyImplCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKVocabulary>)fromTokenNamesTokenNames:(NCSDKKotlinArray<NSString *> * _Nullable)tokenNames __attribute__((swift_name("fromTokenNames(tokenNames:)")));
@property (readonly) NCSDKVocabularyImpl *EMPTY_VOCABULARY __attribute__((swift_name("EMPTY_VOCABULARY")));
@end;

__attribute__((swift_name("Node")))
@protocol NCSDKNode
@required
@property (readonly) id<NCSDKNode> _Nullable parent __attribute__((swift_name("parent")));
@property (readonly) NCSDKPosition * _Nullable position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Point")))
@interface NCSDKPoint : NCSDKBase
- (instancetype)initWithLine:(int32_t)line column:(int32_t)column __attribute__((swift_name("init(line:column:)"))) __attribute__((objc_designated_initializer));
- (NCSDKPoint *)advanceText:(NSString *)text __attribute__((swift_name("advance(text:)")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKPoint *)doCopyLine:(int32_t)line column:(int32_t)column __attribute__((swift_name("doCopy(line:column:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isBeforeOther:(NCSDKPoint *)other __attribute__((swift_name("isBefore(other:)")));
- (int32_t)offsetCode:(NSString *)code __attribute__((swift_name("offset(code:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t column __attribute__((swift_name("column")));
@property (readonly) int32_t line __attribute__((swift_name("line")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Position")))
@interface NCSDKPosition : NCSDKBase
- (instancetype)initWithStart:(NCSDKPoint *)start end:(NCSDKPoint *)end __attribute__((swift_name("init(start:end:)"))) __attribute__((objc_designated_initializer));
- (NCSDKPoint *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKPoint *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)containsPoint:(NCSDKPoint *)point __attribute__((swift_name("contains(point:)")));
- (NCSDKPosition *)doCopyStart:(NCSDKPoint *)start end:(NCSDKPoint *)end __attribute__((swift_name("doCopy(start:end:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)lengthCode:(NSString *)code __attribute__((swift_name("length(code:)")));
- (NSString *)textWholeText:(NSString *)wholeText __attribute__((swift_name("text(wholeText:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKPoint *end __attribute__((swift_name("end")));
@property (readonly) NCSDKPoint *start __attribute__((swift_name("start")));
@end;

__attribute__((swift_name("EqualityComparator")))
@protocol NCSDKEqualityComparator
@required
- (BOOL)equalsA:(id _Nullable)a b:(id _Nullable)b __attribute__((swift_name("equals(a:b:)")));
- (int32_t)hashCodeObj:(id _Nullable)obj __attribute__((swift_name("hashCode(obj:)")));
@end;

__attribute__((swift_name("AbstractEqualityComparator")))
@interface NCSDKAbstractEqualityComparator<__contravariant T> : NCSDKBase <NCSDKEqualityComparator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("Array2DHashSet")))
@interface NCSDKArray2DHashSet : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoubleKeyMap")))
@interface NCSDKDoubleKeyMap<Key1, Key2, Value> : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSDictionary<id, id> *)getK1:(Key1 _Nullable)k1 __attribute__((swift_name("get(k1:)")));
- (Value _Nullable)getK1:(Key1 _Nullable)k1 k2:(Key2 _Nullable)k2 __attribute__((swift_name("get(k1:k2:)")));
- (NSSet<id> *)keySet __attribute__((swift_name("keySet()")));
- (NSSet<id> * _Nullable)keySetK1:(Key1 _Nullable)k1 __attribute__((swift_name("keySet(k1:)")));
- (Value _Nullable)putK1:(Key1 _Nullable)k1 k2:(Key2 _Nullable)k2 v:(Value _Nullable)v __attribute__((swift_name("put(k1:k2:v:)")));
- (id _Nullable)valuesK1:(Key1 _Nullable)k1 __attribute__((swift_name("values(k1:)")));
@end;

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("FlexibleHashMap")))
@interface NCSDKFlexibleHashMap : NSObject
@end;

__attribute__((swift_name("IntSet")))
@protocol NCSDKIntSet
@required
- (void)addEl:(int32_t)el __attribute__((swift_name("add(el:)")));
- (id<NCSDKIntSet>)addAllSet:(id<NCSDKIntSet> _Nullable)set __attribute__((swift_name("addAll(set:)")));
- (id<NCSDKIntSet> _Nullable)andA:(id<NCSDKIntSet> _Nullable)a __attribute__((swift_name("and(a:)")));
- (id<NCSDKIntSet> _Nullable)complementElements:(id<NCSDKIntSet> _Nullable)elements __attribute__((swift_name("complement(elements:)")));
- (BOOL)containsEl:(int32_t)el __attribute__((swift_name("contains(el:)")));
- (id<NCSDKIntSet>)orA:(id<NCSDKIntSet> _Nullable)a __attribute__((swift_name("or(a:)")));
- (void)removeEl:(int32_t)el __attribute__((swift_name("remove(el:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (id<NCSDKIntSet>)subtractA:(id<NCSDKIntSet> _Nullable)a __attribute__((swift_name("subtract(a:)")));
- (NSArray<NCSDKInt *> *)toList __attribute__((swift_name("toList()")));
@property (readonly) BOOL isNil __attribute__((swift_name("isNil")));
@end;

__attribute__((swift_name("IntegerList")))
@interface NCSDKIntegerList : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithCapacity:(int32_t)capacity __attribute__((swift_name("init(capacity:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithList:(NCSDKIntegerList *)list __attribute__((swift_name("init(list:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithList_:(id)list __attribute__((swift_name("init(list_:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKIntegerListCompanion *companion __attribute__((swift_name("companion")));
- (void)addValue:(int32_t)value __attribute__((swift_name("add(value:)")));
- (void)addAllList:(NCSDKIntegerList *)list __attribute__((swift_name("addAll(list:)")));
- (void)addAllArray:(NCSDKKotlinIntArray *)array __attribute__((swift_name("addAll(array:)")));
- (void)addAllList_:(id)list __attribute__((swift_name("addAll(list_:)")));
- (int32_t)binarySearchKey:(int32_t)key __attribute__((swift_name("binarySearch(key:)")));
- (int32_t)binarySearchFromIndex:(int32_t)fromIndex toIndex:(int32_t)toIndex key:(int32_t)key __attribute__((swift_name("binarySearch(fromIndex:toIndex:key:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsValue:(int32_t)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEqual:(id _Nullable)o __attribute__((swift_name("isEqual(_:)")));
- (int32_t)getIndex_:(int32_t)index __attribute__((swift_name("get(index_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)removeAtIndex:(int32_t)index __attribute__((swift_name("removeAt(index:)")));
- (void)removeRangeFromIndex:(int32_t)fromIndex toIndex:(int32_t)toIndex __attribute__((swift_name("removeRange(fromIndex:toIndex:)")));
- (int32_t)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (void)sort __attribute__((swift_name("sort()")));
- (NCSDKKotlinIntArray *)toArray __attribute__((swift_name("toArray()")));
- (NCSDKKotlinCharArray *)toCharArray __attribute__((swift_name("toCharArray()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)trimToSize __attribute__((swift_name("trimToSize()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntegerList.Companion")))
@interface NCSDKIntegerListCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKIntegerListCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntegerStack")))
@interface NCSDKIntegerStack : NCSDKIntegerList
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithCapacity:(int32_t)capacity __attribute__((swift_name("init(capacity:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithList:(NCSDKIntegerStack *)list __attribute__((swift_name("init(list:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithList_:(id)list __attribute__((swift_name("init(list_:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)peek __attribute__((swift_name("peek()")));
- (int32_t)pop __attribute__((swift_name("pop()")));
- (void)pushValue:(int32_t)value __attribute__((swift_name("push(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterpreterDataReader")))
@interface NCSDKInterpreterDataReader : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)interpreterDataReader __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKInterpreterDataReader *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterpreterDataReader.InterpreterData")))
@interface NCSDKInterpreterDataReaderInterpreterData : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Interval")))
@interface NCSDKInterval : NCSDKBase
- (instancetype)initWithA:(int32_t)a b:(int32_t)b __attribute__((swift_name("init(a:b:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKIntervalCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)adjacentOther:(NCSDKInterval *)other __attribute__((swift_name("adjacent(other:)")));
- (NCSDKInterval * _Nullable)differenceNotProperlyContainedOther:(NCSDKInterval *)other __attribute__((swift_name("differenceNotProperlyContained(other:)")));
- (BOOL)disjointOther:(NCSDKInterval *)other __attribute__((swift_name("disjoint(other:)")));
- (BOOL)isEqual:(id _Nullable)o __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NCSDKInterval *)intersectionOther:(NCSDKInterval *)other __attribute__((swift_name("intersection(other:)")));
- (int32_t)length __attribute__((swift_name("length()")));
- (BOOL)properlyContainsOther:(NCSDKInterval *)other __attribute__((swift_name("properlyContains(other:)")));
- (BOOL)startsAfterOther:(NCSDKInterval *)other __attribute__((swift_name("startsAfter(other:)")));
- (BOOL)startsAfterDisjointOther:(NCSDKInterval *)other __attribute__((swift_name("startsAfterDisjoint(other:)")));
- (BOOL)startsAfterNonDisjointOther:(NCSDKInterval *)other __attribute__((swift_name("startsAfterNonDisjoint(other:)")));
- (BOOL)startsBeforeDisjointOther:(NCSDKInterval *)other __attribute__((swift_name("startsBeforeDisjoint(other:)")));
- (BOOL)startsBeforeNonDisjointOther:(NCSDKInterval *)other __attribute__((swift_name("startsBeforeNonDisjoint(other:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NCSDKInterval *)unionOther:(NCSDKInterval *)other __attribute__((swift_name("union(other:)")));
@property int32_t a __attribute__((swift_name("a")));
@property int32_t b __attribute__((swift_name("b")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Interval.Companion")))
@interface NCSDKIntervalCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKIntervalCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKInterval *)ofA:(int32_t)a b:(int32_t)b __attribute__((swift_name("of(a:b:)")));
@property (readonly) int32_t INTERVAL_POOL_MAX_VALUE __attribute__((swift_name("INTERVAL_POOL_MAX_VALUE")));
@property (readonly) NCSDKInterval *INVALID __attribute__((swift_name("INVALID")));
@property int32_t creates __attribute__((swift_name("creates")));
@property int32_t hits __attribute__((swift_name("hits")));
@property int32_t misses __attribute__((swift_name("misses")));
@property int32_t outOfRange __attribute__((swift_name("outOfRange")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntervalSet")))
@interface NCSDKIntervalSet : NCSDKBase <NCSDKIntSet>
- (instancetype)initWithIntervals:(NSMutableArray<NCSDKInterval *> *)intervals __attribute__((swift_name("init(intervals:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSet:(NCSDKIntervalSet *)set __attribute__((swift_name("init(set:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEls:(NCSDKKotlinIntArray *)els __attribute__((swift_name("init(els:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKIntervalSetCompanion *companion __attribute__((swift_name("companion")));
- (void)addAddition:(NCSDKInterval *)addition __attribute__((swift_name("add(addition:)")));
- (void)addEl:(int32_t)el __attribute__((swift_name("add(el:)")));
- (void)addA:(int32_t)a b:(int32_t)b __attribute__((swift_name("add(a:b:)")));
- (NCSDKIntervalSet *)addAllSet:(id<NCSDKIntSet> _Nullable)set __attribute__((swift_name("addAll(set:)")));
- (NCSDKIntervalSet * _Nullable)andA:(id<NCSDKIntSet> _Nullable)other __attribute__((swift_name("and(a:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (NCSDKIntervalSet * _Nullable)complementElements:(id<NCSDKIntSet> _Nullable)vocabulary __attribute__((swift_name("complement(elements:)")));
- (NCSDKIntervalSet * _Nullable)complementMinElement:(int32_t)minElement maxElement:(int32_t)maxElement __attribute__((swift_name("complement(minElement:maxElement:)")));
- (BOOL)containsEl:(int32_t)el __attribute__((swift_name("contains(el:)")));
- (NSString *)elementNameVocabulary:(id<NCSDKVocabulary>)vocabulary a:(int32_t)a __attribute__((swift_name("elementName(vocabulary:a:)")));
- (NSString *)elementNameTokenNames:(NCSDKKotlinArray<NSString *> *)tokenNames a:(int32_t)a __attribute__((swift_name("elementName(tokenNames:a:)"))) __attribute__((deprecated("Use {@link #elementName(Vocabulary, int)} instead.")));
- (BOOL)isEqual:(id _Nullable)obj __attribute__((swift_name("isEqual(_:)")));
- (int32_t)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NCSDKIntervalSet *)orA:(id<NCSDKIntSet> _Nullable)a __attribute__((swift_name("or(a:)")));
- (void)removeEl:(int32_t)el __attribute__((swift_name("remove(el:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NCSDKIntervalSet *)subtractA:(id<NCSDKIntSet> _Nullable)a __attribute__((swift_name("subtract(a:)")));
- (NCSDKKotlinIntArray *)toArray __attribute__((swift_name("toArray()")));
- (NCSDKIntegerList *)toIntegerList __attribute__((swift_name("toIntegerList()")));
- (NSArray<NCSDKInt *> *)toList __attribute__((swift_name("toList()")));
- (NSSet<NCSDKInt *> *)toSet __attribute__((swift_name("toSet()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)toStringVocabulary:(id<NCSDKVocabulary>)vocabulary __attribute__((swift_name("toString(vocabulary:)")));
- (NSString *)toStringTokenNames:(NCSDKKotlinArray<NSString *> *)tokenNames __attribute__((swift_name("toString(tokenNames:)"))) __attribute__((deprecated("Use {@link #toString(Vocabulary)} instead.")));
- (NSString *)toStringElemAreChar:(BOOL)elemAreChar __attribute__((swift_name("toString(elemAreChar:)")));
@property NSMutableArray<NCSDKInterval *> * _Nullable intervals __attribute__((swift_name("intervals")));
@property (readonly) BOOL isNil __attribute__((swift_name("isNil")));
@property BOOL isReadonly __attribute__((swift_name("isReadonly")));
@property (readonly) int32_t maxElement __attribute__((swift_name("maxElement")));
@property (readonly) int32_t minElement __attribute__((swift_name("minElement")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntervalSet.Companion")))
@interface NCSDKIntervalSetCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKIntervalSetCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKIntervalSet *)ofA:(int32_t)a __attribute__((swift_name("of(a:)")));
- (NCSDKIntervalSet *)ofA:(int32_t)a b:(int32_t)b __attribute__((swift_name("of(a:b:)")));
- (NCSDKIntervalSet *)orSets:(NCSDKKotlinArray<NCSDKIntervalSet *> *)sets __attribute__((swift_name("or(sets:)")));
- (NCSDKIntervalSet *)subtractLeft:(NCSDKIntervalSet * _Nullable)left right:(NCSDKIntervalSet * _Nullable)right __attribute__((swift_name("subtract(left:right:)")));
@property (readonly) NCSDKIntervalSet *COMPLETE_CHAR_SET __attribute__((swift_name("COMPLETE_CHAR_SET")));
@property (readonly) NCSDKIntervalSet *EMPTY_SET __attribute__((swift_name("EMPTY_SET")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogManager")))
@interface NCSDKLogManager : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("MultiMap")))
@interface NCSDKMultiMap : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MurmurHash")))
@interface NCSDKMurmurHash : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)murmurHash __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKMurmurHash *shared __attribute__((swift_name("shared")));
- (int32_t)finishHash:(int32_t)hash numberOfWords:(int32_t)numberOfWords __attribute__((swift_name("finish(hash:numberOfWords:)")));
- (int32_t)hashCodeData:(NCSDKKotlinArray<id> *)data seed:(int32_t)seed __attribute__((swift_name("hashCode(data:seed:)")));
- (int32_t)initializeSeed:(int32_t)seed __attribute__((swift_name("initialize(seed:)")));
- (int32_t)updateHash:(int32_t)hash value:(id _Nullable)value __attribute__((swift_name("update(hash:value:)")));
- (int32_t)updateHash:(int32_t)hash value_:(int32_t)value __attribute__((swift_name("update(hash:value_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ObjectEqualityComparator")))
@interface NCSDKObjectEqualityComparator<__contravariant T> : NCSDKAbstractEqualityComparator<T>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) NCSDKObjectEqualityComparatorCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)equalsA:(T _Nullable)a b:(T _Nullable)b __attribute__((swift_name("equals(a:b:)")));
- (int32_t)hashCodeObj:(T _Nullable)obj __attribute__((swift_name("hashCode(obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ObjectEqualityComparatorCompanion")))
@interface NCSDKObjectEqualityComparatorCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKObjectEqualityComparatorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKObjectEqualityComparator<id> *INSTANCE __attribute__((swift_name("INSTANCE")));
@end;

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("OrderedHashSet")))
@interface NCSDKOrderedHashSet : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParseCancellationException")))
@interface NCSDKParseCancellationException : NCSDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NCSDKKotlinThrowable *)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message cause:(NCSDKKotlinThrowable *)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface NCSDKPlatform : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platform __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKPlatform *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFileFileName:(NSString *)fileName completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFile(fileName:completionHandler:)")));
@end;

__attribute__((swift_name("Predicate")))
@protocol NCSDKPredicate
@required
- (BOOL)testT:(id _Nullable)t __attribute__((swift_name("test(t:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Utils")))
@interface NCSDKUtils : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)utils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKUtils *shared __attribute__((swift_name("shared")));
- (int32_t)countS:(NSString *)s x:(unichar)x __attribute__((swift_name("count(s:x:)")));
- (NSString *)escapeWhitespaceS:(NSString *)s escapeSpaces:(BOOL)escapeSpaces __attribute__((swift_name("escapeWhitespace(s:escapeSpaces:)")));
- (NSString * _Nullable)expandTabsS:(NSString * _Nullable)s tabSize:(int32_t)tabSize __attribute__((swift_name("expandTabs(s:tabSize:)")));
- (NSString *)newlinesN:(int32_t)n __attribute__((swift_name("newlines(n:)")));
- (int32_t)numNonnullData:(NCSDKKotlinArray<id> * _Nullable)data __attribute__((swift_name("numNonnull(data:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFileFileName:(NSString *)fileName completionHandler:(void (^)(NCSDKKotlinCharArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFile(fileName:completionHandler:)")));
- (void)removeAllElementsData:(id _Nullable)data value:(id _Nullable)value __attribute__((swift_name("removeAllElements(data:value:)")));
- (NSString *)sequenceN:(int32_t)n s:(NSString *)s __attribute__((swift_name("sequence(n:s:)")));
- (NSString *)spacesN:(int32_t)n __attribute__((swift_name("spaces(n:)")));
- (NCSDKKotlinCharArray * _Nullable)toCharArrayData:(NCSDKIntegerList * _Nullable)data __attribute__((swift_name("toCharArray(data:)")));
- (NSDictionary<NSString *, NCSDKInt *> *)toMapKeys:(NCSDKKotlinArray<NSString *> *)keys __attribute__((swift_name("toMap(keys:)")));
- (NCSDKIntervalSet *)toSetBits:(NCSDKBitSet *)bits __attribute__((swift_name("toSet(bits:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DFA")))
@interface NCSDKDFA : NCSDKBase
- (instancetype)initWithAtnStartState:(NCSDKDecisionState *)atnStartState decision:(int32_t)decision __attribute__((swift_name("init(atnStartState:decision:)"))) __attribute__((objc_designated_initializer));
- (NCSDKDFAState * _Nullable)getPrecedenceStartStatePrecedence:(int32_t)precedence __attribute__((swift_name("getPrecedenceStartState(precedence:)")));
- (NSArray<NCSDKDFAState *> *)getStates __attribute__((swift_name("getStates()")));
- (void)setPrecedenceStartStatePrecedence:(int32_t)precedence startState:(NCSDKDFAState *)startState __attribute__((swift_name("setPrecedenceStartState(precedence:startState:)")));
- (NSString * _Nullable)toLexerString __attribute__((swift_name("toLexerString()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString * _Nullable)toStringVocabulary:(id<NCSDKVocabulary>)vocabulary __attribute__((swift_name("toString(vocabulary:)")));
@property (readonly) NCSDKDecisionState *atnStartState __attribute__((swift_name("atnStartState")));
@property (readonly) int32_t decision __attribute__((swift_name("decision")));
@property BOOL isPrecedenceDfa __attribute__((swift_name("isPrecedenceDfa")));
@property NCSDKDFAState * _Nullable s0 __attribute__((swift_name("s0")));
@property (readonly) NCSDKMutableDictionary<NCSDKDFAState *, NCSDKDFAState *> *states __attribute__((swift_name("states")));
@end;

__attribute__((swift_name("DFASerializer")))
@interface NCSDKDFASerializer : NCSDKBase
- (instancetype)initWithDfa:(NCSDKDFA *)dfa tokenNames:(NCSDKKotlinArray<NSString *> *)tokenNames __attribute__((swift_name("init(dfa:tokenNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use {@link #DFASerializer(DFA, Vocabulary)} instead.")));
- (instancetype)initWithDfa:(NCSDKDFA *)dfa vocabulary:(id<NCSDKVocabulary>)vocabulary __attribute__((swift_name("init(dfa:vocabulary:)"))) __attribute__((objc_designated_initializer));
- (NSString *)getEdgeLabelI:(int32_t)i __attribute__((swift_name("getEdgeLabel(i:)")));
- (NSString *)getStateStringS:(NCSDKDFAState *)s __attribute__((swift_name("getStateString(s:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DFAState")))
@interface NCSDKDFAState : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithStateNumber:(int32_t)stateNumber __attribute__((swift_name("init(stateNumber:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithConfigs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("init(configs:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)o __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSSet<NCSDKInt *> * _Nullable altSet __attribute__((swift_name("altSet")));
@property NSSet<NCSDKATNConfig *> * _Nullable configs __attribute__((swift_name("configs")));
@property NCSDKKotlinArray<NCSDKDFAState *> * _Nullable edges __attribute__((swift_name("edges")));
@property BOOL isAcceptState __attribute__((swift_name("isAcceptState")));
@property NCSDKLexerActionExecutor * _Nullable lexerActionExecutor __attribute__((swift_name("lexerActionExecutor")));
@property NCSDKKotlinArray<NCSDKDFAStatePredPrediction *> * _Nullable predicates __attribute__((swift_name("predicates")));
@property int32_t prediction __attribute__((swift_name("prediction")));
@property BOOL requiresFullContext __attribute__((swift_name("requiresFullContext")));
@property int32_t stateNumber __attribute__((swift_name("stateNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DFAState.PredPrediction")))
@interface NCSDKDFAStatePredPrediction : NCSDKBase
- (instancetype)initWithPred:(NCSDKSemanticContext *)pred alt:(int32_t)alt __attribute__((swift_name("init(pred:alt:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t alt __attribute__((swift_name("alt")));
@property NCSDKSemanticContext *pred __attribute__((swift_name("pred")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerDFASerializer")))
@interface NCSDKLexerDFASerializer : NCSDKDFASerializer
- (instancetype)initWithDfa:(NCSDKDFA *)dfa __attribute__((swift_name("init(dfa:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDfa:(NCSDKDFA *)dfa tokenNames:(NCSDKKotlinArray<NSString *> *)tokenNames __attribute__((swift_name("init(dfa:tokenNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithDfa:(NCSDKDFA *)dfa vocabulary:(id<NCSDKVocabulary>)vocabulary __attribute__((swift_name("init(dfa:vocabulary:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSString *)getEdgeLabelI:(int32_t)i __attribute__((swift_name("getEdgeLabel(i:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ATN")))
@interface NCSDKATN : NCSDKBase
- (instancetype)initWithGrammarType:(NCSDKATNType *)grammarType maxTokenType:(int32_t)maxTokenType __attribute__((swift_name("init(grammarType:maxTokenType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKATNCompanion *companion __attribute__((swift_name("companion")));
- (void)addStateState:(NCSDKATNState * _Nullable)state __attribute__((swift_name("addState(state:)")));
- (int32_t)defineDecisionStateS:(NCSDKDecisionState *)s __attribute__((swift_name("defineDecisionState(s:)")));
- (NCSDKDecisionState * _Nullable)getDecisionStateDecision:(int32_t)decision __attribute__((swift_name("getDecisionState(decision:)")));
- (NCSDKIntervalSet *)getExpectedTokensStateNumber:(int32_t)stateNumber context:(NCSDKRuleContext * _Nullable)context __attribute__((swift_name("getExpectedTokens(stateNumber:context:)")));
- (NCSDKIntervalSet * _Nullable)nextTokensS:(NCSDKATNState *)s __attribute__((swift_name("nextTokens(s:)")));
- (NCSDKIntervalSet *)nextTokensS:(NCSDKATNState *)s ctx:(NCSDKRuleContext * _Nullable)ctx __attribute__((swift_name("nextTokens(s:ctx:)")));
- (void)removeStateState:(NCSDKATNState *)state __attribute__((swift_name("removeState(state:)")));
@property (readonly) NSMutableArray<NCSDKDecisionState *> *decisionToState __attribute__((swift_name("decisionToState")));
@property (readonly) NCSDKATNType *grammarType __attribute__((swift_name("grammarType")));
@property NCSDKKotlinArray<id<NCSDKLexerAction>> * _Nullable lexerActions __attribute__((swift_name("lexerActions")));
@property (readonly) int32_t maxTokenType __attribute__((swift_name("maxTokenType")));
@property (readonly) NSDictionary<NSString *, NCSDKTokensStartState *> *modeNameToStartState __attribute__((swift_name("modeNameToStartState")));
@property (readonly) NSMutableArray<NCSDKTokensStartState *> *modeToStartState __attribute__((swift_name("modeToStartState")));
@property (readonly) int32_t numberOfDecisions __attribute__((swift_name("numberOfDecisions")));
@property NCSDKKotlinArray<NCSDKRuleStartState *> * _Nullable ruleToStartState __attribute__((swift_name("ruleToStartState")));
@property NCSDKKotlinArray<NCSDKRuleStopState *> * _Nullable ruleToStopState __attribute__((swift_name("ruleToStopState")));
@property NCSDKKotlinIntArray * _Nullable ruleToTokenType __attribute__((swift_name("ruleToTokenType")));
@property (readonly) NSMutableArray<id> *states __attribute__((swift_name("states")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ATN.Companion")))
@interface NCSDKATNCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKATNCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t INVALID_ALT_NUMBER __attribute__((swift_name("INVALID_ALT_NUMBER")));
@end;

__attribute__((swift_name("ATNConfig")))
@interface NCSDKATNConfig : NCSDKBase
- (instancetype)initWithOld:(NCSDKATNConfig *)old __attribute__((swift_name("init(old:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithState:(NCSDKATNState *)state alt:(int32_t)alt context:(NCSDKPredictionContext * _Nullable)context semanticContext:(NCSDKSemanticContext *)semanticContext __attribute__((swift_name("init(state:alt:context:semanticContext:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithC:(NCSDKATNConfig *)c state:(NCSDKATNState *)state semanticContext:(NCSDKSemanticContext *)semanticContext __attribute__((swift_name("init(c:state:semanticContext:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithC:(NCSDKATNConfig *)c semanticContext:(NCSDKSemanticContext *)semanticContext __attribute__((swift_name("init(c:semanticContext:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithC:(NCSDKATNConfig *)c state:(NCSDKATNState *)state context:(NCSDKPredictionContext * _Nullable)context semanticContext:(NCSDKSemanticContext * _Nullable)semanticContext __attribute__((swift_name("init(c:state:context:semanticContext:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKATNConfigCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)equalsOther:(NCSDKATNConfig * _Nullable)other __attribute__((swift_name("equals(other:)")));
- (BOOL)isEqual:(id _Nullable)o __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)toStringRecog:(NCSDKRecognizer<id, id> * _Nullable)recog showAlt:(BOOL)showAlt __attribute__((swift_name("toString(recog:showAlt:)")));
@property (readonly) int32_t alt __attribute__((swift_name("alt")));
@property NCSDKPredictionContext * _Nullable context __attribute__((swift_name("context")));
@property BOOL isPrecedenceFilterSuppressed __attribute__((swift_name("isPrecedenceFilterSuppressed")));
@property (readonly) int32_t outerContextDepth __attribute__((swift_name("outerContextDepth")));
@property int32_t reachesIntoOuterContext __attribute__((swift_name("reachesIntoOuterContext")));
@property (readonly) NCSDKSemanticContext * _Nullable semanticContext __attribute__((swift_name("semanticContext")));
@property (readonly) NCSDKATNState *state __attribute__((swift_name("state")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ATNConfig.Companion")))
@interface NCSDKATNConfigCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKATNConfigCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("ATNConfigSet")))
@interface NCSDKATNConfigSet : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ATNDeserializationOptions")))
@interface NCSDKATNDeserializationOptions : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithOptions:(NCSDKATNDeserializationOptions *)options __attribute__((swift_name("init(options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKATNDeserializationOptionsCompanion *companion __attribute__((swift_name("companion")));
- (void)makeReadOnly __attribute__((swift_name("makeReadOnly()")));
- (void)throwIfReadOnly __attribute__((swift_name("throwIfReadOnly()")));
@property BOOL isGenerateRuleBypassTransitions __attribute__((swift_name("isGenerateRuleBypassTransitions")));
@property (readonly) BOOL isReadOnly __attribute__((swift_name("isReadOnly")));
@property BOOL isVerifyATN __attribute__((swift_name("isVerifyATN")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ATNDeserializationOptions.Companion")))
@interface NCSDKATNDeserializationOptionsCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKATNDeserializationOptionsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKATNDeserializationOptions *defaultOptions __attribute__((swift_name("defaultOptions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ATNDeserializer")))
@interface NCSDKATNDeserializer : NCSDKBase
- (instancetype)initWithDeserializationOptions:(NCSDKATNDeserializationOptions * _Nullable)deserializationOptions __attribute__((swift_name("init(deserializationOptions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKATNDeserializerCompanion *companion __attribute__((swift_name("companion")));
- (void)checkConditionCondition:(BOOL)condition message:(NSString * _Nullable)message __attribute__((swift_name("checkCondition(condition:message:)")));
- (NCSDKATN *)deserializeData:(NCSDKKotlinCharArray *)data __attribute__((swift_name("deserialize(data:)")));
- (NCSDKATN *)deserializeIntegersSerializedIntegersATN:(NCSDKKotlinArray<NCSDKInt *> *)serializedIntegersATN __attribute__((swift_name("deserializeIntegers(serializedIntegersATN:)")));
- (NCSDKTransition *)edgeFactoryAtn:(NCSDKATN *)atn type:(int32_t)type src:(int32_t)src trg:(int32_t)trg arg1:(int32_t)arg1 arg2:(int32_t)arg2 arg3:(int32_t)arg3 sets:(NSArray<NCSDKIntervalSet *> *)sets __attribute__((swift_name("edgeFactory(atn:type:src:trg:arg1:arg2:arg3:sets:)")));
- (id<NCSDKLexerAction>)lexerActionFactoryType:(NCSDKLexerActionType *)type data1:(int32_t)data1 data2:(int32_t)data2 __attribute__((swift_name("lexerActionFactory(type:data1:data2:)")));
- (void)markPrecedenceDecisionsAtn:(NCSDKATN *)atn __attribute__((swift_name("markPrecedenceDecisions(atn:)")));
- (NCSDKATNState * _Nullable)stateFactoryType:(int32_t)type ruleIndex:(int32_t)ruleIndex __attribute__((swift_name("stateFactory(type:ruleIndex:)")));
- (void)verifyATNAtn:(NCSDKATN *)atn __attribute__((swift_name("verifyATN(atn:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ATNDeserializer.Companion")))
@interface NCSDKATNDeserializerCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKATNDeserializerCompanion *shared __attribute__((swift_name("shared")));
- (BOOL)isFeatureSupportedFeature:(NCSDKUUID *)feature actualUuid:(NCSDKUUID *)actualUuid __attribute__((swift_name("isFeatureSupported(feature:actualUuid:)")));
- (int32_t)toIntC:(unichar)c __attribute__((swift_name("toInt(c:)")));
- (int32_t)toInt32Data:(NCSDKKotlinCharArray *)data offset:(int32_t)offset __attribute__((swift_name("toInt32(data:offset:)")));
- (int64_t)toLongData:(NCSDKKotlinCharArray *)data offset:(int32_t)offset __attribute__((swift_name("toLong(data:offset:)")));
- (NCSDKUUID *)toUUIDData:(NCSDKKotlinCharArray *)data offset:(int32_t)offset __attribute__((swift_name("toUUID(data:offset:)")));
@property (readonly) NCSDKUUID *SERIALIZED_UUID __attribute__((swift_name("SERIALIZED_UUID")));
@property (readonly) int32_t SERIALIZED_VERSION __attribute__((swift_name("SERIALIZED_VERSION")));
@end;

__attribute__((swift_name("ATNSimulator")))
@interface NCSDKATNSimulator : NCSDKBase
- (instancetype)initWithAtn:(NCSDKATN *)atn sharedContextCache:(NCSDKPredictionContextCache * _Nullable)sharedContextCache __attribute__((swift_name("init(atn:sharedContextCache:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKATNSimulatorCompanion *companion __attribute__((swift_name("companion")));
- (void)clearDFA __attribute__((swift_name("clearDFA()")));
- (NCSDKPredictionContext *)getCachedContextContext:(NCSDKPredictionContext *)context __attribute__((swift_name("getCachedContext(context:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (readonly) NCSDKATN *atn __attribute__((swift_name("atn")));
@property (readonly) NCSDKPredictionContextCache * _Nullable sharedContextCache __attribute__((swift_name("sharedContextCache")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ATNSimulator.Companion")))
@interface NCSDKATNSimulatorCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKATNSimulatorCompanion *shared __attribute__((swift_name("shared")));
- (void)checkConditionCondition:(BOOL)condition __attribute__((swift_name("checkCondition(condition:)"))) __attribute__((deprecated("Use {@link ATNDeserializer#checkCondition(boolean)} instead.")));
- (void)checkConditionCondition:(BOOL)condition message:(NSString *)message __attribute__((swift_name("checkCondition(condition:message:)"))) __attribute__((deprecated("Use {@link ATNDeserializer#checkCondition(boolean, String)} instead.")));
- (NCSDKATN *)deserializeData:(NCSDKKotlinCharArray *)data __attribute__((swift_name("deserialize(data:)"))) __attribute__((deprecated("Use {@link ATNDeserializer#deserialize} instead.")));
- (NCSDKTransition *)edgeFactoryAtn:(NCSDKATN *)atn type:(int32_t)type src:(int32_t)src trg:(int32_t)trg arg1:(int32_t)arg1 arg2:(int32_t)arg2 arg3:(int32_t)arg3 sets:(NSArray<NCSDKIntervalSet *> *)sets __attribute__((swift_name("edgeFactory(atn:type:src:trg:arg1:arg2:arg3:sets:)"))) __attribute__((deprecated("Use {@link ATNDeserializer#edgeFactory} instead.")));
- (NCSDKATNState * _Nullable)stateFactoryType:(int32_t)type ruleIndex:(int32_t)ruleIndex __attribute__((swift_name("stateFactory(type:ruleIndex:)"))) __attribute__((deprecated("Use {@link ATNDeserializer#stateFactory} instead.")));
- (int32_t)toIntC:(unichar)c __attribute__((swift_name("toInt(c:)"))) __attribute__((deprecated("Use {@link ATNDeserializer#toInt} instead.")));
- (int32_t)toInt32Data:(NCSDKKotlinCharArray *)data offset:(int32_t)offset __attribute__((swift_name("toInt32(data:offset:)"))) __attribute__((deprecated("Use {@link ATNDeserializer#toInt32} instead.")));
- (int64_t)toLongData:(NCSDKKotlinCharArray *)data offset:(int32_t)offset __attribute__((swift_name("toLong(data:offset:)"))) __attribute__((deprecated("Use {@link ATNDeserializer#toLong} instead.")));
- (NCSDKUUID *)toUUIDData:(NCSDKKotlinCharArray *)data offset:(int32_t)offset __attribute__((swift_name("toUUID(data:offset:)"))) __attribute__((deprecated("Use {@link ATNDeserializer#toUUID} instead.")));
@property (readonly) NCSDKDFAState *ERROR __attribute__((swift_name("ERROR")));
@property (readonly) NCSDKUUID *SERIALIZED_UUID __attribute__((swift_name("SERIALIZED_UUID"))) __attribute__((deprecated("Use {@link ATNDeserializer#checkCondition(boolean)} instead.")));
@property (readonly) int32_t SERIALIZED_VERSION __attribute__((swift_name("SERIALIZED_VERSION"))) __attribute__((deprecated("Use {@link ATNDeserializer#SERIALIZED_VERSION} instead.")));
@end;

__attribute__((swift_name("ATNState")))
@interface NCSDKATNState : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) NCSDKATNStateCompanion *companion __attribute__((swift_name("companion")));
- (void)addTransitionE:(NCSDKTransition *)e __attribute__((swift_name("addTransition(e:)")));
- (void)addTransitionIndex:(int32_t)index e:(NCSDKTransition *)e __attribute__((swift_name("addTransition(index:e:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NCSDKKotlinArray<NCSDKTransition *> *)getTransitions __attribute__((swift_name("getTransitions()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)onlyHasEpsilonTransitions __attribute__((swift_name("onlyHasEpsilonTransitions()")));
- (NCSDKTransition *)removeTransitionIndex:(int32_t)index __attribute__((swift_name("removeTransition(index:)")));
- (void)setTransitionI:(int32_t)i e:(NCSDKTransition *)e __attribute__((swift_name("setTransition(i:e:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NCSDKTransition *)transitionI:(int32_t)i __attribute__((swift_name("transition(i:)")));
@property NCSDKATN * _Nullable atn __attribute__((swift_name("atn")));
@property BOOL epsilonOnlyTransitions __attribute__((swift_name("epsilonOnlyTransitions")));
@property (readonly) BOOL isNonGreedyExitState __attribute__((swift_name("isNonGreedyExitState")));
@property NCSDKIntervalSet * _Nullable nextTokenWithinRule __attribute__((swift_name("nextTokenWithinRule")));
@property (readonly) int32_t numberOfTransitions __attribute__((swift_name("numberOfTransitions")));
@property int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@property int32_t stateNumber __attribute__((swift_name("stateNumber")));
@property (readonly) int32_t stateType __attribute__((swift_name("stateType")));
@property (readonly) NSMutableArray<NCSDKTransition *> *transitions __attribute__((swift_name("transitions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ATNState.Companion")))
@interface NCSDKATNStateCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKATNStateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t BASIC __attribute__((swift_name("BASIC")));
@property (readonly) int32_t BLOCK_END __attribute__((swift_name("BLOCK_END")));
@property (readonly) int32_t BLOCK_START __attribute__((swift_name("BLOCK_START")));
@property (readonly) int32_t INITIAL_NUM_TRANSITIONS __attribute__((swift_name("INITIAL_NUM_TRANSITIONS")));
@property (readonly) int32_t INVALID_STATE_NUMBER __attribute__((swift_name("INVALID_STATE_NUMBER")));
@property (readonly) int32_t INVALID_TYPE __attribute__((swift_name("INVALID_TYPE")));
@property (readonly) int32_t LOOP_END __attribute__((swift_name("LOOP_END")));
@property (readonly) int32_t PLUS_BLOCK_START __attribute__((swift_name("PLUS_BLOCK_START")));
@property (readonly) int32_t PLUS_LOOP_BACK __attribute__((swift_name("PLUS_LOOP_BACK")));
@property (readonly) int32_t RULE_START __attribute__((swift_name("RULE_START")));
@property (readonly) int32_t RULE_STOP __attribute__((swift_name("RULE_STOP")));
@property (readonly) int32_t STAR_BLOCK_START __attribute__((swift_name("STAR_BLOCK_START")));
@property (readonly) int32_t STAR_LOOP_BACK __attribute__((swift_name("STAR_LOOP_BACK")));
@property (readonly) int32_t STAR_LOOP_ENTRY __attribute__((swift_name("STAR_LOOP_ENTRY")));
@property (readonly) int32_t TOKEN_START __attribute__((swift_name("TOKEN_START")));
@property (readonly) NSArray<NSString *> *serializationNames __attribute__((swift_name("serializationNames")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ATNType")))
@interface NCSDKATNType : NCSDKKotlinEnum<NCSDKATNType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKATNType *lexer __attribute__((swift_name("lexer")));
@property (class, readonly) NCSDKATNType *parser __attribute__((swift_name("parser")));
+ (NCSDKKotlinArray<NCSDKATNType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Transition")))
@interface NCSDKTransition : NCSDKBase
- (instancetype)initWithTarget:(NCSDKATNState * _Nullable)target __attribute__((swift_name("init(target:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKTransitionCompanion *companion __attribute__((swift_name("companion")));
- (NCSDKIntervalSet * _Nullable)accessLabel __attribute__((swift_name("accessLabel()")));
- (BOOL)matchesSymbol:(int32_t)symbol minVocabSymbol:(int32_t)minVocabSymbol maxVocabSymbol:(int32_t)maxVocabSymbol __attribute__((swift_name("matches(symbol:minVocabSymbol:maxVocabSymbol:)")));
@property (readonly) BOOL isEpsilon __attribute__((swift_name("isEpsilon")));
@property (readonly) int32_t serializationType __attribute__((swift_name("serializationType")));
@property NCSDKATNState * _Nullable target __attribute__((swift_name("target")));
@end;

__attribute__((swift_name("AbstractPredicateTransition")))
@interface NCSDKAbstractPredicateTransition : NCSDKTransition
- (instancetype)initWithTarget:(NCSDKATNState *)target __attribute__((swift_name("init(target:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionTransition")))
@interface NCSDKActionTransition : NCSDKTransition
- (instancetype)initWithTarget:(NCSDKATNState *)target ruleIndex:(int32_t)ruleIndex actionIndex:(int32_t)actionIndex isCtxDependent:(BOOL)isCtxDependent __attribute__((swift_name("init(target:ruleIndex:actionIndex:isCtxDependent:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTarget:(NCSDKATNState * _Nullable)target __attribute__((swift_name("init(target:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)matchesSymbol:(int32_t)symbol minVocabSymbol:(int32_t)minVocabSymbol maxVocabSymbol:(int32_t)maxVocabSymbol __attribute__((swift_name("matches(symbol:minVocabSymbol:maxVocabSymbol:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t actionIndex __attribute__((swift_name("actionIndex")));
@property (readonly) BOOL isCtxDependent __attribute__((swift_name("isCtxDependent")));
@property (readonly) BOOL isEpsilon __attribute__((swift_name("isEpsilon")));
@property (readonly) int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@property (readonly) int32_t serializationType __attribute__((swift_name("serializationType")));
@end;

__attribute__((swift_name("DecisionEventInfo")))
@interface NCSDKDecisionEventInfo : NCSDKBase
- (instancetype)initWithDecision:(int32_t)decision configs:(NSSet<NCSDKATNConfig *> *)configs input:(id<NCSDKTokenStream>)input startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex fullCtx:(BOOL)fullCtx __attribute__((swift_name("init(decision:configs:input:startIndex:stopIndex:fullCtx:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSSet<NCSDKATNConfig *> *configs __attribute__((swift_name("configs")));
@property (readonly) int32_t decision __attribute__((swift_name("decision")));
@property (readonly) BOOL fullCtx __attribute__((swift_name("fullCtx")));
@property (readonly) id<NCSDKTokenStream> input __attribute__((swift_name("input")));
@property (readonly) int32_t startIndex __attribute__((swift_name("startIndex")));
@property (readonly) int32_t stopIndex __attribute__((swift_name("stopIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmbiguityInfo")))
@interface NCSDKAmbiguityInfo : NCSDKDecisionEventInfo
- (instancetype)initWithDecision:(int32_t)decision configs:(NSSet<NCSDKATNConfig *> *)configs ambigAlts:(NCSDKBitSet *)ambigAlts input:(id<NCSDKTokenStream>)input startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex fullCtx:(BOOL)fullCtx __attribute__((swift_name("init(decision:configs:ambigAlts:input:startIndex:stopIndex:fullCtx:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDecision:(int32_t)decision configs:(NSSet<NCSDKATNConfig *> *)configs input:(id<NCSDKTokenStream>)input startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex fullCtx:(BOOL)fullCtx __attribute__((swift_name("init(decision:configs:input:startIndex:stopIndex:fullCtx:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property NCSDKBitSet *ambigAlts __attribute__((swift_name("ambigAlts")));
@end;

__attribute__((swift_name("PredictionContext")))
@interface NCSDKPredictionContext : NCSDKBase
- (instancetype)initWithCachedHashCode:(int32_t)cachedHashCode __attribute__((swift_name("init(cachedHashCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKPredictionContextCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NCSDKPredictionContext * _Nullable)getParentIndex:(int32_t)index __attribute__((swift_name("getParent(index:)")));
- (int32_t)getReturnStateIndex:(int32_t)index __attribute__((swift_name("getReturnState(index:)")));
- (BOOL)hasEmptyPath __attribute__((swift_name("hasEmptyPath()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)toStringRecog:(NCSDKRecognizer<id, id> *)recog __attribute__((swift_name("toString(recog:)")));
- (NCSDKKotlinArray<NSString *> *)toStringsRecognizer:(NCSDKRecognizer<id, id> *)recognizer currentState:(int32_t)currentState __attribute__((swift_name("toStrings(recognizer:currentState:)")));
- (NCSDKKotlinArray<NSString *> *)toStringsRecognizer:(NCSDKRecognizer<id, id> * _Nullable)recognizer stop:(NCSDKPredictionContext *)stop currentState:(int32_t)currentState __attribute__((swift_name("toStrings(recognizer:stop:currentState:)")));
@property (readonly) int32_t cachedHashCode __attribute__((swift_name("cachedHashCode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArrayPredictionContext")))
@interface NCSDKArrayPredictionContext : NCSDKPredictionContext
- (instancetype)initWithA:(NCSDKSingletonPredictionContext *)a __attribute__((swift_name("init(a:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithParents:(NCSDKKotlinArray<NCSDKPredictionContext *> * _Nullable)parents returnStates:(NCSDKKotlinIntArray * _Nullable)returnStates __attribute__((swift_name("init(parents:returnStates:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCachedHashCode:(int32_t)cachedHashCode __attribute__((swift_name("init(cachedHashCode:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NCSDKPredictionContext * _Nullable)getParentIndex:(int32_t)index __attribute__((swift_name("getParent(index:)")));
- (int32_t)getReturnStateIndex:(int32_t)index __attribute__((swift_name("getReturnState(index:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) NCSDKKotlinArray<NCSDKPredictionContext *> * _Nullable parents __attribute__((swift_name("parents")));
@property (readonly) NCSDKKotlinIntArray * _Nullable returnStates __attribute__((swift_name("returnStates")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AtomTransition")))
@interface NCSDKAtomTransition : NCSDKTransition
- (instancetype)initWithTarget:(NCSDKATNState *)target label:(int32_t)label __attribute__((swift_name("init(target:label:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTarget:(NCSDKATNState * _Nullable)target __attribute__((swift_name("init(target:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NCSDKIntervalSet * _Nullable)accessLabel __attribute__((swift_name("accessLabel()")));
- (BOOL)matchesSymbol:(int32_t)symbol minVocabSymbol:(int32_t)minVocabSymbol maxVocabSymbol:(int32_t)maxVocabSymbol __attribute__((swift_name("matches(symbol:minVocabSymbol:maxVocabSymbol:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t label __attribute__((swift_name("label")));
@property (readonly) int32_t serializationType __attribute__((swift_name("serializationType")));
@end;

__attribute__((swift_name("DecisionState")))
@interface NCSDKDecisionState : NCSDKATNState
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t decision __attribute__((swift_name("decision")));
@property BOOL nonGreedy __attribute__((swift_name("nonGreedy")));
@end;

__attribute__((swift_name("BlockStartState")))
@interface NCSDKBlockStartState : NCSDKDecisionState
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NCSDKBlockEndState * _Nullable endState __attribute__((swift_name("endState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasicBlockStartState")))
@interface NCSDKBasicBlockStartState : NCSDKBlockStartState
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) int32_t stateType __attribute__((swift_name("stateType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasicState")))
@interface NCSDKBasicState : NCSDKATNState
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) int32_t stateType __attribute__((swift_name("stateType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockEndState")))
@interface NCSDKBlockEndState : NCSDKATNState
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NCSDKBlockStartState * _Nullable startState __attribute__((swift_name("startState")));
@property (readonly) int32_t stateType __attribute__((swift_name("stateType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CodePointTransitions")))
@interface NCSDKCodePointTransitions : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)codePointTransitions __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKCodePointTransitions *shared __attribute__((swift_name("shared")));
- (NCSDKTransition *)createWithCodePointTarget:(NCSDKATNState *)target codePoint:(int32_t)codePoint __attribute__((swift_name("createWithCodePoint(target:codePoint:)")));
- (NCSDKTransition *)createWithCodePointRangeTarget:(NCSDKATNState *)target codePointFrom:(int32_t)codePointFrom codePointTo:(int32_t)codePointTo __attribute__((swift_name("createWithCodePointRange(target:codePointFrom:codePointTo:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextSensitivityInfo")))
@interface NCSDKContextSensitivityInfo : NCSDKDecisionEventInfo
- (instancetype)initWithDecision:(int32_t)decision configs:(NSSet<NCSDKATNConfig *> *)configs input:(id<NCSDKTokenStream>)input startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex __attribute__((swift_name("init(decision:configs:input:startIndex:stopIndex:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDecision:(int32_t)decision configs:(NSSet<NCSDKATNConfig *> *)configs input:(id<NCSDKTokenStream>)input startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex fullCtx:(BOOL)fullCtx __attribute__((swift_name("init(decision:configs:input:startIndex:stopIndex:fullCtx:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DecisionInfo")))
@interface NCSDKDecisionInfo : NCSDKBase
- (instancetype)initWithDecision:(int32_t)decision __attribute__((swift_name("init(decision:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property int64_t LL_ATNTransitions __attribute__((swift_name("LL_ATNTransitions")));
@property int64_t LL_DFATransitions __attribute__((swift_name("LL_DFATransitions")));
@property int64_t LL_Fallback __attribute__((swift_name("LL_Fallback")));
@property int64_t LL_MaxLook __attribute__((swift_name("LL_MaxLook")));
@property NCSDKLookaheadEventInfo * _Nullable LL_MaxLookEvent __attribute__((swift_name("LL_MaxLookEvent")));
@property int64_t LL_MinLook __attribute__((swift_name("LL_MinLook")));
@property int64_t LL_TotalLook __attribute__((swift_name("LL_TotalLook")));
@property int64_t SLL_ATNTransitions __attribute__((swift_name("SLL_ATNTransitions")));
@property int64_t SLL_DFATransitions __attribute__((swift_name("SLL_DFATransitions")));
@property int64_t SLL_MaxLook __attribute__((swift_name("SLL_MaxLook")));
@property NCSDKLookaheadEventInfo * _Nullable SLL_MaxLookEvent __attribute__((swift_name("SLL_MaxLookEvent")));
@property int64_t SLL_MinLook __attribute__((swift_name("SLL_MinLook")));
@property int64_t SLL_TotalLook __attribute__((swift_name("SLL_TotalLook")));
@property (readonly) NSArray<NCSDKAmbiguityInfo *> *ambiguities __attribute__((swift_name("ambiguities")));
@property (readonly) NSArray<NCSDKContextSensitivityInfo *> *contextSensitivities __attribute__((swift_name("contextSensitivities")));
@property (readonly) int32_t decision __attribute__((swift_name("decision")));
@property (readonly) NSArray<NCSDKErrorInfo *> *errors __attribute__((swift_name("errors")));
@property int64_t invocations __attribute__((swift_name("invocations")));
@property (readonly) NSArray<NCSDKPredicateEvalInfo *> *predicateEvals __attribute__((swift_name("predicateEvals")));
@property int64_t timeInPrediction __attribute__((swift_name("timeInPrediction")));
@end;

__attribute__((swift_name("SingletonPredictionContext")))
@interface NCSDKSingletonPredictionContext : NCSDKPredictionContext
- (instancetype)initWithCachedHashCode:(int32_t)cachedHashCode __attribute__((swift_name("init(cachedHashCode:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKSingletonPredictionContextCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)o __attribute__((swift_name("isEqual(_:)")));
- (NCSDKPredictionContext * _Nullable)getParentIndex:(int32_t)index __attribute__((swift_name("getParent(index:)")));
- (int32_t)getReturnStateIndex:(int32_t)index __attribute__((swift_name("getReturnState(index:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKPredictionContext * _Nullable parent __attribute__((swift_name("parent")));
@property (readonly) int32_t returnState __attribute__((swift_name("returnState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmptyPredictionContext")))
@interface NCSDKEmptyPredictionContext : NCSDKSingletonPredictionContext
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEqual:(id _Nullable)o __attribute__((swift_name("isEqual(_:)")));
- (NCSDKPredictionContext * _Nullable)getParentIndex:(int32_t)index __attribute__((swift_name("getParent(index:)")));
- (int32_t)getReturnStateIndex:(int32_t)index __attribute__((swift_name("getReturnState(index:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EpsilonTransition")))
@interface NCSDKEpsilonTransition : NCSDKTransition
- (instancetype)initWithTarget:(NCSDKATNState *)target outermostPrecedenceReturn:(int32_t)outermostPrecedenceReturn __attribute__((swift_name("init(target:outermostPrecedenceReturn:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTarget:(NCSDKATNState * _Nullable)target __attribute__((swift_name("init(target:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)matchesSymbol:(int32_t)symbol minVocabSymbol:(int32_t)minVocabSymbol maxVocabSymbol:(int32_t)maxVocabSymbol __attribute__((swift_name("matches(symbol:minVocabSymbol:maxVocabSymbol:)")));
- (int32_t)outermostPrecedenceReturn __attribute__((swift_name("outermostPrecedenceReturn()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isEpsilon __attribute__((swift_name("isEpsilon")));
@property (readonly) int32_t serializationType __attribute__((swift_name("serializationType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorInfo")))
@interface NCSDKErrorInfo : NCSDKDecisionEventInfo
- (instancetype)initWithDecision:(int32_t)decision configs:(NSSet<NCSDKATNConfig *> *)configs input:(id<NCSDKTokenStream>)input startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex fullCtx:(BOOL)fullCtx __attribute__((swift_name("init(decision:configs:input:startIndex:stopIndex:fullCtx:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LL1Analyzer")))
@interface NCSDKLL1Analyzer : NCSDKBase
- (instancetype)initWithAtn:(NCSDKATN *)atn __attribute__((swift_name("init(atn:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKLL1AnalyzerCompanion *companion __attribute__((swift_name("companion")));
- (NCSDKIntervalSet *)LOOKS:(NCSDKATNState *)s ctx:(NCSDKRuleContext * _Nullable)ctx __attribute__((swift_name("LOOK(s:ctx:)")));
- (NCSDKIntervalSet *)LOOKS:(NCSDKATNState *)s stopState:(NCSDKATNState * _Nullable)stopState ctx:(NCSDKRuleContext * _Nullable)ctx __attribute__((swift_name("LOOK(s:stopState:ctx:)")));
- (void)_LOOKS:(NCSDKATNState *)s stopState:(NCSDKATNState * _Nullable)stopState ctx:(NCSDKPredictionContext * _Nullable)ctx look:(NCSDKIntervalSet *)look lookBusy:(NCSDKMutableSet<NCSDKATNConfig *> *)lookBusy calledRuleStack:(NCSDKBitSet *)calledRuleStack seeThruPreds:(BOOL)seeThruPreds addEOF:(BOOL)addEOF __attribute__((swift_name("_LOOK(s:stopState:ctx:look:lookBusy:calledRuleStack:seeThruPreds:addEOF:)")));
- (NCSDKKotlinArray<NCSDKIntervalSet *> * _Nullable)getDecisionLookaheadS:(NCSDKATNState * _Nullable)s __attribute__((swift_name("getDecisionLookahead(s:)")));
@property (readonly) NCSDKATN *atn __attribute__((swift_name("atn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LL1Analyzer.Companion")))
@interface NCSDKLL1AnalyzerCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKLL1AnalyzerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t HIT_PRED __attribute__((swift_name("HIT_PRED")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerATNConfig")))
@interface NCSDKLexerATNConfig : NCSDKATNConfig
- (instancetype)initWithState:(NCSDKATNState *)state alt:(int32_t)alt context:(NCSDKPredictionContext *)context __attribute__((swift_name("init(state:alt:context:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithState:(NCSDKATNState *)state alt:(int32_t)alt context:(NCSDKPredictionContext *)context lexerActionExecutor:(NCSDKLexerActionExecutor *)lexerActionExecutor __attribute__((swift_name("init(state:alt:context:lexerActionExecutor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithC:(NCSDKLexerATNConfig *)c state:(NCSDKATNState *)state __attribute__((swift_name("init(c:state:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithC:(NCSDKLexerATNConfig *)c state:(NCSDKATNState *)state lexerActionExecutor:(NCSDKLexerActionExecutor * _Nullable)lexerActionExecutor __attribute__((swift_name("init(c:state:lexerActionExecutor:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithC:(NCSDKLexerATNConfig *)c state:(NCSDKATNState *)state context:(NCSDKPredictionContext *)context __attribute__((swift_name("init(c:state:context:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithOld:(NCSDKATNConfig *)old __attribute__((swift_name("init(old:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithState:(NCSDKATNState *)state alt:(int32_t)alt context:(NCSDKPredictionContext * _Nullable)context semanticContext:(NCSDKSemanticContext *)semanticContext __attribute__((swift_name("init(state:alt:context:semanticContext:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithC:(NCSDKATNConfig *)c state:(NCSDKATNState *)state semanticContext:(NCSDKSemanticContext *)semanticContext __attribute__((swift_name("init(c:state:semanticContext:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithC:(NCSDKATNConfig *)c semanticContext:(NCSDKSemanticContext *)semanticContext __attribute__((swift_name("init(c:semanticContext:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithC:(NCSDKATNConfig *)c state:(NCSDKATNState *)state context:(NCSDKPredictionContext * _Nullable)context semanticContext:(NCSDKSemanticContext * _Nullable)semanticContext __attribute__((swift_name("init(c:state:context:semanticContext:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)equalsOther:(NCSDKATNConfig * _Nullable)other __attribute__((swift_name("equals(other:)")));
- (BOOL)hasPassedThroughNonGreedyDecision __attribute__((swift_name("hasPassedThroughNonGreedyDecision()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) NCSDKLexerActionExecutor * _Nullable lexerActionExecutor __attribute__((swift_name("lexerActionExecutor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerATNSimulator")))
@interface NCSDKLexerATNSimulator : NCSDKATNSimulator
- (instancetype)initWithAtn:(NCSDKATN *)atn decisionToDFA:(NCSDKKotlinArray<NCSDKDFA *> *)decisionToDFA sharedContextCache:(NCSDKPredictionContextCache *)sharedContextCache __attribute__((swift_name("init(atn:decisionToDFA:sharedContextCache:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRecog:(NCSDKLexer * _Nullable)recog atn:(NCSDKATN *)atn decisionToDFA:(NCSDKKotlinArray<NCSDKDFA *> *)decisionToDFA sharedContextCache:(NCSDKPredictionContextCache *)sharedContextCache __attribute__((swift_name("init(recog:atn:decisionToDFA:sharedContextCache:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAtn:(NCSDKATN *)atn sharedContextCache:(NCSDKPredictionContextCache * _Nullable)sharedContextCache __attribute__((swift_name("init(atn:sharedContextCache:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKLexerATNSimulatorCompanion *companion __attribute__((swift_name("companion")));
- (void)acceptInput:(id<NCSDKCharStream>)input lexerActionExecutor:(NCSDKLexerActionExecutor * _Nullable)lexerActionExecutor startIndex:(int32_t)startIndex index:(int32_t)index line:(int32_t)line charPos:(int32_t)charPos __attribute__((swift_name("accept(input:lexerActionExecutor:startIndex:index:line:charPos:)")));
- (NCSDKDFAState *)addDFAEdgeFrom:(NCSDKDFAState * _Nullable)from t:(int32_t)t q:(NSSet<NCSDKATNConfig *> *)q __attribute__((swift_name("addDFAEdge(from:t:q:)")));
- (void)addDFAEdgeP:(NCSDKDFAState * _Nullable)p t:(int32_t)t q:(NCSDKDFAState *)q __attribute__((swift_name("addDFAEdge(p:t:q:)")));
- (NCSDKDFAState *)addDFAStateConfigs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("addDFAState(configs:)")));
- (void)captureSimStateSettings:(NCSDKLexerATNSimulatorSimState *)settings input:(id<NCSDKCharStream>)input dfaState:(NCSDKDFAState *)dfaState __attribute__((swift_name("captureSimState(settings:input:dfaState:)")));
- (void)clearDFA __attribute__((swift_name("clearDFA()")));
- (BOOL)closureInput:(id<NCSDKCharStream>)input config:(NCSDKLexerATNConfig *)config configs:(NSSet<NCSDKATNConfig *> *)configs currentAltReachedAcceptState:(BOOL)currentAltReachedAcceptState speculative:(BOOL)speculative treatEofAsEpsilon:(BOOL)treatEofAsEpsilon __attribute__((swift_name("closure(input:config:configs:currentAltReachedAcceptState:speculative:treatEofAsEpsilon:)")));
- (NSSet<NCSDKATNConfig *> *)computeStartStateInput:(id<NCSDKCharStream>)input p:(NCSDKATNState *)p __attribute__((swift_name("computeStartState(input:p:)")));
- (NCSDKDFAState *)computeTargetStateInput:(id<NCSDKCharStream>)input s:(NCSDKDFAState * _Nullable)s t:(int32_t)t __attribute__((swift_name("computeTargetState(input:s:t:)")));
- (void)consumeInput:(id<NCSDKCharStream>)input __attribute__((swift_name("consume(input:)")));
- (void)doCopyStateSimulator:(NCSDKLexerATNSimulator *)simulator __attribute__((swift_name("doCopyState(simulator:)")));
- (BOOL)evaluatePredicateInput:(id<NCSDKCharStream>)input ruleIndex:(int32_t)ruleIndex predIndex:(int32_t)predIndex speculative:(BOOL)speculative __attribute__((swift_name("evaluatePredicate(input:ruleIndex:predIndex:speculative:)")));
- (int32_t)execATNInput:(id<NCSDKCharStream>)input ds0:(NCSDKDFAState *)ds0 __attribute__((swift_name("execATN(input:ds0:)")));
- (int32_t)failOrAcceptPrevAccept:(NCSDKLexerATNSimulatorSimState *)prevAccept input:(id<NCSDKCharStream>)input reach:(NSSet<NCSDKATNConfig *> *)reach t:(int32_t)t __attribute__((swift_name("failOrAccept(prevAccept:input:reach:t:)")));
- (NCSDKDFA *)getDFAMode:(int32_t)mode __attribute__((swift_name("getDFA(mode:)")));
- (NCSDKLexerATNConfig * _Nullable)getEpsilonTargetInput:(id<NCSDKCharStream>)input config:(NCSDKLexerATNConfig *)config t:(NCSDKTransition *)t configs:(NSSet<NCSDKATNConfig *> *)configs speculative:(BOOL)speculative treatEofAsEpsilon:(BOOL)treatEofAsEpsilon __attribute__((swift_name("getEpsilonTarget(input:config:t:configs:speculative:treatEofAsEpsilon:)")));
- (NCSDKDFAState * _Nullable)getExistingTargetStateS:(NCSDKDFAState * _Nullable)s t:(int32_t)t __attribute__((swift_name("getExistingTargetState(s:t:)")));
- (void)getReachableConfigSetInput:(id<NCSDKCharStream>)input closure:(NSSet<NCSDKATNConfig *> *)closure reach:(NSSet<NCSDKATNConfig *> *)reach t:(int32_t)t __attribute__((swift_name("getReachableConfigSet(input:closure:reach:t:)")));
- (NCSDKATNState * _Nullable)getReachableTargetTrans:(NCSDKTransition *)trans t:(int32_t)t __attribute__((swift_name("getReachableTarget(trans:t:)")));
- (NSString *)getTextInput:(id<NCSDKCharStream>)input __attribute__((swift_name("getText(input:)")));
- (NSString *)getTokenNameT:(int32_t)t __attribute__((swift_name("getTokenName(t:)")));
- (int32_t)matchInput:(id<NCSDKCharStream>)input mode:(int32_t)mode __attribute__((swift_name("match(input:mode:)")));
- (int32_t)matchATNInput:(id<NCSDKCharStream>)input __attribute__((swift_name("matchATN(input:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property int32_t charPositionInLine __attribute__((swift_name("charPositionInLine")));
@property (readonly) NCSDKKotlinArray<NCSDKDFA *> *decisionToDFA __attribute__((swift_name("decisionToDFA")));
@property int32_t line __attribute__((swift_name("line")));
@property int32_t mode __attribute__((swift_name("mode")));
@property (readonly) NCSDKLexerATNSimulatorSimState *prevAccept __attribute__((swift_name("prevAccept")));
@property (readonly) NCSDKLexer * _Nullable recog __attribute__((swift_name("recog")));
@property int32_t startIndex __attribute__((swift_name("startIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerATNSimulator.Companion")))
@interface NCSDKLexerATNSimulatorCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKLexerATNSimulatorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_DFA_EDGE __attribute__((swift_name("MAX_DFA_EDGE")));
@property (readonly) int32_t MIN_DFA_EDGE __attribute__((swift_name("MIN_DFA_EDGE")));
@property (readonly) BOOL debug __attribute__((swift_name("debug")));
@property (readonly) BOOL dfa_debug __attribute__((swift_name("dfa_debug")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerATNSimulator.SimState")))
@interface NCSDKLexerATNSimulatorSimState : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)reset __attribute__((swift_name("reset()")));
@property int32_t charPos __attribute__((swift_name("charPos")));
@property NCSDKDFAState * _Nullable dfaState __attribute__((swift_name("dfaState")));
@property int32_t index __attribute__((swift_name("index")));
@property int32_t line __attribute__((swift_name("line")));
@end;

__attribute__((swift_name("LexerAction")))
@protocol NCSDKLexerAction
@required
- (void)executeLexer:(NCSDKLexer *)lexer __attribute__((swift_name("execute(lexer:)")));
@property (readonly) NCSDKLexerActionType *actionType __attribute__((swift_name("actionType")));
@property (readonly) BOOL isPositionDependent __attribute__((swift_name("isPositionDependent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerActionExecutor")))
@interface NCSDKLexerActionExecutor : NCSDKBase
- (instancetype)initWithLexerActions:(NCSDKKotlinArray<id<NCSDKLexerAction>> *)lexerActions __attribute__((swift_name("init(lexerActions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKLexerActionExecutorCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (void)executeLexer:(NCSDKLexer *)lexer input:(id<NCSDKCharStream>)input startIndex:(int32_t)startIndex __attribute__((swift_name("execute(lexer:input:startIndex:)")));
- (NCSDKLexerActionExecutor *)fixOffsetBeforeMatchOffset:(int32_t)offset __attribute__((swift_name("fixOffsetBeforeMatch(offset:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) NCSDKKotlinArray<id<NCSDKLexerAction>> *lexerActions __attribute__((swift_name("lexerActions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerActionExecutor.Companion")))
@interface NCSDKLexerActionExecutorCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKLexerActionExecutorCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKLexerActionExecutor *)appendLexerActionExecutor:(NCSDKLexerActionExecutor * _Nullable)lexerActionExecutor lexerAction:(id<NCSDKLexerAction>)lexerAction __attribute__((swift_name("append(lexerActionExecutor:lexerAction:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerActionType")))
@interface NCSDKLexerActionType : NCSDKKotlinEnum<NCSDKLexerActionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKLexerActionType *channel __attribute__((swift_name("channel")));
@property (class, readonly) NCSDKLexerActionType *custom __attribute__((swift_name("custom")));
@property (class, readonly) NCSDKLexerActionType *mode __attribute__((swift_name("mode")));
@property (class, readonly) NCSDKLexerActionType *more __attribute__((swift_name("more")));
@property (class, readonly) NCSDKLexerActionType *popMode __attribute__((swift_name("popMode")));
@property (class, readonly) NCSDKLexerActionType *pushMode __attribute__((swift_name("pushMode")));
@property (class, readonly) NCSDKLexerActionType *skip __attribute__((swift_name("skip")));
@property (class, readonly) NCSDKLexerActionType *type __attribute__((swift_name("type")));
+ (NCSDKKotlinArray<NCSDKLexerActionType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerChannelAction")))
@interface NCSDKLexerChannelAction : NCSDKBase <NCSDKLexerAction>
- (instancetype)initWithChannel:(int32_t)channel __attribute__((swift_name("init(channel:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)obj __attribute__((swift_name("isEqual(_:)")));
- (void)executeLexer:(NCSDKLexer *)lexer __attribute__((swift_name("execute(lexer:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKLexerActionType *actionType __attribute__((swift_name("actionType")));
@property (readonly) int32_t channel __attribute__((swift_name("channel")));
@property (readonly) BOOL isPositionDependent __attribute__((swift_name("isPositionDependent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerCustomAction")))
@interface NCSDKLexerCustomAction : NCSDKBase <NCSDKLexerAction>
- (instancetype)initWithRuleIndex:(int32_t)ruleIndex actionIndex:(int32_t)actionIndex __attribute__((swift_name("init(ruleIndex:actionIndex:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)obj __attribute__((swift_name("isEqual(_:)")));
- (void)executeLexer:(NCSDKLexer *)lexer __attribute__((swift_name("execute(lexer:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) int32_t actionIndex __attribute__((swift_name("actionIndex")));
@property (readonly) NCSDKLexerActionType *actionType __attribute__((swift_name("actionType")));
@property (readonly) BOOL isPositionDependent __attribute__((swift_name("isPositionDependent")));
@property (readonly) int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerIndexedCustomAction")))
@interface NCSDKLexerIndexedCustomAction : NCSDKBase <NCSDKLexerAction>
- (instancetype)initWithOffset:(int32_t)offset action:(id<NCSDKLexerAction>)action __attribute__((swift_name("init(offset:action:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)obj __attribute__((swift_name("isEqual(_:)")));
- (void)executeLexer:(NCSDKLexer *)lexer __attribute__((swift_name("execute(lexer:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) id<NCSDKLexerAction> action __attribute__((swift_name("action")));
@property (readonly) NCSDKLexerActionType *actionType __attribute__((swift_name("actionType")));
@property (readonly) BOOL isPositionDependent __attribute__((swift_name("isPositionDependent")));
@property (readonly) int32_t offset __attribute__((swift_name("offset")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerModeAction")))
@interface NCSDKLexerModeAction : NCSDKBase <NCSDKLexerAction>
- (instancetype)initWithMode:(int32_t)mode __attribute__((swift_name("init(mode:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)obj __attribute__((swift_name("isEqual(_:)")));
- (void)executeLexer:(NCSDKLexer *)lexer __attribute__((swift_name("execute(lexer:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKLexerActionType *actionType __attribute__((swift_name("actionType")));
@property (readonly) BOOL isPositionDependent __attribute__((swift_name("isPositionDependent")));
@property (readonly) int32_t mode __attribute__((swift_name("mode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerMoreAction")))
@interface NCSDKLexerMoreAction : NCSDKBase <NCSDKLexerAction>
@property (class, readonly, getter=companion) NCSDKLexerMoreActionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)obj __attribute__((swift_name("isEqual(_:)")));
- (void)executeLexer:(NCSDKLexer *)lexer __attribute__((swift_name("execute(lexer:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKLexerActionType *actionType __attribute__((swift_name("actionType")));
@property (readonly) BOOL isPositionDependent __attribute__((swift_name("isPositionDependent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerMoreAction.Companion")))
@interface NCSDKLexerMoreActionCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKLexerMoreActionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKLexerMoreAction *INSTANCE __attribute__((swift_name("INSTANCE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerPopModeAction")))
@interface NCSDKLexerPopModeAction : NCSDKBase <NCSDKLexerAction>
@property (class, readonly, getter=companion) NCSDKLexerPopModeActionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)obj __attribute__((swift_name("isEqual(_:)")));
- (void)executeLexer:(NCSDKLexer *)lexer __attribute__((swift_name("execute(lexer:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKLexerActionType *actionType __attribute__((swift_name("actionType")));
@property (readonly) BOOL isPositionDependent __attribute__((swift_name("isPositionDependent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerPopModeAction.Companion")))
@interface NCSDKLexerPopModeActionCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKLexerPopModeActionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKLexerPopModeAction *INSTANCE __attribute__((swift_name("INSTANCE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerPushModeAction")))
@interface NCSDKLexerPushModeAction : NCSDKBase <NCSDKLexerAction>
- (instancetype)initWithMode:(int32_t)mode __attribute__((swift_name("init(mode:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)obj __attribute__((swift_name("isEqual(_:)")));
- (void)executeLexer:(NCSDKLexer *)lexer __attribute__((swift_name("execute(lexer:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKLexerActionType *actionType __attribute__((swift_name("actionType")));
@property (readonly) BOOL isPositionDependent __attribute__((swift_name("isPositionDependent")));
@property (readonly) int32_t mode __attribute__((swift_name("mode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerSkipAction")))
@interface NCSDKLexerSkipAction : NCSDKBase <NCSDKLexerAction>
@property (class, readonly, getter=companion) NCSDKLexerSkipActionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)obj __attribute__((swift_name("isEqual(_:)")));
- (void)executeLexer:(NCSDKLexer *)lexer __attribute__((swift_name("execute(lexer:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKLexerActionType *actionType __attribute__((swift_name("actionType")));
@property (readonly) BOOL isPositionDependent __attribute__((swift_name("isPositionDependent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerSkipAction.Companion")))
@interface NCSDKLexerSkipActionCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKLexerSkipActionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKLexerSkipAction *INSTANCE __attribute__((swift_name("INSTANCE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LexerTypeAction")))
@interface NCSDKLexerTypeAction : NCSDKBase <NCSDKLexerAction>
- (instancetype)initWithType:(int32_t)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)obj __attribute__((swift_name("isEqual(_:)")));
- (void)executeLexer:(NCSDKLexer *)lexer __attribute__((swift_name("execute(lexer:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKLexerActionType *actionType __attribute__((swift_name("actionType")));
@property (readonly) BOOL isPositionDependent __attribute__((swift_name("isPositionDependent")));
@property (readonly) int32_t type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LookaheadEventInfo")))
@interface NCSDKLookaheadEventInfo : NCSDKDecisionEventInfo
- (instancetype)initWithDecision:(int32_t)decision configs:(NSSet<NCSDKATNConfig *> *)configs predictedAlt:(int32_t)predictedAlt input:(id<NCSDKTokenStream>)input startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex fullCtx:(BOOL)fullCtx __attribute__((swift_name("init(decision:configs:predictedAlt:input:startIndex:stopIndex:fullCtx:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDecision:(int32_t)decision configs:(NSSet<NCSDKATNConfig *> *)configs input:(id<NCSDKTokenStream>)input startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex fullCtx:(BOOL)fullCtx __attribute__((swift_name("init(decision:configs:input:startIndex:stopIndex:fullCtx:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property int32_t predictedAlt __attribute__((swift_name("predictedAlt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoopEndState")))
@interface NCSDKLoopEndState : NCSDKATNState
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NCSDKATNState * _Nullable loopBackState __attribute__((swift_name("loopBackState")));
@property (readonly) int32_t stateType __attribute__((swift_name("stateType")));
@end;

__attribute__((swift_name("SetTransition")))
@interface NCSDKSetTransition : NCSDKTransition
- (instancetype)initWithTarget:(NCSDKATNState *)target set:(NCSDKIntervalSet * _Nullable)set __attribute__((swift_name("init(target:set:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTarget:(NCSDKATNState * _Nullable)target __attribute__((swift_name("init(target:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NCSDKIntervalSet * _Nullable)accessLabel __attribute__((swift_name("accessLabel()")));
- (BOOL)matchesSymbol:(int32_t)symbol minVocabSymbol:(int32_t)minVocabSymbol maxVocabSymbol:(int32_t)maxVocabSymbol __attribute__((swift_name("matches(symbol:minVocabSymbol:maxVocabSymbol:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t serializationType __attribute__((swift_name("serializationType")));
@property (readonly) NCSDKIntervalSet *set __attribute__((swift_name("set")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotSetTransition")))
@interface NCSDKNotSetTransition : NCSDKSetTransition
- (instancetype)initWithTarget:(NCSDKATNState *)target set:(NCSDKIntervalSet *)set __attribute__((swift_name("init(target:set:)"))) __attribute__((objc_designated_initializer));
- (BOOL)matchesSymbol:(int32_t)symbol minVocabSymbol:(int32_t)minVocabSymbol maxVocabSymbol:(int32_t)maxVocabSymbol __attribute__((swift_name("matches(symbol:minVocabSymbol:maxVocabSymbol:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t serializationType __attribute__((swift_name("serializationType")));
@end;

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("OrderedATNConfigSet")))
@interface NCSDKOrderedATNConfigSet : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParseInfo")))
@interface NCSDKParseInfo : NCSDKBase
- (instancetype)initWithAtnSimulator:(NCSDKProfilingATNSimulator *)atnSimulator __attribute__((swift_name("init(atnSimulator:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NCSDKProfilingATNSimulator *atnSimulator __attribute__((swift_name("atnSimulator")));
@property (readonly) NCSDKKotlinArray<NCSDKDecisionInfo *> *decisionInfo __attribute__((swift_name("decisionInfo")));
@property (readonly) NSArray<NCSDKInt *> *llDecisions __attribute__((swift_name("llDecisions")));
@property (readonly) int64_t totalATNLookaheadOps __attribute__((swift_name("totalATNLookaheadOps")));
@property (readonly) int64_t totalLLATNLookaheadOps __attribute__((swift_name("totalLLATNLookaheadOps")));
@property (readonly) int64_t totalLLLookaheadOps __attribute__((swift_name("totalLLLookaheadOps")));
@property (readonly) int64_t totalSLLATNLookaheadOps __attribute__((swift_name("totalSLLATNLookaheadOps")));
@property (readonly) int64_t totalSLLLookaheadOps __attribute__((swift_name("totalSLLLookaheadOps")));
@property (readonly) int64_t totalTimeInPrediction __attribute__((swift_name("totalTimeInPrediction")));
@end;

__attribute__((swift_name("ParserATNSimulator")))
@interface NCSDKParserATNSimulator : NCSDKATNSimulator
- (instancetype)initWithAtn:(NCSDKATN *)atn decisionToDFA:(NCSDKKotlinArray<NCSDKDFA *> *)decisionToDFA sharedContextCache:(NCSDKPredictionContextCache *)sharedContextCache __attribute__((swift_name("init(atn:decisionToDFA:sharedContextCache:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithParser:(NCSDKParser * _Nullable)parser atn:(NCSDKATN *)atn decisionToDFA:(NCSDKKotlinArray<NCSDKDFA *> *)decisionToDFA sharedContextCache:(NCSDKPredictionContextCache *)sharedContextCache __attribute__((swift_name("init(parser:atn:decisionToDFA:sharedContextCache:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAtn:(NCSDKATN *)atn sharedContextCache:(NCSDKPredictionContextCache * _Nullable)sharedContextCache __attribute__((swift_name("init(atn:sharedContextCache:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKParserATNSimulatorCompanion *companion __attribute__((swift_name("companion")));
- (NCSDKATNConfig *)actionTransitionConfig:(NCSDKATNConfig *)config t:(NCSDKActionTransition *)t __attribute__((swift_name("actionTransition(config:t:)")));
- (int32_t)adaptivePredictInput:(id<NCSDKTokenStream>)input decision:(int32_t)decision outerContext:(NCSDKParserRuleContext * _Nullable)outerContext __attribute__((swift_name("adaptivePredict(input:decision:outerContext:)")));
- (NCSDKDFAState * _Nullable)addDFAEdgeDfa:(NCSDKDFA *)dfa from:(NCSDKDFAState * _Nullable)from t:(int32_t)t to:(NCSDKDFAState * _Nullable)to __attribute__((swift_name("addDFAEdge(dfa:from:t:to:)")));
- (NCSDKDFAState *)addDFAStateDfa:(NCSDKDFA *)dfa D:(NCSDKDFAState *)D __attribute__((swift_name("addDFAState(dfa:D:)")));
- (NSSet<NCSDKATNConfig *> *)applyPrecedenceFilterConfigs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("applyPrecedenceFilter(configs:)")));
- (BOOL)canDropLoopEntryEdgeInLeftRecursiveRuleConfig:(NCSDKATNConfig *)config __attribute__((swift_name("canDropLoopEntryEdgeInLeftRecursiveRule(config:)")));
- (void)clearDFA __attribute__((swift_name("clearDFA()")));
- (void)closureConfig:(NCSDKATNConfig *)config configs:(NSSet<NCSDKATNConfig *> *)configs closureBusy:(NCSDKMutableSet<NCSDKATNConfig *> *)closureBusy collectPredicates:(BOOL)collectPredicates fullCtx:(BOOL)fullCtx treatEofAsEpsilon:(BOOL)treatEofAsEpsilon __attribute__((swift_name("closure(config:configs:closureBusy:collectPredicates:fullCtx:treatEofAsEpsilon:)")));
- (void)closureCheckingStopStateConfig:(NCSDKATNConfig *)config configs:(NSSet<NCSDKATNConfig *> *)configs closureBusy:(NCSDKMutableSet<NCSDKATNConfig *> *)closureBusy collectPredicates:(BOOL)collectPredicates fullCtx:(BOOL)fullCtx depth:(int32_t)depth treatEofAsEpsilon:(BOOL)treatEofAsEpsilon __attribute__((swift_name("closureCheckingStopState(config:configs:closureBusy:collectPredicates:fullCtx:depth:treatEofAsEpsilon:)")));
- (void)closure_Config:(NCSDKATNConfig *)config configs:(NSSet<NCSDKATNConfig *> *)configs closureBusy:(NCSDKMutableSet<NCSDKATNConfig *> *)closureBusy collectPredicates:(BOOL)collectPredicates fullCtx:(BOOL)fullCtx depth:(int32_t)depth treatEofAsEpsilon:(BOOL)treatEofAsEpsilon __attribute__((swift_name("closure_(config:configs:closureBusy:collectPredicates:fullCtx:depth:treatEofAsEpsilon:)")));
- (NSSet<NCSDKATNConfig *> * _Nullable)computeReachSetClosure:(NSSet<NCSDKATNConfig *> *)closure t:(int32_t)t fullCtx:(BOOL)fullCtx __attribute__((swift_name("computeReachSet(closure:t:fullCtx:)")));
- (NSSet<NCSDKATNConfig *> *)computeStartStateP:(NCSDKATNState *)p ctx:(NCSDKRuleContext *)ctx fullCtx:(BOOL)fullCtx __attribute__((swift_name("computeStartState(p:ctx:fullCtx:)")));
- (NCSDKDFAState * _Nullable)computeTargetStateDfa:(NCSDKDFA *)dfa previousD:(NCSDKDFAState *)previousD t:(int32_t)t __attribute__((swift_name("computeTargetState(dfa:previousD:t:)")));
- (void)dumpDeadEndConfigsNvae:(NCSDKNoViableAltException *)nvae __attribute__((swift_name("dumpDeadEndConfigs(nvae:)")));
- (BOOL)evalSemanticContextPred:(NCSDKSemanticContext * _Nullable)pred parserCallStack:(NCSDKParserRuleContext * _Nullable)parserCallStack alt:(int32_t)alt fullCtx:(BOOL)fullCtx __attribute__((swift_name("evalSemanticContext(pred:parserCallStack:alt:fullCtx:)")));
- (NCSDKBitSet *)evalSemanticContextPredPredictions:(NCSDKKotlinArray<NCSDKDFAStatePredPrediction *> *)predPredictions outerContext:(NCSDKParserRuleContext *)outerContext complete:(BOOL)complete __attribute__((swift_name("evalSemanticContext(predPredictions:outerContext:complete:)")));
- (int32_t)execATNDfa:(NCSDKDFA *)dfa s0:(NCSDKDFAState *)s0 input:(id<NCSDKTokenStream>)input startIndex:(int32_t)startIndex outerContext:(NCSDKParserRuleContext *)outerContext __attribute__((swift_name("execATN(dfa:s0:input:startIndex:outerContext:)")));
- (int32_t)execATNWithFullContextDfa:(NCSDKDFA *)dfa D:(NCSDKDFAState *)D s0:(NSSet<NCSDKATNConfig *> *)s0 input:(id<NCSDKTokenStream>)input startIndex:(int32_t)startIndex outerContext:(NCSDKParserRuleContext *)outerContext __attribute__((swift_name("execATNWithFullContext(dfa:D:s0:input:startIndex:outerContext:)")));
- (int32_t)getAltThatFinishedDecisionEntryRuleConfigs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("getAltThatFinishedDecisionEntryRule(configs:)")));
- (NCSDKBitSet *)getConflictingAltsConfigs:(NSSet<NCSDKATNConfig *> * _Nullable)configs __attribute__((swift_name("getConflictingAlts(configs:)")));
- (NCSDKBitSet *)getConflictingAltsOrUniqueAltConfigs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("getConflictingAltsOrUniqueAlt(configs:)")));
- (NCSDKATNConfig * _Nullable)getEpsilonTargetConfig:(NCSDKATNConfig *)config t:(NCSDKTransition *)t collectPredicates:(BOOL)collectPredicates inContext:(BOOL)inContext fullCtx:(BOOL)fullCtx treatEofAsEpsilon:(BOOL)treatEofAsEpsilon __attribute__((swift_name("getEpsilonTarget(config:t:collectPredicates:inContext:fullCtx:treatEofAsEpsilon:)")));
- (NCSDKDFAState * _Nullable)getExistingTargetStatePreviousD:(NCSDKDFAState *)previousD t:(int32_t)t __attribute__((swift_name("getExistingTargetState(previousD:t:)")));
- (NSString *)getLookaheadNameInput:(id<NCSDKTokenStream>)input __attribute__((swift_name("getLookaheadName(input:)")));
- (NCSDKKotlinArray<NCSDKDFAStatePredPrediction *> * _Nullable)getPredicatePredictionsAmbigAlts:(NCSDKBitSet * _Nullable)ambigAlts altToPred:(NCSDKKotlinArray<NCSDKSemanticContext *> *)altToPred __attribute__((swift_name("getPredicatePredictions(ambigAlts:altToPred:)")));
- (NCSDKKotlinArray<NCSDKSemanticContext *> * _Nullable)getPredsForAmbigAltsAmbigAlts:(NCSDKBitSet *)ambigAlts configs:(NSSet<NCSDKATNConfig *> *)configs nalts:(int32_t)nalts __attribute__((swift_name("getPredsForAmbigAlts(ambigAlts:configs:nalts:)")));
- (NCSDKATNState * _Nullable)getReachableTargetTrans:(NCSDKTransition *)trans ttype:(int32_t)ttype __attribute__((swift_name("getReachableTarget(trans:ttype:)")));
- (NSString *)getRuleNameIndex:(int32_t)index __attribute__((swift_name("getRuleName(index:)")));
- (int32_t)getSynValidOrSemInvalidAltThatFinishedDecisionEntryRuleConfigs:(NSSet<NCSDKATNConfig *> *)configs outerContext:(NCSDKParserRuleContext *)outerContext __attribute__((swift_name("getSynValidOrSemInvalidAltThatFinishedDecisionEntryRule(configs:outerContext:)")));
- (NSString *)getTokenNameT:(int32_t)t __attribute__((swift_name("getTokenName(t:)")));
- (NCSDKNoViableAltException *)noViableAltInput:(id<NCSDKTokenStream>)input outerContext:(NCSDKParserRuleContext *)outerContext configs:(NSSet<NCSDKATNConfig *> *)configs startIndex:(int32_t)startIndex __attribute__((swift_name("noViableAlt(input:outerContext:configs:startIndex:)")));
- (NCSDKATNConfig * _Nullable)precedenceTransitionConfig:(NCSDKATNConfig *)config pt:(NCSDKPrecedencePredicateTransition *)pt collectPredicates:(BOOL)collectPredicates inContext:(BOOL)inContext fullCtx:(BOOL)fullCtx __attribute__((swift_name("precedenceTransition(config:pt:collectPredicates:inContext:fullCtx:)")));
- (NCSDKATNConfig * _Nullable)predTransitionConfig:(NCSDKATNConfig *)config pt:(NCSDKPredicateTransition *)pt collectPredicates:(BOOL)collectPredicates inContext:(BOOL)inContext fullCtx:(BOOL)fullCtx __attribute__((swift_name("predTransition(config:pt:collectPredicates:inContext:fullCtx:)")));
- (void)predicateDFAStateDfaState:(NCSDKDFAState *)dfaState decisionState:(NCSDKDecisionState * _Nullable)decisionState __attribute__((swift_name("predicateDFAState(dfaState:decisionState:)")));
- (NSSet<NCSDKATNConfig *> *)removeAllConfigsNotInRuleStopStateConfigs:(NSSet<NCSDKATNConfig *> *)configs lookToEndOfRule:(BOOL)lookToEndOfRule __attribute__((swift_name("removeAllConfigsNotInRuleStopState(configs:lookToEndOfRule:)")));
- (void)reportAmbiguityDfa:(NCSDKDFA *)dfa D:(NCSDKDFAState *)D startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex exact:(BOOL)exact ambigAlts:(NCSDKBitSet *)ambigAlts configs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("reportAmbiguity(dfa:D:startIndex:stopIndex:exact:ambigAlts:configs:)")));
- (void)reportAttemptingFullContextDfa:(NCSDKDFA *)dfa conflictingAlts:(NCSDKBitSet *)conflictingAlts configs:(NSSet<NCSDKATNConfig *> *)configs startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex __attribute__((swift_name("reportAttemptingFullContext(dfa:conflictingAlts:configs:startIndex:stopIndex:)")));
- (void)reportContextSensitivityDfa:(NCSDKDFA *)dfa prediction:(int32_t)prediction configs:(NSSet<NCSDKATNConfig *> *)configs startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex __attribute__((swift_name("reportContextSensitivity(dfa:prediction:configs:startIndex:stopIndex:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (NCSDKATNConfig *)ruleTransitionConfig:(NCSDKATNConfig *)config t:(NCSDKRuleTransition *)t __attribute__((swift_name("ruleTransition(config:t:)")));
- (NCSDKKotlinPair<NSSet<NCSDKATNConfig *> *, NSSet<NCSDKATNConfig *> *> *)splitAccordingToSemanticValidityConfigs:(NSSet<NCSDKATNConfig *> *)configs outerContext:(NCSDKParserRuleContext *)outerContext __attribute__((swift_name("splitAccordingToSemanticValidity(configs:outerContext:)")));
@property NCSDKDFA * _Nullable _dfa __attribute__((swift_name("_dfa")));
@property id<NCSDKTokenStream> _Nullable _input __attribute__((swift_name("_input")));
@property NCSDKParserRuleContext * _Nullable _outerContext __attribute__((swift_name("_outerContext")));
@property int32_t _startIndex __attribute__((swift_name("_startIndex")));
@property (readonly) NCSDKKotlinArray<NCSDKDFA *> *decisionToDFA __attribute__((swift_name("decisionToDFA")));
@property NCSDKDoubleKeyMap<NCSDKPredictionContext *, NCSDKPredictionContext *, NCSDKPredictionContext *> * _Nullable mergeCache __attribute__((swift_name("mergeCache")));
@property (readonly) NCSDKParser * _Nullable parser __attribute__((swift_name("parser")));
@property NCSDKPredictionMode *predictionMode __attribute__((swift_name("predictionMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParserATNSimulator.Companion")))
@interface NCSDKParserATNSimulatorCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKParserATNSimulatorCompanion *shared __attribute__((swift_name("shared")));
- (int32_t)getUniqueAltConfigs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("getUniqueAlt(configs:)")));
@property (readonly) BOOL debug __attribute__((swift_name("debug")));
@property (readonly) BOOL debug_list_atn_decisions __attribute__((swift_name("debug_list_atn_decisions")));
@property (readonly) BOOL dfa_debug __attribute__((swift_name("dfa_debug")));
@property (readonly) BOOL retry_debug __attribute__((swift_name("retry_debug")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlusBlockStartState")))
@interface NCSDKPlusBlockStartState : NCSDKBlockStartState
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NCSDKPlusLoopbackState * _Nullable loopBackState __attribute__((swift_name("loopBackState")));
@property (readonly) int32_t stateType __attribute__((swift_name("stateType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlusLoopbackState")))
@interface NCSDKPlusLoopbackState : NCSDKDecisionState
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) int32_t stateType __attribute__((swift_name("stateType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrecedencePredicateTransition")))
@interface NCSDKPrecedencePredicateTransition : NCSDKAbstractPredicateTransition
- (instancetype)initWithTarget:(NCSDKATNState *)target precedence:(int32_t)precedence __attribute__((swift_name("init(target:precedence:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTarget:(NCSDKATNState *)target __attribute__((swift_name("init(target:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)matchesSymbol:(int32_t)symbol minVocabSymbol:(int32_t)minVocabSymbol maxVocabSymbol:(int32_t)maxVocabSymbol __attribute__((swift_name("matches(symbol:minVocabSymbol:maxVocabSymbol:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isEpsilon __attribute__((swift_name("isEpsilon")));
@property (readonly) int32_t precedence __attribute__((swift_name("precedence")));
@property (readonly) NCSDKSemanticContextPrecedencePredicate *predicate __attribute__((swift_name("predicate")));
@property (readonly) int32_t serializationType __attribute__((swift_name("serializationType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredicateEvalInfo")))
@interface NCSDKPredicateEvalInfo : NCSDKDecisionEventInfo
- (instancetype)initWithDecision:(int32_t)decision input:(id<NCSDKTokenStream>)input startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex semctx:(NCSDKSemanticContext *)semctx evalResult:(BOOL)evalResult predictedAlt:(int32_t)predictedAlt fullCtx:(BOOL)fullCtx __attribute__((swift_name("init(decision:input:startIndex:stopIndex:semctx:evalResult:predictedAlt:fullCtx:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDecision:(int32_t)decision configs:(NSSet<NCSDKATNConfig *> *)configs input:(id<NCSDKTokenStream>)input startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex fullCtx:(BOOL)fullCtx __attribute__((swift_name("init(decision:configs:input:startIndex:stopIndex:fullCtx:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL evalResult __attribute__((swift_name("evalResult")));
@property (readonly) int32_t predictedAlt __attribute__((swift_name("predictedAlt")));
@property (readonly) NCSDKSemanticContext *semctx __attribute__((swift_name("semctx")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredicateTransition")))
@interface NCSDKPredicateTransition : NCSDKAbstractPredicateTransition
- (instancetype)initWithTarget:(NCSDKATNState *)target ruleIndex:(int32_t)ruleIndex predIndex:(int32_t)predIndex isCtxDependent:(BOOL)isCtxDependent __attribute__((swift_name("init(target:ruleIndex:predIndex:isCtxDependent:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTarget:(NCSDKATNState *)target __attribute__((swift_name("init(target:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)matchesSymbol:(int32_t)symbol minVocabSymbol:(int32_t)minVocabSymbol maxVocabSymbol:(int32_t)maxVocabSymbol __attribute__((swift_name("matches(symbol:minVocabSymbol:maxVocabSymbol:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isCtxDependent __attribute__((swift_name("isCtxDependent")));
@property (readonly) BOOL isEpsilon __attribute__((swift_name("isEpsilon")));
@property (readonly) int32_t predIndex __attribute__((swift_name("predIndex")));
@property (readonly) NCSDKSemanticContextPredicate *predicate __attribute__((swift_name("predicate")));
@property (readonly) int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@property (readonly) int32_t serializationType __attribute__((swift_name("serializationType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionContext.Companion")))
@interface NCSDKPredictionContextCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKPredictionContextCompanion *shared __attribute__((swift_name("shared")));
- (int32_t)calculateEmptyHashCode __attribute__((swift_name("calculateEmptyHashCode()")));
- (int32_t)calculateHashCodeParent:(NCSDKPredictionContext *)parent returnState:(int32_t)returnState __attribute__((swift_name("calculateHashCode(parent:returnState:)")));
- (int32_t)calculateHashCodeParents:(NCSDKKotlinArray<NCSDKPredictionContext *> *)parents returnStates:(NCSDKKotlinIntArray *)returnStates __attribute__((swift_name("calculateHashCode(parents:returnStates:)")));
- (void)combineCommonParentsParents:(NCSDKKotlinArray<NCSDKPredictionContext *> *)parents __attribute__((swift_name("combineCommonParents(parents:)")));
- (NCSDKPredictionContext *)fromRuleContextAtn:(NCSDKATN *)atn outerContext:(NCSDKRuleContext * _Nullable)outerContext __attribute__((swift_name("fromRuleContext(atn:outerContext:)")));
- (NSArray<NCSDKPredictionContext *> *)getAllContextNodesContext:(NCSDKPredictionContext *)context __attribute__((swift_name("getAllContextNodes(context:)")));
- (void)getAllContextNodes_Context:(NCSDKPredictionContext * _Nullable)context nodes:(NSMutableArray<NCSDKPredictionContext *> *)nodes visited:(NCSDKMutableDictionary<NCSDKPredictionContext *, NCSDKPredictionContext *> *)visited __attribute__((swift_name("getAllContextNodes_(context:nodes:visited:)")));
- (NCSDKPredictionContext *)getCachedContextContext:(NCSDKPredictionContext *)context contextCache:(NCSDKPredictionContextCache *)contextCache visited:(NCSDKMutableDictionary<NCSDKPredictionContext *, NCSDKPredictionContext *> *)visited __attribute__((swift_name("getCachedContext(context:contextCache:visited:)")));
- (NCSDKPredictionContext *)mergeA:(NCSDKPredictionContext * _Nullable)a b:(NCSDKPredictionContext * _Nullable)b rootIsWildcard:(BOOL)rootIsWildcard mergeCache:(NCSDKDoubleKeyMap<NCSDKPredictionContext *, NCSDKPredictionContext *, NCSDKPredictionContext *> * _Nullable)mergeCache __attribute__((swift_name("merge(a:b:rootIsWildcard:mergeCache:)")));
- (NCSDKPredictionContext *)mergeArraysA:(NCSDKArrayPredictionContext *)a b:(NCSDKArrayPredictionContext *)b rootIsWildcard:(BOOL)rootIsWildcard mergeCache:(NCSDKDoubleKeyMap<NCSDKPredictionContext *, NCSDKPredictionContext *, NCSDKPredictionContext *> * _Nullable)mergeCache __attribute__((swift_name("mergeArrays(a:b:rootIsWildcard:mergeCache:)")));
- (NCSDKPredictionContext * _Nullable)mergeRootA:(NCSDKSingletonPredictionContext *)a b:(NCSDKSingletonPredictionContext *)b rootIsWildcard:(BOOL)rootIsWildcard __attribute__((swift_name("mergeRoot(a:b:rootIsWildcard:)")));
- (NCSDKPredictionContext *)mergeSingletonsA:(NCSDKSingletonPredictionContext *)a b:(NCSDKSingletonPredictionContext *)b rootIsWildcard:(BOOL)rootIsWildcard mergeCache:(NCSDKDoubleKeyMap<NCSDKPredictionContext *, NCSDKPredictionContext *, NCSDKPredictionContext *> * _Nullable)mergeCache __attribute__((swift_name("mergeSingletons(a:b:rootIsWildcard:mergeCache:)")));
@property (readonly) NCSDKEmptyPredictionContext *EMPTY __attribute__((swift_name("EMPTY")));
@property (readonly) int32_t EMPTY_RETURN_STATE __attribute__((swift_name("EMPTY_RETURN_STATE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionContextCache")))
@interface NCSDKPredictionContextCache : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NCSDKPredictionContext *)addCtx:(NCSDKPredictionContext *)ctx __attribute__((swift_name("add(ctx:)")));
- (NCSDKPredictionContext * _Nullable)getCtx:(NCSDKPredictionContext *)ctx __attribute__((swift_name("get(ctx:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) NCSDKMutableDictionary<NCSDKPredictionContext *, NCSDKPredictionContext *> *cache __attribute__((swift_name("cache")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionMode")))
@interface NCSDKPredictionMode : NCSDKKotlinEnum<NCSDKPredictionMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKPredictionModeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NCSDKPredictionMode *sll __attribute__((swift_name("sll")));
@property (class, readonly) NCSDKPredictionMode *ll __attribute__((swift_name("ll")));
@property (class, readonly) NCSDKPredictionMode *llExactAmbigDetection __attribute__((swift_name("llExactAmbigDetection")));
+ (NCSDKKotlinArray<NCSDKPredictionMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionMode.Companion")))
@interface NCSDKPredictionModeCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKPredictionModeCompanion *shared __attribute__((swift_name("shared")));
- (BOOL)allConfigsInRuleStopStatesConfigs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("allConfigsInRuleStopStates(configs:)")));
- (BOOL)allSubsetsConflictAltsets:(id)altsets __attribute__((swift_name("allSubsetsConflict(altsets:)")));
- (BOOL)allSubsetsEqualAltsets:(id)altsets __attribute__((swift_name("allSubsetsEqual(altsets:)")));
- (NCSDKBitSet *)getAltsConfigs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("getAlts(configs:)")));
- (NCSDKBitSet *)getAltsAltsets:(id)altsets __attribute__((swift_name("getAlts(altsets:)")));
- (id)getConflictingAltSubsetsConfigs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("getConflictingAltSubsets(configs:)")));
- (int32_t)getSingleViableAltAltsets:(id)altsets __attribute__((swift_name("getSingleViableAlt(altsets:)")));
- (NSDictionary<NCSDKATNState *, NCSDKBitSet *> *)getStateToAltMapConfigs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("getStateToAltMap(configs:)")));
- (int32_t)getUniqueAltAltsets:(id)altsets __attribute__((swift_name("getUniqueAlt(altsets:)")));
- (BOOL)hasConfigInRuleStopStateConfigs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("hasConfigInRuleStopState(configs:)")));
- (BOOL)hasConflictingAltSetAltsets:(id)altsets __attribute__((swift_name("hasConflictingAltSet(altsets:)")));
- (BOOL)hasNonConflictingAltSetAltsets:(id)altsets __attribute__((swift_name("hasNonConflictingAltSet(altsets:)")));
- (BOOL)hasSLLConflictTerminatingPredictionMode:(NCSDKPredictionMode *)mode configs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("hasSLLConflictTerminatingPrediction(mode:configs:)")));
- (BOOL)hasStateAssociatedWithOneAltConfigs:(NSSet<NCSDKATNConfig *> *)configs __attribute__((swift_name("hasStateAssociatedWithOneAlt(configs:)")));
- (int32_t)resolvesToJustOneViableAltAltsets:(id)altsets __attribute__((swift_name("resolvesToJustOneViableAlt(altsets:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfilingATNSimulator")))
@interface NCSDKProfilingATNSimulator : NCSDKParserATNSimulator
- (instancetype)initWithParser:(NCSDKParser *)parser __attribute__((swift_name("init(parser:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAtn:(NCSDKATN *)atn decisionToDFA:(NCSDKKotlinArray<NCSDKDFA *> *)decisionToDFA sharedContextCache:(NCSDKPredictionContextCache *)sharedContextCache __attribute__((swift_name("init(atn:decisionToDFA:sharedContextCache:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithParser:(NCSDKParser * _Nullable)parser atn:(NCSDKATN *)atn decisionToDFA:(NCSDKKotlinArray<NCSDKDFA *> *)decisionToDFA sharedContextCache:(NCSDKPredictionContextCache *)sharedContextCache __attribute__((swift_name("init(parser:atn:decisionToDFA:sharedContextCache:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property NCSDKKotlinArray<NCSDKDecisionInfo *> * _Nullable decisionInfo __attribute__((swift_name("decisionInfo")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RangeTransition")))
@interface NCSDKRangeTransition : NCSDKTransition
- (instancetype)initWithTarget:(NCSDKATNState *)target from:(int32_t)from to:(int32_t)to __attribute__((swift_name("init(target:from:to:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTarget:(NCSDKATNState * _Nullable)target __attribute__((swift_name("init(target:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NCSDKIntervalSet * _Nullable)accessLabel __attribute__((swift_name("accessLabel()")));
- (BOOL)matchesSymbol:(int32_t)symbol minVocabSymbol:(int32_t)minVocabSymbol maxVocabSymbol:(int32_t)maxVocabSymbol __attribute__((swift_name("matches(symbol:minVocabSymbol:maxVocabSymbol:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t from __attribute__((swift_name("from")));
@property (readonly) int32_t serializationType __attribute__((swift_name("serializationType")));
@property (readonly) int32_t to __attribute__((swift_name("to")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuleStartState")))
@interface NCSDKRuleStartState : NCSDKATNState
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL isLeftRecursiveRule __attribute__((swift_name("isLeftRecursiveRule")));
@property (readonly) int32_t stateType __attribute__((swift_name("stateType")));
@property NCSDKRuleStopState * _Nullable stopState __attribute__((swift_name("stopState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuleStopState")))
@interface NCSDKRuleStopState : NCSDKATNState
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) int32_t stateType __attribute__((swift_name("stateType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuleTransition")))
@interface NCSDKRuleTransition : NCSDKTransition
- (instancetype)initWithRuleStart:(NCSDKRuleStartState *)ruleStart ruleIndex:(int32_t)ruleIndex followState:(NCSDKATNState *)followState __attribute__((swift_name("init(ruleStart:ruleIndex:followState:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use {@link #RuleTransition(RuleStartState, int, int, ATNState)} instead.")));
- (instancetype)initWithRuleStart:(NCSDKRuleStartState *)ruleStart ruleIndex:(int32_t)ruleIndex precedence:(int32_t)precedence followState:(NCSDKATNState *)followState __attribute__((swift_name("init(ruleStart:ruleIndex:precedence:followState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTarget:(NCSDKATNState * _Nullable)target __attribute__((swift_name("init(target:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)matchesSymbol:(int32_t)symbol minVocabSymbol:(int32_t)minVocabSymbol maxVocabSymbol:(int32_t)maxVocabSymbol __attribute__((swift_name("matches(symbol:minVocabSymbol:maxVocabSymbol:)")));
@property NCSDKATNState *followState __attribute__((swift_name("followState")));
@property (readonly) BOOL isEpsilon __attribute__((swift_name("isEpsilon")));
@property (readonly) int32_t precedence __attribute__((swift_name("precedence")));
@property (readonly) int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@property (readonly) int32_t serializationType __attribute__((swift_name("serializationType")));
@end;

__attribute__((swift_name("SemanticContext")))
@interface NCSDKSemanticContext : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) NCSDKSemanticContextCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)evalParser:(NCSDKRecognizer<id, id> *)parser parserCallStack:(NCSDKRuleContext *)parserCallStack __attribute__((swift_name("eval(parser:parserCallStack:)")));
- (NCSDKSemanticContext * _Nullable)evalPrecedenceParser:(NCSDKRecognizer<id, id> *)parser parserCallStack:(NCSDKRuleContext *)parserCallStack __attribute__((swift_name("evalPrecedence(parser:parserCallStack:)")));
@end;

__attribute__((swift_name("SemanticContext.Operator")))
@interface NCSDKSemanticContextOperator : NCSDKSemanticContext
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) id operands __attribute__((swift_name("operands")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SemanticContext.AND")))
@interface NCSDKSemanticContextAND : NCSDKSemanticContextOperator
- (instancetype)initWithA:(NCSDKSemanticContext *)a b:(NCSDKSemanticContext *)b __attribute__((swift_name("init(a:b:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)evalParser:(NCSDKRecognizer<id, id> *)parser parserCallStack:(NCSDKRuleContext *)parserCallStack __attribute__((swift_name("eval(parser:parserCallStack:)")));
- (NCSDKSemanticContext * _Nullable)evalPrecedenceParser:(NCSDKRecognizer<id, id> *)parser parserCallStack:(NCSDKRuleContext *)parserCallStack __attribute__((swift_name("evalPrecedence(parser:parserCallStack:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id operands __attribute__((swift_name("operands")));
@property (readonly) NCSDKKotlinArray<NCSDKSemanticContext *> *opnds __attribute__((swift_name("opnds")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SemanticContext.Companion")))
@interface NCSDKSemanticContextCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKSemanticContextCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKSemanticContext * _Nullable)andA:(NCSDKSemanticContext * _Nullable)a b:(NCSDKSemanticContext * _Nullable)b __attribute__((swift_name("and(a:b:)")));
- (NCSDKSemanticContext * _Nullable)orA:(NCSDKSemanticContext * _Nullable)a b:(NCSDKSemanticContext * _Nullable)b __attribute__((swift_name("or(a:b:)")));
@property (readonly) NCSDKSemanticContext *NONE __attribute__((swift_name("NONE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SemanticContext.OR")))
@interface NCSDKSemanticContextOR : NCSDKSemanticContextOperator
- (instancetype)initWithA:(NCSDKSemanticContext *)a b:(NCSDKSemanticContext *)b __attribute__((swift_name("init(a:b:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)evalParser:(NCSDKRecognizer<id, id> *)parser parserCallStack:(NCSDKRuleContext *)parserCallStack __attribute__((swift_name("eval(parser:parserCallStack:)")));
- (NCSDKSemanticContext * _Nullable)evalPrecedenceParser:(NCSDKRecognizer<id, id> *)parser parserCallStack:(NCSDKRuleContext *)parserCallStack __attribute__((swift_name("evalPrecedence(parser:parserCallStack:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id operands __attribute__((swift_name("operands")));
@property (readonly) NCSDKKotlinArray<NCSDKSemanticContext *> *opnds __attribute__((swift_name("opnds")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SemanticContext.PrecedencePredicate")))
@interface NCSDKSemanticContextPrecedencePredicate : NCSDKSemanticContext <NCSDKKotlinComparable>
- (instancetype)initWithPrecedence:(int32_t)precedence __attribute__((swift_name("init(precedence:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int32_t)compareToOther:(NCSDKSemanticContextPrecedencePredicate *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)evalParser:(NCSDKRecognizer<id, id> *)parser parserCallStack:(NCSDKRuleContext *)parserCallStack __attribute__((swift_name("eval(parser:parserCallStack:)")));
- (NCSDKSemanticContext * _Nullable)evalPrecedenceParser:(NCSDKRecognizer<id, id> *)parser parserCallStack:(NCSDKRuleContext *)parserCallStack __attribute__((swift_name("evalPrecedence(parser:parserCallStack:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t precedence __attribute__((swift_name("precedence")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SemanticContext.Predicate")))
@interface NCSDKSemanticContextPredicate : NCSDKSemanticContext
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithRuleIndex:(int32_t)ruleIndex predIndex:(int32_t)predIndex isCtxDependent:(BOOL)isCtxDependent __attribute__((swift_name("init(ruleIndex:predIndex:isCtxDependent:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)evalParser:(NCSDKRecognizer<id, id> *)parser parserCallStack:(NCSDKRuleContext *)parserCallStack __attribute__((swift_name("eval(parser:parserCallStack:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isCtxDependent __attribute__((swift_name("isCtxDependent")));
@property (readonly) int32_t predIndex __attribute__((swift_name("predIndex")));
@property (readonly) int32_t ruleIndex __attribute__((swift_name("ruleIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingletonPredictionContext.Companion")))
@interface NCSDKSingletonPredictionContextCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKSingletonPredictionContextCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKSingletonPredictionContext *)createParent:(NCSDKPredictionContext * _Nullable)parent returnState:(int32_t)returnState __attribute__((swift_name("create(parent:returnState:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StarBlockStartState")))
@interface NCSDKStarBlockStartState : NCSDKBlockStartState
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) int32_t stateType __attribute__((swift_name("stateType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StarLoopEntryState")))
@interface NCSDKStarLoopEntryState : NCSDKDecisionState
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL isPrecedenceDecision __attribute__((swift_name("isPrecedenceDecision")));
@property NCSDKStarLoopbackState * _Nullable loopBackState __attribute__((swift_name("loopBackState")));
@property (readonly) int32_t stateType __attribute__((swift_name("stateType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StarLoopbackState")))
@interface NCSDKStarLoopbackState : NCSDKATNState
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NCSDKStarLoopEntryState *loopEntryState __attribute__((swift_name("loopEntryState")));
@property (readonly) int32_t stateType __attribute__((swift_name("stateType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokensStartState")))
@interface NCSDKTokensStartState : NCSDKDecisionState
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) int32_t stateType __attribute__((swift_name("stateType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transition.Companion")))
@interface NCSDKTransitionCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKTransitionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t ACTION __attribute__((swift_name("ACTION")));
@property (readonly) int32_t ATOM __attribute__((swift_name("ATOM")));
@property (readonly) int32_t EPSILON __attribute__((swift_name("EPSILON")));
@property (readonly) int32_t NOT_SET __attribute__((swift_name("NOT_SET")));
@property (readonly) int32_t PRECEDENCE __attribute__((swift_name("PRECEDENCE")));
@property (readonly) int32_t PREDICATE __attribute__((swift_name("PREDICATE")));
@property (readonly) int32_t RANGE __attribute__((swift_name("RANGE")));
@property (readonly) int32_t RULE __attribute__((swift_name("RULE")));
@property (readonly) int32_t SET __attribute__((swift_name("SET")));
@property (readonly) int32_t WILDCARD __attribute__((swift_name("WILDCARD")));
@property (readonly) NSArray<NSString *> *serializationNames __attribute__((swift_name("serializationNames")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WildcardTransition")))
@interface NCSDKWildcardTransition : NCSDKTransition
- (instancetype)initWithTarget:(NCSDKATNState *)target __attribute__((swift_name("init(target:)"))) __attribute__((objc_designated_initializer));
- (BOOL)matchesSymbol:(int32_t)symbol minVocabSymbol:(int32_t)minVocabSymbol maxVocabSymbol:(int32_t)maxVocabSymbol __attribute__((swift_name("matches(symbol:minVocabSymbol:maxVocabSymbol:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t serializationType __attribute__((swift_name("serializationType")));
@end;

__attribute__((swift_name("ParseTreeVisitor")))
@protocol NCSDKParseTreeVisitor
@required
- (id _Nullable)visitTree:(id<NCSDKParseTree>)tree __attribute__((swift_name("visit(tree:)")));
- (id _Nullable)visitChildrenNode:(id<NCSDKRuleNode>)node __attribute__((swift_name("visitChildren(node:)")));
- (id _Nullable)visitErrorNodeNode:(id<NCSDKErrorNode>)node __attribute__((swift_name("visitErrorNode(node:)")));
- (id _Nullable)visitTerminalNode:(id<NCSDKTerminalNode>)node __attribute__((swift_name("visitTerminal(node:)")));
@end;

__attribute__((swift_name("AbstractParseTreeVisitor")))
@interface NCSDKAbstractParseTreeVisitor<T> : NCSDKBase <NCSDKParseTreeVisitor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (T _Nullable)aggregateResultAggregate:(T _Nullable)aggregate nextResult:(T _Nullable)nextResult __attribute__((swift_name("aggregateResult(aggregate:nextResult:)")));
- (T _Nullable)defaultResult __attribute__((swift_name("defaultResult()")));
- (BOOL)shouldVisitNextChildNode:(id<NCSDKRuleNode>)node currentResult:(T _Nullable)currentResult __attribute__((swift_name("shouldVisitNextChild(node:currentResult:)")));
- (T _Nullable)visitTree:(id<NCSDKParseTree>)tree __attribute__((swift_name("visit(tree:)")));
- (T _Nullable)visitChildrenNode:(id<NCSDKRuleNode>)node __attribute__((swift_name("visitChildren(node:)")));
- (T _Nullable)visitErrorNodeNode:(id<NCSDKErrorNode>)node __attribute__((swift_name("visitErrorNode(node:)")));
- (T _Nullable)visitTerminalNode:(id<NCSDKTerminalNode>)node __attribute__((swift_name("visitTerminal(node:)")));
@end;

__attribute__((swift_name("TerminalNode")))
@protocol NCSDKTerminalNode <NCSDKParseTree>
@required
@property (readonly) id<NCSDKToken> _Nullable symbol __attribute__((swift_name("symbol")));
@end;

__attribute__((swift_name("ErrorNode")))
@protocol NCSDKErrorNode <NCSDKTerminalNode>
@required
@end;

__attribute__((swift_name("TerminalNodeImpl")))
@interface NCSDKTerminalNodeImpl : NCSDKBase <NCSDKTerminalNode>
- (instancetype)initWithSymbol:(id<NCSDKToken> _Nullable)symbol __attribute__((swift_name("init(symbol:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)acceptVisitor:(id<NCSDKParseTreeVisitor>)visitor __attribute__((swift_name("accept(visitor:)")));
- (void)assignParentValue:(id<NCSDKParseTree> _Nullable)value __attribute__((swift_name("assignParent(value:)")));
- (id<NCSDKParseTree> _Nullable)getChildI:(int32_t)i __attribute__((swift_name("getChild(i:)")));
- (id<NCSDKParseTree> _Nullable)readParent __attribute__((swift_name("readParent()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)toStringTree __attribute__((swift_name("toStringTree()")));
- (NSString *)toStringTreeParser:(NCSDKParser *)parser __attribute__((swift_name("toStringTree(parser:)")));
@property (readonly) int32_t childCount __attribute__((swift_name("childCount")));
@property (readonly) id<NCSDKToken> _Nullable payload __attribute__((swift_name("payload")));
@property (readonly) NCSDKInterval *sourceInterval __attribute__((swift_name("sourceInterval")));
@property id<NCSDKToken> _Nullable symbol __attribute__((swift_name("symbol")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorNodeImpl")))
@interface NCSDKErrorNodeImpl : NCSDKTerminalNodeImpl <NCSDKErrorNode>
- (instancetype)initWithToken:(id<NCSDKToken>)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSymbol:(id<NCSDKToken> _Nullable)symbol __attribute__((swift_name("init(symbol:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id _Nullable)acceptVisitor:(id<NCSDKParseTreeVisitor>)visitor __attribute__((swift_name("accept(visitor:)")));
@end;

__attribute__((swift_name("ParseTreeListener")))
@protocol NCSDKParseTreeListener
@required
- (void)enterEveryRuleCtx:(NCSDKParserRuleContext *)ctx __attribute__((swift_name("enterEveryRule(ctx:)")));
- (void)exitEveryRuleCtx:(NCSDKParserRuleContext *)ctx __attribute__((swift_name("exitEveryRule(ctx:)")));
- (void)visitErrorNodeNode_:(id<NCSDKErrorNode>)node __attribute__((swift_name("visitErrorNode(node_:)")));
- (void)visitTerminalNode_:(id<NCSDKTerminalNode>)node __attribute__((swift_name("visitTerminal(node_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParseTreeProperty")))
@interface NCSDKParseTreeProperty<V> : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (V _Nullable)getNode:(id<NCSDKParseTree>)node __attribute__((swift_name("get(node:)")));
- (void)putNode:(id<NCSDKParseTree>)node value:(V _Nullable)value __attribute__((swift_name("put(node:value:)")));
- (V _Nullable)removeFromNode:(id<NCSDKParseTree>)node __attribute__((swift_name("removeFrom(node:)")));
@property NCSDKMutableDictionary<id<NCSDKParseTree>, id> *annotations __attribute__((swift_name("annotations")));
@end;

__attribute__((swift_name("ParseTreeWalker")))
@interface NCSDKParseTreeWalker : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) NCSDKParseTreeWalkerCompanion *companion __attribute__((swift_name("companion")));
- (void)enterRuleListener:(id<NCSDKParseTreeListener>)listener r:(id<NCSDKRuleNode>)r __attribute__((swift_name("enterRule(listener:r:)")));
- (void)exitRuleListener:(id<NCSDKParseTreeListener>)listener r:(id<NCSDKRuleNode>)r __attribute__((swift_name("exitRule(listener:r:)")));
- (void)walkListener:(id<NCSDKParseTreeListener>)listener t:(id<NCSDKParseTree>)t __attribute__((swift_name("walk(listener:t:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParseTreeWalker.Companion")))
@interface NCSDKParseTreeWalkerCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKParseTreeWalkerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKParseTreeWalker *DEFAULT __attribute__((swift_name("DEFAULT")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trees")))
@interface NCSDKTrees : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)trees __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKTrees *shared __attribute__((swift_name("shared")));
- (void)_findAllNodesT:(id<NCSDKParseTree>)t index:(int32_t)index findTokens:(BOOL)findTokens nodes:(NSMutableArray<id<NCSDKParseTree>> *)nodes __attribute__((swift_name("_findAllNodes(t:index:findTokens:nodes:)")));
- (NSArray<id<NCSDKParseTree>> *)descendantsT:(id<NCSDKParseTree>)t __attribute__((swift_name("descendants(t:)"))) __attribute__((deprecated("")));
- (NSArray<id<NCSDKParseTree>> *)findAllNodesT:(id<NCSDKParseTree>)t index:(int32_t)index findTokens:(BOOL)findTokens __attribute__((swift_name("findAllNodes(t:index:findTokens:)")));
- (id)findAllRuleNodesT:(id<NCSDKParseTree>)t ruleIndex:(int32_t)ruleIndex __attribute__((swift_name("findAllRuleNodes(t:ruleIndex:)")));
- (id)findAllTokenNodesT:(id<NCSDKParseTree>)t ttype:(int32_t)ttype __attribute__((swift_name("findAllTokenNodes(t:ttype:)")));
- (id<NCSDKTree> _Nullable)findNodeSuchThatT:(id<NCSDKTree> _Nullable)t pred:(id<NCSDKPredicate>)pred __attribute__((swift_name("findNodeSuchThat(t:pred:)")));
- (NSArray<id<NCSDKTree>> *)getAncestorsT:(id<NCSDKTree>)t __attribute__((swift_name("getAncestors(t:)")));
- (NSArray<id<NCSDKTree>> *)getChildrenT:(id<NCSDKTree>)t __attribute__((swift_name("getChildren(t:)")));
- (NSArray<id<NCSDKParseTree>> *)getDescendantsT:(id<NCSDKParseTree>)t __attribute__((swift_name("getDescendants(t:)")));
- (NSString *)getNodeTextT:(id<NCSDKTree>)t recog:(NCSDKParser * _Nullable)recog __attribute__((swift_name("getNodeText(t:recog:)")));
- (NSString *)getNodeTextT:(id<NCSDKTree>)t ruleNames:(NSArray<NSString *> * _Nullable)ruleNames __attribute__((swift_name("getNodeText(t:ruleNames:)")));
- (NCSDKParserRuleContext * _Nullable)getRootOfSubtreeEnclosingRegionT:(id<NCSDKParseTree>)t startTokenIndex:(int32_t)startTokenIndex stopTokenIndex:(int32_t)stopTokenIndex __attribute__((swift_name("getRootOfSubtreeEnclosingRegion(t:startTokenIndex:stopTokenIndex:)")));
- (BOOL)isAncestorOfT:(id<NCSDKTree> _Nullable)t u:(id<NCSDKTree> _Nullable)u __attribute__((swift_name("isAncestorOf(t:u:)")));
- (void)stripChildrenOutOfRangeT:(NCSDKParserRuleContext * _Nullable)t root:(NCSDKParserRuleContext *)root startIndex:(int32_t)startIndex stopIndex:(int32_t)stopIndex __attribute__((swift_name("stripChildrenOutOfRange(t:root:startIndex:stopIndex:)")));
- (NSString *)toStringTreeT:(id<NCSDKTree>)t recog:(NCSDKParser * _Nullable)recog __attribute__((swift_name("toStringTree(t:recog:)")));
- (NSString *)toStringTreeT:(id<NCSDKTree>)t ruleNames:(NSArray<NSString *> * _Nullable)ruleNames __attribute__((swift_name("toStringTree(t:ruleNames:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParseTreeMatch")))
@interface NCSDKParseTreeMatch : NCSDKBase
- (instancetype)initWithTree:(id<NCSDKParseTree> _Nullable)tree pattern:(NCSDKParseTreePattern * _Nullable)pattern labels:(NCSDKMutableDictionary<NSString *, NSMutableArray<id<NCSDKParseTree>> *> * _Nullable)labels mismatchedNode:(id<NCSDKParseTree> _Nullable)mismatchedNode __attribute__((swift_name("init(tree:pattern:labels:mismatchedNode:)"))) __attribute__((objc_designated_initializer));
- (id<NCSDKParseTree> _Nullable)getLabel:(NSString *)label __attribute__((swift_name("get(label:)")));
- (NSArray<id<NCSDKParseTree>> *)getAllLabel:(NSString *)label __attribute__((swift_name("getAll(label:)")));
- (BOOL)succeeded __attribute__((swift_name("succeeded()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKMutableDictionary<NSString *, NSMutableArray<id<NCSDKParseTree>> *> * _Nullable labels __attribute__((swift_name("labels")));
@property (readonly) id<NCSDKParseTree> _Nullable mismatchedNode __attribute__((swift_name("mismatchedNode")));
@property (readonly) NCSDKParseTreePattern * _Nullable pattern __attribute__((swift_name("pattern")));
@property (readonly) id<NCSDKParseTree> _Nullable tree __attribute__((swift_name("tree")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParseTreePattern")))
@interface NCSDKParseTreePattern : NCSDKBase
- (instancetype)initWithMatcher:(NCSDKParseTreePatternMatcher *)matcher pattern:(NSString *)pattern patternRuleIndex:(int32_t)patternRuleIndex patternTree:(id<NCSDKParseTree>)patternTree __attribute__((swift_name("init(matcher:pattern:patternRuleIndex:patternTree:)"))) __attribute__((objc_designated_initializer));
- (NSArray<NCSDKParseTreeMatch *> *)findAllTree:(id<NCSDKParseTree>)tree xpath:(NSString *)xpath __attribute__((swift_name("findAll(tree:xpath:)")));
- (NCSDKParseTreeMatch *)matchTree:(id<NCSDKParseTree>)tree __attribute__((swift_name("match(tree:)")));
- (BOOL)matchesTree:(id<NCSDKParseTree>)tree __attribute__((swift_name("matches(tree:)")));
@property (readonly) NCSDKParseTreePatternMatcher *matcher __attribute__((swift_name("matcher")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@property (readonly) int32_t patternRuleIndex __attribute__((swift_name("patternRuleIndex")));
@property (readonly) id<NCSDKParseTree> patternTree __attribute__((swift_name("patternTree")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParseTreePatternMatcher")))
@interface NCSDKParseTreePatternMatcher : NCSDKBase
- (instancetype)initWithLexer:(NCSDKLexer *)lexer parser:(NCSDKParser *)parser __attribute__((swift_name("init(lexer:parser:)"))) __attribute__((objc_designated_initializer));
- (NCSDKParseTreePattern *)compilePattern:(NSString *)pattern patternRuleIndex:(int32_t)patternRuleIndex __attribute__((swift_name("compile(pattern:patternRuleIndex:)")));
- (NCSDKRuleTagToken * _Nullable)getRuleTagTokenT:(id<NCSDKParseTree>)t __attribute__((swift_name("getRuleTagToken(t:)")));
- (NCSDKParseTreeMatch *)matchTree:(id<NCSDKParseTree>)tree pattern:(NCSDKParseTreePattern *)pattern __attribute__((swift_name("match(tree:pattern:)")));
- (NCSDKParseTreeMatch *)matchTree:(id<NCSDKParseTree>)tree pattern:(NSString *)pattern patternRuleIndex:(int32_t)patternRuleIndex __attribute__((swift_name("match(tree:pattern:patternRuleIndex:)")));
- (id<NCSDKParseTree> _Nullable)matchImplTree:(id<NCSDKParseTree> _Nullable)tree patternTree:(id<NCSDKParseTree> _Nullable)patternTree labels:(NCSDKMutableDictionary<NSString *, NSMutableArray<id<NCSDKParseTree>> *> *)labels __attribute__((swift_name("matchImpl(tree:patternTree:labels:)")));
- (BOOL)matchesTree:(id<NCSDKParseTree>)tree pattern:(NCSDKParseTreePattern *)pattern __attribute__((swift_name("matches(tree:pattern:)")));
- (BOOL)matchesTree:(id<NCSDKParseTree>)tree pattern:(NSString *)pattern patternRuleIndex:(int32_t)patternRuleIndex __attribute__((swift_name("matches(tree:pattern:patternRuleIndex:)")));
- (void)setDelimitersStart:(NSString * _Nullable)start stop:(NSString * _Nullable)stop escapeLeft:(NSString *)escapeLeft __attribute__((swift_name("setDelimiters(start:stop:escapeLeft:)")));
- (NSArray<id<NCSDKToken>> *)tokenizePattern:(NSString *)pattern __attribute__((swift_name("tokenize(pattern:)")));
@property NSString *escape __attribute__((swift_name("escape")));
@property (readonly) NCSDKLexer *lexer __attribute__((swift_name("lexer")));
@property (readonly) NCSDKParser *parser __attribute__((swift_name("parser")));
@property NSString *start __attribute__((swift_name("start")));
@property NSString *stop __attribute__((swift_name("stop")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuleTagToken")))
@interface NCSDKRuleTagToken : NCSDKBase <NCSDKToken>
- (instancetype)initWithRuleName:(NSString * _Nullable)ruleName type:(int32_t)type label:(NSString * _Nullable)label __attribute__((swift_name("init(ruleName:type:label:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t channel __attribute__((swift_name("channel")));
@property (readonly) int32_t charPositionInLine __attribute__((swift_name("charPositionInLine")));
@property (readonly) id<NCSDKCharStream> _Nullable inputStream __attribute__((swift_name("inputStream")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) int32_t line __attribute__((swift_name("line")));
@property (readonly) NSString * _Nullable ruleName __attribute__((swift_name("ruleName")));
@property (readonly) int32_t startIndex __attribute__((swift_name("startIndex")));
@property (readonly) int32_t stopIndex __attribute__((swift_name("stopIndex")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) int32_t tokenIndex __attribute__((swift_name("tokenIndex")));
@property (readonly) id<NCSDKTokenSource> _Nullable tokenSource __attribute__((swift_name("tokenSource")));
@property (readonly) int32_t type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenTagToken")))
@interface NCSDKTokenTagToken : NCSDKCommonToken
- (instancetype)initWithTokenName:(NSString *)tokenName type:(int32_t)type label:(NSString * _Nullable)label __attribute__((swift_name("init(tokenName:type:label:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(int32_t)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithSource:(NCSDKKotlinPair<id<NCSDKTokenSource>, id<NCSDKCharStream>> *)source type:(int32_t)type channel:(int32_t)channel start:(int32_t)start stop:(int32_t)stop __attribute__((swift_name("init(source:type:channel:start:stop:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithType:(int32_t)type text:(NSString *)text __attribute__((swift_name("init(type:text:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithOldToken:(id<NCSDKToken>)oldToken __attribute__((swift_name("init(oldToken:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString *tokenName __attribute__((swift_name("tokenName")));
@end;

__attribute__((swift_name("Closeable_")))
@protocol NCSDKCloseable_
@required

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Connection")))
@protocol NCSDKConnection <NCSDKCloseable_>
@required
- (void)beginTransaction __attribute__((swift_name("beginTransaction()")));
- (void)commitTransaction __attribute__((swift_name("commitTransaction()")));
- (BOOL)isOpen __attribute__((swift_name("isOpen()")));
- (id<NCSDKStatement>)prepareStatementSql:(NSString *)sql __attribute__((swift_name("prepareStatement(sql:)")));
- (void)rollbackTransaction __attribute__((swift_name("rollbackTransaction()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionImpl")))
@interface NCSDKConnectionImpl : NCSDKBase <NCSDKConnection>
- (instancetype)initWithConnection:(id<NCSDKSqliter_driverDatabaseConnection>)connection __attribute__((swift_name("init(connection:)"))) __attribute__((objc_designated_initializer));
- (void)beginTransaction __attribute__((swift_name("beginTransaction()")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
- (void)commitTransaction __attribute__((swift_name("commitTransaction()")));
- (BOOL)isOpen __attribute__((swift_name("isOpen()")));
- (id<NCSDKStatement>)prepareStatementSql:(NSString *)sql __attribute__((swift_name("prepareStatement(sql:)")));
- (void)rollbackTransaction __attribute__((swift_name("rollbackTransaction()")));
@end;

__attribute__((swift_name("Cursor")))
@protocol NCSDKCursor <NCSDKCloseable_>
@required
- (NCSDKKotlinByteArray *)getByteArrayOrdinal:(int32_t)ordinal __attribute__((swift_name("getByteArray(ordinal:)")));
- (NCSDKKotlinByteArray *)getByteArrayColumnName:(NSString *)columnName __attribute__((swift_name("getByteArray(columnName:)")));
- (int32_t)getColumnCount __attribute__((swift_name("getColumnCount()")));
- (NSString *)getColumnNameOrdinal:(int32_t)ordinal __attribute__((swift_name("getColumnName(ordinal:)")));
- (NSString *)getDataTypeOrdinal:(int32_t)ordinal __attribute__((swift_name("getDataType(ordinal:)")));
- (NSString *)getDataTypeColumnName:(NSString *)columnName __attribute__((swift_name("getDataType(columnName:)")));
- (double)getDoubleOrdinal:(int32_t)ordinal __attribute__((swift_name("getDouble(ordinal:)")));
- (double)getDoubleColumnName:(NSString *)columnName __attribute__((swift_name("getDouble(columnName:)")));
- (int64_t)getLongOrdinal:(int32_t)ordinal __attribute__((swift_name("getLong(ordinal:)")));
- (int64_t)getLongColumnName:(NSString *)columnName __attribute__((swift_name("getLong(columnName:)")));
- (int32_t)getOrdinalColumnName:(NSString *)columnName __attribute__((swift_name("getOrdinal(columnName:)")));
- (NSString *)getStringOrdinal:(int32_t)ordinal __attribute__((swift_name("getString(ordinal:)")));
- (NSString *)getStringColumnName:(NSString *)columnName __attribute__((swift_name("getString(columnName:)")));
- (BOOL)isNullOrdinal:(int32_t)ordinal __attribute__((swift_name("isNull(ordinal:)")));
- (BOOL)isNullColumnName:(NSString *)columnName __attribute__((swift_name("isNull(columnName:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CursorImpl")))
@interface NCSDKCursorImpl : NCSDKBase <NCSDKCursor>
- (instancetype)initWithCursor:(id<NCSDKSqliter_driverCursor>)cursor __attribute__((swift_name("init(cursor:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
- (NCSDKKotlinByteArray *)getByteArrayOrdinal:(int32_t)ordinal __attribute__((swift_name("getByteArray(ordinal:)")));
- (NCSDKKotlinByteArray *)getByteArrayColumnName:(NSString *)columnName __attribute__((swift_name("getByteArray(columnName:)")));
- (int32_t)getColumnCount __attribute__((swift_name("getColumnCount()")));
- (NSString *)getColumnNameOrdinal:(int32_t)ordinal __attribute__((swift_name("getColumnName(ordinal:)")));
- (NSString *)getDataTypeOrdinal:(int32_t)ordinal __attribute__((swift_name("getDataType(ordinal:)")));
- (NSString *)getDataTypeColumnName:(NSString *)columnName __attribute__((swift_name("getDataType(columnName:)")));
- (double)getDoubleOrdinal:(int32_t)ordinal __attribute__((swift_name("getDouble(ordinal:)")));
- (double)getDoubleColumnName:(NSString *)columnName __attribute__((swift_name("getDouble(columnName:)")));
- (int64_t)getLongOrdinal:(int32_t)ordinal __attribute__((swift_name("getLong(ordinal:)")));
- (int64_t)getLongColumnName:(NSString *)columnName __attribute__((swift_name("getLong(columnName:)")));
- (int32_t)getOrdinalColumnName:(NSString *)columnName __attribute__((swift_name("getOrdinal(columnName:)")));
- (NSString *)getStringOrdinal:(int32_t)ordinal __attribute__((swift_name("getString(ordinal:)")));
- (NSString *)getStringColumnName:(NSString *)columnName __attribute__((swift_name("getString(columnName:)")));
- (BOOL)isNullOrdinal:(int32_t)ordinal __attribute__((swift_name("isNull(ordinal:)")));
- (BOOL)isNullColumnName:(NSString *)columnName __attribute__((swift_name("isNull(columnName:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DBFieldTypes")))
@interface NCSDKDBFieldTypes : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dBFieldTypes __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKDBFieldTypes *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *BLOB __attribute__((swift_name("BLOB")));
@property (readonly) NSString *DBNULL __attribute__((swift_name("DBNULL")));
@property (readonly) NSString *INTEGER __attribute__((swift_name("INTEGER")));
@property (readonly) NSString *REAL __attribute__((swift_name("REAL")));
@property (readonly) NSString *TEXT __attribute__((swift_name("TEXT")));
@end;

__attribute__((swift_name("DatabaseDriver")))
@protocol NCSDKDatabaseDriver
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)createDatabaseName:(NSString *)databaseName completionHandler:(void (^)(NCSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(databaseName:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteDatabaseName:(NSString *)databaseName completionHandler:(void (^)(NCSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(databaseName:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConnectionDatabaseName:(NSString *)databaseName completionHandler:(void (^)(id<NCSDKConnection> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getConnection(databaseName:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverImpl")))
@interface NCSDKDatabaseDriverImpl : NCSDKBase <NCSDKDatabaseDriver>
- (instancetype)initWithConfigFactory:(id<NCSDKSqliterDatabaseConfigurationFactory>)configFactory __attribute__((swift_name("init(configFactory:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)createDatabaseName:(NSString *)databaseName completionHandler:(void (^)(NCSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("create(databaseName:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteDatabaseName:(NSString *)databaseName completionHandler:(void (^)(NCSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(databaseName:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConnectionDatabaseName:(NSString *)databaseName completionHandler:(void (^)(id<NCSDKConnection> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getConnection(databaseName:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseName")))
@interface NCSDKDatabaseName : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)databaseName __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKDatabaseName *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("SqliterDatabaseConfigurationFactory")))
@protocol NCSDKSqliterDatabaseConfigurationFactory
@required
- (NCSDKSqliter_driverDatabaseConfiguration *)createDatabaseConfigurationDatabaseName:(NSString *)databaseName __attribute__((swift_name("createDatabaseConfiguration(databaseName:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SqliterDatabaseConfigurationFactoryImpl")))
@interface NCSDKSqliterDatabaseConfigurationFactoryImpl : NCSDKBase <NCSDKSqliterDatabaseConfigurationFactory>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NCSDKSqliter_driverDatabaseConfiguration *)createDatabaseConfigurationDatabaseName:(NSString *)databaseName __attribute__((swift_name("createDatabaseConfiguration(databaseName:)")));
@end;

__attribute__((swift_name("Statement")))
@protocol NCSDKStatement <NCSDKCloseable_>
@required
- (void)bindBytesIndex:(int32_t)index value:(NCSDKKotlinByteArray * _Nullable)value __attribute__((swift_name("bindBytes(index:value:)")));
- (void)bindBytesName:(NSString *)name value:(NCSDKKotlinByteArray * _Nullable)value __attribute__((swift_name("bindBytes(name:value:)")));
- (void)bindDoubleIndex:(int32_t)index value:(NCSDKDouble * _Nullable)value __attribute__((swift_name("bindDouble(index:value:)")));
- (void)bindDoubleName:(NSString *)name value:(NCSDKDouble * _Nullable)value __attribute__((swift_name("bindDouble(name:value:)")));
- (void)bindLongIndex:(int32_t)index value:(NCSDKLong * _Nullable)value __attribute__((swift_name("bindLong(index:value:)")));
- (void)bindLongName:(NSString *)name value:(NCSDKLong * _Nullable)value __attribute__((swift_name("bindLong(name:value:)")));
- (void)bindNullIndex:(int32_t)index __attribute__((swift_name("bindNull(index:)")));
- (void)bindNullName:(NSString *)name __attribute__((swift_name("bindNull(name:)")));
- (void)bindStringIndex:(int32_t)index value:(NSString * _Nullable)value __attribute__((swift_name("bindString(index:value:)")));
- (void)bindStringName:(NSString *)name value:(NSString * _Nullable)value __attribute__((swift_name("bindString(name:value:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("execute(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeQueryWithCompletionHandler:(void (^)(id<NCSDKCursor> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeQuery(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatementImpl")))
@interface NCSDKStatementImpl : NCSDKBase <NCSDKStatement>
- (instancetype)initWithStatement:(id<NCSDKSqliter_driverStatement>)statement __attribute__((swift_name("init(statement:)"))) __attribute__((objc_designated_initializer));
- (void)bindBytesIndex:(int32_t)index value:(NCSDKKotlinByteArray * _Nullable)value __attribute__((swift_name("bindBytes(index:value:)")));
- (void)bindBytesName:(NSString *)name value:(NCSDKKotlinByteArray * _Nullable)value __attribute__((swift_name("bindBytes(name:value:)")));
- (void)bindDoubleIndex:(int32_t)index value:(NCSDKDouble * _Nullable)value __attribute__((swift_name("bindDouble(index:value:)")));
- (void)bindDoubleName:(NSString *)name value:(NCSDKDouble * _Nullable)value __attribute__((swift_name("bindDouble(name:value:)")));
- (void)bindLongIndex:(int32_t)index value:(NCSDKLong * _Nullable)value __attribute__((swift_name("bindLong(index:value:)")));
- (void)bindLongName:(NSString *)name value:(NCSDKLong * _Nullable)value __attribute__((swift_name("bindLong(name:value:)")));
- (void)bindNullIndex:(int32_t)index __attribute__((swift_name("bindNull(index:)")));
- (void)bindNullName:(NSString *)name __attribute__((swift_name("bindNull(name:)")));
- (void)bindStringIndex:(int32_t)index value:(NSString * _Nullable)value __attribute__((swift_name("bindString(index:value:)")));
- (void)bindStringName:(NSString *)name value:(NSString * _Nullable)value __attribute__((swift_name("bindString(name:value:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("execute(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeQueryWithCompletionHandler:(void (^)(id<NCSDKCursor> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeQuery(completionHandler:)")));
@end;

__attribute__((swift_name("HttpClientProxy")))
@protocol NCSDKHttpClientProxy
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeRequest:(id<NCSDKHttpRequest>)request typeInfo:(NCSDKKtor_utilsTypeInfo *)typeInfo completionHandler:(void (^)(NCSDKHttpResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(request:typeInfo:completionHandler:)")));
@end;

__attribute__((swift_name("HttpRequest")))
@protocol NCSDKHttpRequest
@required
@property (readonly) id _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<id, id> * _Nullable headers __attribute__((swift_name("headers")));
@property (readonly) NCSDKMethod *method __attribute__((swift_name("method")));
@property (readonly) NSDictionary<id, id> * _Nullable params __attribute__((swift_name("params")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpResponse")))
@interface NCSDKHttpResponse<T> : NCSDKBase
- (instancetype)initWithStatus:(NCSDKLong * _Nullable)status headers:(NSDictionary<id, id> * _Nullable)headers body:(T _Nullable)body __attribute__((swift_name("init(status:headers:body:)"))) __attribute__((objc_designated_initializer));
- (NCSDKLong * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (T _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKHttpResponse<T> *)doCopyStatus:(NCSDKLong * _Nullable)status headers:(NSDictionary<id, id> * _Nullable)headers body:(T _Nullable)body __attribute__((swift_name("doCopy(status:headers:body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<id, id> * _Nullable headers __attribute__((swift_name("headers")));
@property (readonly) NCSDKLong * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorHttpClient")))
@interface NCSDKKtorHttpClient : NCSDKBase <NCSDKHttpClientProxy>
- (instancetype)initWithClient:(NCSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKKtorHttpClientCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeRequest:(id<NCSDKHttpRequest>)request typeInfo:(NCSDKKtor_utilsTypeInfo *)typeInfo completionHandler:(void (^)(NCSDKHttpResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(request:typeInfo:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorHttpClient.Companion")))
@interface NCSDKKtorHttpClientCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtorHttpClientCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKKtor_client_coreHttpClient *)getHttpClientUseLogger:(BOOL)useLogger __attribute__((swift_name("getHttpClient(useLogger:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Method")))
@interface NCSDKMethod : NCSDKKotlinEnum<NCSDKMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKMethod *get __attribute__((swift_name("get")));
@property (class, readonly) NCSDKMethod *post __attribute__((swift_name("post")));
+ (NCSDKKotlinArray<NCSDKMethod *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("DynamicDatabaseAction")))
@interface NCSDKDynamicDatabaseAction : NCSDKBase <NCSDKAction>
- (instancetype)initWithDriver:(id<NCSDKDatabaseDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context connection:(id<NCSDKConnection>)connection completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:connection:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseExecuteAction")))
@interface NCSDKDatabaseExecuteAction : NCSDKDynamicDatabaseAction
- (instancetype)initWithDriver:(id<NCSDKDatabaseDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context connection:(id<NCSDKConnection>)connection completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:connection:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseExecuteQueryAction")))
@interface NCSDKDatabaseExecuteQueryAction : NCSDKDynamicDatabaseAction
- (instancetype)initWithDriver:(id<NCSDKDatabaseDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context connection:(id<NCSDKConnection>)connection completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:connection:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenerateIdentifierAction")))
@interface NCSDKGenerateIdentifierAction : NCSDKBase <NCSDKAction>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDateInstantAction")))
@interface NCSDKGetDateInstantAction : NCSDKBase <NCSDKAction>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(NCSDKKotlinx_datetimeInstant * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDateStringAction")))
@interface NCSDKGetDateStringAction : NCSDKBase <NCSDKAction>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTimeStampAction")))
@interface NCSDKGetTimeStampAction : NCSDKBase <NCSDKAction>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(NCSDKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonDecodeAction")))
@interface NCSDKJsonDecodeAction : NCSDKBase <NCSDKAction>
- (instancetype)initWithJson:(id<NCSDKJsonSerDe>)json __attribute__((swift_name("init(json:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonEncodeAction")))
@interface NCSDKJsonEncodeAction : NCSDKBase <NCSDKAction>
- (instancetype)initWithJson:(id<NCSDKJsonSerDe>)json __attribute__((swift_name("init(json:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkAction")))
@interface NCSDKNetworkAction : NCSDKBase <NCSDKAction>
- (instancetype)initWithHttpClient:(id<NCSDKHttpClientProxy>)httpClient domainWhiteList:(NSSet<NSString *> *)domainWhiteList __attribute__((swift_name("init(httpClient:domainWhiteList:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id<NCSDKWorkflowContext>)context completionHandler:(void (^)(NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkAction.NetworkActionInput")))
@interface NCSDKNetworkActionNetworkActionInput : NCSDKBase <NCSDKHttpRequest>
- (instancetype)initWithMethod:(NCSDKMethod *)method url:(NSString *)url params:(NSDictionary<id, id> * _Nullable)params headers:(NSDictionary<id, id> * _Nullable)headers body:(id _Nullable)body __attribute__((swift_name("init(method:url:params:headers:body:)"))) __attribute__((objc_designated_initializer));
- (NCSDKMethod *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKNetworkActionNetworkActionInput *)doCopyMethod:(NCSDKMethod *)method url:(NSString *)url params:(NSDictionary<id, id> * _Nullable)params headers:(NSDictionary<id, id> * _Nullable)headers body:(id _Nullable)body __attribute__((swift_name("doCopy(method:url:params:headers:body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<id, id> * _Nullable headers __attribute__((swift_name("headers")));
@property (readonly) NCSDKMethod *method __attribute__((swift_name("method")));
@property (readonly) NSDictionary<id, id> * _Nullable params __attribute__((swift_name("params")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mode")))
@interface NCSDKMode : NCSDKKotlinEnum<NCSDKMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKMode *androidIp __attribute__((swift_name("androidIp")));
@property (class, readonly) NCSDKMode *localhost __attribute__((swift_name("localhost")));
@property (class, readonly) NCSDKMode *production __attribute__((swift_name("production")));
@property (class, readonly) NCSDKMode *staging __attribute__((swift_name("staging")));
+ (NCSDKKotlinArray<NCSDKMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NativeCompute")))
@interface NCSDKNativeCompute : NCSDKBase
- (instancetype)initWithRegistry:(id<NCSDKMutableWorkflowRegistry>)registry driver:(id<NCSDKDatabaseDriver>)driver json:(id<NCSDKJsonSerDe>)json logger:(id<NCSDKWorkflowLogger>)logger preludeRegistry:(id<NCSDKPreludeRegistry>)preludeRegistry parser:(id<NCSDKParser>)parser domainWhiteList:(NSSet<NSString *> *)domainWhiteList httpClient:(id<NCSDKHttpClientProxy>)httpClient mode:(NCSDKMode *)mode branchKey:(NSString *)branchKey __attribute__((swift_name("init(registry:driver:json:logger:preludeRegistry:parser:domainWhiteList:httpClient:mode:branchKey:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteAndRecreateDbsWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAndRecreateDbs(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentSchemaWithCompletionHandler:(void (^)(NCSDKSchemaUpdateRequest * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentSchema(completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDebugHashWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getDebugHash(completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDeviceSchemaStateWithCompletionHandler:(void (^)(NCSDKWorkflowResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDeviceSchemaState(completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWorkflowWorkflowName:(NSString *)workflowName inputs:(NSDictionary<NSString *, id> *)inputs completionHandler:(void (^)(NCSDKWorkflowResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invokeWorkflow(workflowName:inputs:completionHandler:)")));
- (void)launchCallback:(void (^ _Nullable)(NCSDKKotlinThrowable * _Nullable))callback __attribute__((swift_name("launch(callback:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)markEventAsCompletedEvent:(NSDictionary<NSString *, id> *)event completionHandler:(void (^)(NCSDKWorkflowResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("markEventAsCompleted(event:completionHandler:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)registerEventEvent:(NSDictionary<NSString *, id> *)event completionHandler:(void (^)(NCSDKWorkflowResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("registerEvent(event:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedNativeCompute")))
@interface NCSDKSharedNativeCompute : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NCSDKNativeCompute *)getInstanceDomainWhiteList:(NSSet<NSString *> * _Nullable)domainWhiteList mode:(NCSDKMode * _Nullable)mode branchKey:(NSString *)branchKey __attribute__((swift_name("getInstance(domainWhiteList:mode:branchKey:)")));
@end;

__attribute__((swift_name("BranchService")))
@protocol NCSDKBranchService
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeRequestRequest:(id<NCSDKBaseHttpRequestBody> _Nullable)request completionHandler:(void (^)(id<NCSDKBaseHttpResponseBody> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeRequest(request:completionHandler:)")));
@end;

__attribute__((swift_name("BaseSchemaUpdateService")))
@protocol NCSDKBaseSchemaUpdateService <NCSDKBranchService>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SchemaRequestInput")))
@interface NCSDKSchemaRequestInput : NCSDKBase <NCSDKHttpRequest>
- (instancetype)initWithMethod:(NCSDKMethod *)method url:(NSString *)url params:(NSDictionary<id, id> * _Nullable)params headers:(NSDictionary<id, id> * _Nullable)headers body:(id _Nullable)body __attribute__((swift_name("init(method:url:params:headers:body:)"))) __attribute__((objc_designated_initializer));
- (NCSDKMethod *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<id, id> * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSchemaRequestInput *)doCopyMethod:(NCSDKMethod *)method url:(NSString *)url params:(NSDictionary<id, id> * _Nullable)params headers:(NSDictionary<id, id> * _Nullable)headers body:(id _Nullable)body __attribute__((swift_name("doCopy(method:url:params:headers:body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<id, id> * _Nullable headers __attribute__((swift_name("headers")));
@property (readonly) NCSDKMethod *method __attribute__((swift_name("method")));
@property (readonly) NSDictionary<id, id> * _Nullable params __attribute__((swift_name("params")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionType")))
@interface NCSDKActionType : NCSDKKotlinEnum<NCSDKActionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKActionTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NCSDKActionType *save __attribute__((swift_name("save")));
@property (class, readonly) NCSDKActionType *delete_ __attribute__((swift_name("delete_")));
+ (NCSDKKotlinArray<NCSDKActionType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionType.Companion")))
@interface NCSDKActionTypeCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKActionTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("BaseHttpRequestBody")))
@protocol NCSDKBaseHttpRequestBody
@required
@end;

__attribute__((swift_name("BaseHttpResponseBody")))
@protocol NCSDKBaseHttpResponseBody
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigSetAction")))
@interface NCSDKConfigSetAction : NCSDKBase
- (instancetype)initWithVersion:(int64_t)version urls:(NSDictionary<NSString *, NCSDKUrlAction *> *)urls __attribute__((swift_name("init(version:urls:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKConfigSetActionCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, NCSDKUrlAction *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKConfigSetAction *)doCopyVersion:(int64_t)version urls:(NSDictionary<NSString *, NCSDKUrlAction *> *)urls __attribute__((swift_name("doCopy(version:urls:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NCSDKUrlAction *> *urls __attribute__((swift_name("urls")));
@property (readonly) int64_t version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigSetAction.Companion")))
@interface NCSDKConfigSetActionCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKConfigSetActionCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseAction")))
@interface NCSDKDatabaseAction : NCSDKBase
- (instancetype)initWithAction:(NCSDKActionType *)action version:(NCSDKLong * _Nullable)version statements:(NSArray<NCSDKStatement *> * _Nullable)statements __attribute__((swift_name("init(action:version:statements:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKDatabaseActionCompanion *companion __attribute__((swift_name("companion")));
- (NCSDKActionType *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKLong * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NCSDKStatement *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKDatabaseAction *)doCopyAction:(NCSDKActionType *)action version:(NCSDKLong * _Nullable)version statements:(NSArray<NCSDKStatement *> * _Nullable)statements __attribute__((swift_name("doCopy(action:version:statements:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKActionType *action __attribute__((swift_name("action")));
@property (readonly) NSArray<NCSDKStatement *> * _Nullable statements __attribute__((swift_name("statements")));
@property (readonly) NCSDKLong * _Nullable version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseAction.Companion")))
@interface NCSDKDatabaseActionCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKDatabaseActionCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseInfo")))
@interface NCSDKDatabaseInfo : NCSDKBase
- (instancetype)initWithVersion:(int64_t)version __attribute__((swift_name("init(version:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKDatabaseInfoCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKDatabaseInfo *)doCopyVersion:(int64_t)version __attribute__((swift_name("doCopy(version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseInfo.Companion")))
@interface NCSDKDatabaseInfoCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKDatabaseInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefinitionAction")))
@interface NCSDKDefinitionAction : NCSDKBase
- (instancetype)initWithAction:(NCSDKActionType *)action definition:(NSString * _Nullable)definition __attribute__((swift_name("init(action:definition:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKDefinitionActionCompanion *companion __attribute__((swift_name("companion")));
- (NCSDKActionType *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKDefinitionAction *)doCopyAction:(NCSDKActionType *)action definition:(NSString * _Nullable)definition __attribute__((swift_name("doCopy(action:definition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKActionType *action __attribute__((swift_name("action")));
@property (readonly) NSString * _Nullable definition __attribute__((swift_name("definition")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefinitionAction.Companion")))
@interface NCSDKDefinitionActionCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKDefinitionActionCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterfaceAction")))
@interface NCSDKInterfaceAction : NCSDKBase
- (instancetype)initWithAction:(NCSDKActionType *)action workflow:(NSString * _Nullable)workflow __attribute__((swift_name("init(action:workflow:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKInterfaceActionCompanion *companion __attribute__((swift_name("companion")));
- (NCSDKActionType *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKInterfaceAction *)doCopyAction:(NCSDKActionType *)action workflow:(NSString * _Nullable)workflow __attribute__((swift_name("doCopy(action:workflow:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKActionType *action __attribute__((swift_name("action")));
@property (readonly) NSString * _Nullable workflow __attribute__((swift_name("workflow")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterfaceAction.Companion")))
@interface NCSDKInterfaceActionCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKInterfaceActionCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Migrations")))
@interface NCSDKMigrations : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)migrations __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKMigrations *shared __attribute__((swift_name("shared")));
- (NCSDKSchemaUpdateResponse *)getSchemaUpdateResponseSchemaUpdateRequest:(NCSDKSchemaUpdateRequest *)schemaUpdateRequest __attribute__((swift_name("getSchemaUpdateResponse(schemaUpdateRequest:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SchemaUpdateRequest")))
@interface NCSDKSchemaUpdateRequest : NCSDKBase <NCSDKBaseHttpRequestBody>
- (instancetype)initWithKey:(NSString *)key databases:(NSDictionary<NSString *, NCSDKDatabaseInfo *> *)databases versionedSets:(NCSDKVersionedSetInfo *)versionedSets __attribute__((swift_name("init(key:databases:versionedSets:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKSchemaUpdateRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, NCSDKDatabaseInfo *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKVersionedSetInfo *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSchemaUpdateRequest *)doCopyKey:(NSString *)key databases:(NSDictionary<NSString *, NCSDKDatabaseInfo *> *)databases versionedSets:(NCSDKVersionedSetInfo *)versionedSets __attribute__((swift_name("doCopy(key:databases:versionedSets:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NCSDKDatabaseInfo *> *databases __attribute__((swift_name("databases")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NCSDKVersionedSetInfo *versionedSets __attribute__((swift_name("versionedSets")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SchemaUpdateRequest.Companion")))
@interface NCSDKSchemaUpdateRequestCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKSchemaUpdateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SchemaUpdateResponse")))
@interface NCSDKSchemaUpdateResponse : NCSDKBase <NCSDKBaseHttpResponseBody>
- (instancetype)initWithDatabases:(NSDictionary<NSString *, NCSDKDatabaseAction *> * _Nullable)databases workflows:(NCSDKWorkflowSetAction * _Nullable)workflows configs:(NCSDKConfigSetAction * _Nullable)configs settings:(NCSDKSettings * _Nullable)settings __attribute__((swift_name("init(databases:workflows:configs:settings:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKSchemaUpdateResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, NCSDKDatabaseAction *> * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKWorkflowSetAction * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKConfigSetAction * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSettings * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSchemaUpdateResponse *)doCopyDatabases:(NSDictionary<NSString *, NCSDKDatabaseAction *> * _Nullable)databases workflows:(NCSDKWorkflowSetAction * _Nullable)workflows configs:(NCSDKConfigSetAction * _Nullable)configs settings:(NCSDKSettings * _Nullable)settings __attribute__((swift_name("doCopy(databases:workflows:configs:settings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKConfigSetAction * _Nullable configs __attribute__((swift_name("configs")));
@property (readonly) NSDictionary<NSString *, NCSDKDatabaseAction *> * _Nullable databases __attribute__((swift_name("databases")));
@property (readonly) NCSDKSettings * _Nullable settings __attribute__((swift_name("settings")));
@property (readonly) NCSDKWorkflowSetAction * _Nullable workflows __attribute__((swift_name("workflows")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SchemaUpdateResponse.Companion")))
@interface NCSDKSchemaUpdateResponseCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKSchemaUpdateResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Settings")))
@interface NCSDKSettings : NCSDKBase
- (instancetype)initWithVersion:(int64_t)version syncSchemaTtlSeconds:(int64_t)syncSchemaTtlSeconds __attribute__((swift_name("init(version:syncSchemaTtlSeconds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKSettingsCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSettings *)doCopyVersion:(int64_t)version syncSchemaTtlSeconds:(int64_t)syncSchemaTtlSeconds __attribute__((swift_name("doCopy(version:syncSchemaTtlSeconds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t syncSchemaTtlSeconds __attribute__((swift_name("syncSchemaTtlSeconds")));
@property (readonly) int64_t version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Settings.Companion")))
@interface NCSDKSettingsCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKSettingsCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Statement_")))
@interface NCSDKStatement : NCSDKBase
- (instancetype)initWithSql:(NSString *)sql values:(NSArray<NSArray<NSString *> *> * _Nullable)values __attribute__((swift_name("init(sql:values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKStatementCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<NSArray<NSString *> *> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKStatement *)doCopySql:(NSString *)sql values:(NSArray<NSArray<NSString *> *> * _Nullable)values __attribute__((swift_name("doCopy(sql:values:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *sql __attribute__((swift_name("sql")));
@property (readonly) NSArray<NSArray<NSString *> *> * _Nullable values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Statement_.Companion")))
@interface NCSDKStatementCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKStatementCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlAction")))
@interface NCSDKUrlAction : NCSDKBase
- (instancetype)initWithAction:(NCSDKActionType *)action url:(NSString * _Nullable)url timeToLiveSeconds:(NCSDKLong * _Nullable)timeToLiveSeconds __attribute__((swift_name("init(action:url:timeToLiveSeconds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKUrlActionCompanion *companion __attribute__((swift_name("companion")));
- (NCSDKActionType *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKLong * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKUrlAction *)doCopyAction:(NCSDKActionType *)action url:(NSString * _Nullable)url timeToLiveSeconds:(NCSDKLong * _Nullable)timeToLiveSeconds __attribute__((swift_name("doCopy(action:url:timeToLiveSeconds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKActionType *action __attribute__((swift_name("action")));
@property (readonly) NCSDKLong * _Nullable timeToLiveSeconds __attribute__((swift_name("timeToLiveSeconds")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlAction.Companion")))
@interface NCSDKUrlActionCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKUrlActionCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VersionedSetInfo")))
@interface NCSDKVersionedSetInfo : NCSDKBase
- (instancetype)initWithSdk:(NSString *)sdk settingsVersion:(int64_t)settingsVersion workflowSetVersion:(int64_t)workflowSetVersion configSetVersion:(int64_t)configSetVersion __attribute__((swift_name("init(sdk:settingsVersion:workflowSetVersion:configSetVersion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKVersionedSetInfoCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKVersionedSetInfo *)doCopySdk:(NSString *)sdk settingsVersion:(int64_t)settingsVersion workflowSetVersion:(int64_t)workflowSetVersion configSetVersion:(int64_t)configSetVersion __attribute__((swift_name("doCopy(sdk:settingsVersion:workflowSetVersion:configSetVersion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t configSetVersion __attribute__((swift_name("configSetVersion")));
@property (readonly) NSString *sdk __attribute__((swift_name("sdk")));
@property (readonly) int64_t settingsVersion __attribute__((swift_name("settingsVersion")));
@property (readonly) int64_t workflowSetVersion __attribute__((swift_name("workflowSetVersion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VersionedSetInfo.Companion")))
@interface NCSDKVersionedSetInfoCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKVersionedSetInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowSetAction")))
@interface NCSDKWorkflowSetAction : NCSDKBase
- (instancetype)initWithVersion:(int64_t)version interfaces:(NSDictionary<NSString *, NCSDKInterfaceAction *> *)interfaces definitions:(NSDictionary<NSString *, NCSDKDefinitionAction *> *)definitions __attribute__((swift_name("init(version:interfaces:definitions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKWorkflowSetActionCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, NCSDKInterfaceAction *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSDictionary<NSString *, NCSDKDefinitionAction *> *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKWorkflowSetAction *)doCopyVersion:(int64_t)version interfaces:(NSDictionary<NSString *, NCSDKInterfaceAction *> *)interfaces definitions:(NSDictionary<NSString *, NCSDKDefinitionAction *> *)definitions __attribute__((swift_name("doCopy(version:interfaces:definitions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NCSDKDefinitionAction *> *definitions __attribute__((swift_name("definitions")));
@property (readonly) NSDictionary<NSString *, NCSDKInterfaceAction *> *interfaces __attribute__((swift_name("interfaces")));
@property (readonly) int64_t version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowSetAction.Companion")))
@interface NCSDKWorkflowSetActionCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKWorkflowSetActionCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("DatabaseMigration")))
@protocol NCSDKDatabaseMigration
@required
@property (readonly) NSArray<NSString *> *creationScripts __attribute__((swift_name("creationScripts")));
@property (readonly) NSString *databaseName __attribute__((swift_name("databaseName")));
@property (readonly) NSArray<NSArray<NSString *> *> *upgradeScripts __attribute__((swift_name("upgradeScripts")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationsDatabaseMigration")))
@interface NCSDKConfigurationsDatabaseMigration : NCSDKBase <NCSDKDatabaseMigration>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)configurationsDatabaseMigration __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKConfigurationsDatabaseMigration *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *databaseName __attribute__((swift_name("databaseName")));
@property (readonly) NSArray<NSArray<NSString *> *> *upgradeScripts __attribute__((swift_name("upgradeScripts")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventsDatabaseMigration")))
@interface NCSDKEventsDatabaseMigration : NCSDKBase <NCSDKDatabaseMigration>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eventsDatabaseMigration __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKEventsDatabaseMigration *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *databaseName __attribute__((swift_name("databaseName")));
@property (readonly) NSArray<NSArray<NSString *> *> *upgradeScripts __attribute__((swift_name("upgradeScripts")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SchemaDatabaseMigration")))
@interface NCSDKSchemaDatabaseMigration : NCSDKBase <NCSDKDatabaseMigration>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)schemaDatabaseMigration __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKSchemaDatabaseMigration *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *databaseName __attribute__((swift_name("databaseName")));
@property (readonly) NSArray<NSArray<NSString *> *> *upgradeScripts __attribute__((swift_name("upgradeScripts")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsMigration")))
@interface NCSDKSettingsMigration : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) NCSDKSettingsMigrationCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NCSDKSettings *currentSettings __attribute__((swift_name("currentSettings")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsMigration.Companion")))
@interface NCSDKSettingsMigrationCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKSettingsMigrationCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int64_t CURRENT_VERSION __attribute__((swift_name("CURRENT_VERSION")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowSetMigration")))
@interface NCSDKWorkflowSetMigration : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)workflowSetMigration __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKWorkflowSetMigration *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t CURRENT_VERSION __attribute__((swift_name("CURRENT_VERSION")));
@property (readonly) NSArray<NSDictionary<NSString *, NCSDKInterfaceAction *> *> *interfaces __attribute__((swift_name("interfaces")));
@property (readonly) NSArray<NSDictionary<NSString *, NCSDKDefinitionAction *> *> *workflows __attribute__((swift_name("workflows")));
@end;

__attribute__((swift_name("JsonSerDe")))
@protocol NCSDKJsonSerDe
@required
- (id _Nullable)decodeFromStringData:(NSString *)data typeInfo:(NCSDKKtor_utilsTypeInfo *)typeInfo __attribute__((swift_name("decodeFromString(data:typeInfo:)")));
- (NSString *)encodeToStringValue:(id _Nullable)value typeInfo:(NCSDKKtor_utilsTypeInfo *)typeInfo __attribute__((swift_name("encodeToString(value:typeInfo:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinxJson")))
@interface NCSDKKotlinxJson : NCSDKBase <NCSDKJsonSerDe>
- (instancetype)initWithJson:(NCSDKKotlinx_serialization_jsonJson *)json serializer:(id<NCSDKKotlinx_serialization_coreKSerializer> _Nullable)serializer __attribute__((swift_name("init(json:serializer:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKKotlinxJsonCompanion *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromStringData:(NSString *)data typeInfo:(NCSDKKtor_utilsTypeInfo *)typeInfo __attribute__((swift_name("decodeFromString(data:typeInfo:)")));
- (NSString *)encodeToStringValue:(id _Nullable)value typeInfo:(NCSDKKtor_utilsTypeInfo *)typeInfo __attribute__((swift_name("encodeToString(value:typeInfo:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinxJson.Companion")))
@interface NCSDKKotlinxJsonCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKotlinxJsonCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKJsonSerDe>)getDefault __attribute__((swift_name("getDefault()")));
@end;

__attribute__((swift_name("SerdeException")))
@interface NCSDKSerdeException : NCSDKKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface NCSDKKotlinx_serialization_jsonJsonElement : NCSDKBase
@property (class, readonly, getter=companion) NCSDKKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

@interface NCSDKKotlinx_serialization_jsonJsonElement (Extensions)
- (id _Nullable)toAny __attribute__((swift_name("toAny()")));
- (NSDictionary<NSString *, id> * _Nullable)toMapOrNull __attribute__((swift_name("toMapOrNull()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonPrimitive")))
@interface NCSDKKotlinx_serialization_jsonJsonPrimitive : NCSDKKotlinx_serialization_jsonJsonElement
@property (class, readonly, getter=companion) NCSDKKotlinx_serialization_jsonJsonPrimitiveCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
@end;

@interface NCSDKKotlinx_serialization_jsonJsonPrimitive (Extensions)
- (id _Nullable)toAnyOrNull __attribute__((swift_name("toAnyOrNull()")));
@end;

@interface NCSDKWorkflowDefinition (Extensions)
- (id)getDependencies __attribute__((swift_name("getDependencies()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinChar.Companion")))
@interface NCSDKKotlinCharCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKotlinCharCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_CODE_POINT __attribute__((swift_name("MAX_CODE_POINT")));
@property (readonly) unichar MAX_HIGH_SURROGATE __attribute__((swift_name("MAX_HIGH_SURROGATE")));
@property (readonly) unichar MAX_LOW_SURROGATE __attribute__((swift_name("MAX_LOW_SURROGATE")));
@property (readonly) int32_t MAX_RADIX __attribute__((swift_name("MAX_RADIX")));
@property (readonly) unichar MAX_SURROGATE __attribute__((swift_name("MAX_SURROGATE")));
@property (readonly) unichar MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) int32_t MIN_CODE_POINT __attribute__((swift_name("MIN_CODE_POINT")));
@property (readonly) unichar MIN_HIGH_SURROGATE __attribute__((swift_name("MIN_HIGH_SURROGATE")));
@property (readonly) unichar MIN_LOW_SURROGATE __attribute__((swift_name("MIN_LOW_SURROGATE")));
@property (readonly) int32_t MIN_RADIX __attribute__((swift_name("MIN_RADIX")));
@property (readonly) int32_t MIN_SUPPLEMENTARY_CODE_POINT __attribute__((swift_name("MIN_SUPPLEMENTARY_CODE_POINT")));
@property (readonly) unichar MIN_SURROGATE __attribute__((swift_name("MIN_SURROGATE")));
@property (readonly) unichar MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end;

@interface NCSDKKotlinCharCompanion (Extensions)
- (int8_t)charCountI:(int32_t)i __attribute__((swift_name("charCount(i:)")));
- (BOOL)isSupplementaryCodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("isSupplementaryCodePoint(codePoint:)")));
- (unichar)maxValue __attribute__((swift_name("maxValue()")));
- (int32_t)toCharsCodePoint:(int32_t)codePoint resultArray:(NCSDKKotlinCharArray *)resultArray resultIdx:(int32_t)resultIdx __attribute__((swift_name("toChars(codePoint:resultArray:resultIdx:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface NCSDKKotlinCharArray : NCSDKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(NCSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NCSDKKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface NCSDKKotlinCharArray (Extensions)
- (NSString *)convertToString __attribute__((swift_name("convertToString()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface NCSDKKotlinArray<T> : NCSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(NCSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<NCSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface NCSDKKotlinArray (Extensions)
- (NSArray<NCSDKInt *> *)indices __attribute__((swift_name("indices()")));
@end;

@interface NCSDKType (Extensions)
- (BOOL)isInstanceAny:(id _Nullable)any __attribute__((swift_name("isInstance(any:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AllKt")))
@interface NCSDKAllKt : NCSDKBase
+ (void)forEachBuiltinLogger:(id<NCSDKWorkflowLogger>)logger block:(void (^)(id<NCSDKAction>))block __attribute__((swift_name("forEachBuiltin(logger:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HashingKt")))
@interface NCSDKHashingKt : NCSDKBase
+ (NSString *)md5Input:(NSString *)input __attribute__((swift_name("md5(input:)")));
+ (NSString *)sha256Input:(NSString *)input __attribute__((swift_name("sha256(input:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MathKt")))
@interface NCSDKMathKt : NCSDKBase
+ (int64_t)powStartBase:(int64_t)startBase startExp:(int64_t)startExp __attribute__((swift_name("pow(startBase:startExp:)")));
+ (NCSDKValueFuncValue *)realFunc1ArgF:(NCSDKDouble *(^)(NCSDKDouble *))f __attribute__((swift_name("realFunc1Arg(f:)")));
+ (NCSDKValueFuncValue *)realFunc2ArgF:(NCSDKDouble *(^)(NCSDKDouble *, NCSDKDouble *))f __attribute__((swift_name("realFunc2Arg(f:)")));
+ (void)requireSupportedNumberTypeNumbers:(NCSDKKotlinArray<id> *)numbers __attribute__((swift_name("requireSupportedNumberType(numbers:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelsKt")))
@interface NCSDKChannelsKt : NCSDKBase
+ (void)closeChannel:(id<NCSDKKotlinx_coroutines_coreSendChannel>)channel __attribute__((swift_name("close(channel:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)firstChannel:(id<NCSDKKotlinx_coroutines_coreReceiveChannel>)channel completionHandler:(void (^)(id<NCSDKKotlinx_coroutines_coreChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("first(channel:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)lastChannel:(id<NCSDKKotlinx_coroutines_coreReceiveChannel>)channel completionHandler:(void (^)(id<NCSDKKotlinx_coroutines_coreChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("last(channel:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)mapChannel:(id<NCSDKKotlinx_coroutines_coreReceiveChannel>)channel mapper:(NCSDKValueFuncValue *)mapper completionHandler:(void (^)(id<NCSDKKotlinx_coroutines_coreChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("map(channel:mapper:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)mapNotNullChannel:(id<NCSDKKotlinx_coroutines_coreReceiveChannel>)channel mapper:(NCSDKValueFuncValue *)mapper completionHandler:(void (^)(id<NCSDKKotlinx_coroutines_coreChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("mapNotNull(channel:mapper:completionHandler:)")));
+ (id<NCSDKKotlinx_coroutines_coreChannel>)doNewBufferedChannel __attribute__((swift_name("doNewBufferedChannel()")));
+ (id<NCSDKKotlinx_coroutines_coreChannel>)doNewConflatedChannel __attribute__((swift_name("doNewConflatedChannel()")));
+ (id<NCSDKKotlinx_coroutines_coreChannel>)doNewRendezvousChannel __attribute__((swift_name("doNewRendezvousChannel()")));
+ (id<NCSDKKotlinx_coroutines_coreChannel>)doNewUnlimitedChannel __attribute__((swift_name("doNewUnlimitedChannel()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toListChannel:(id<NCSDKKotlinx_coroutines_coreReceiveChannel>)channel completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(channel:completionHandler:)")));
@property (class, readonly) id<NCSDKKotlinSuspendFunction2> filter __attribute__((swift_name("filter")));
@property (class, readonly) id<NCSDKKotlinSuspendFunction1> merge __attribute__((swift_name("merge")));
@property (class, readonly) id<NCSDKKotlinSuspendFunction2> reduce __attribute__((swift_name("reduce")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonKt")))
@interface NCSDKJsonKt : NCSDKBase
+ (NCSDKKotlinx_serialization_jsonJsonElement *)toJsonElementValue:(id _Nullable)value __attribute__((swift_name("toJsonElement(value:)")));
+ (NSArray<NCSDKKotlinx_serialization_jsonJsonElement *> *)toJsonArray:(NSArray<id> *)receiver __attribute__((swift_name("toJsonArray(_:)")));
+ (NSDictionary<NSString *, NCSDKKotlinx_serialization_jsonJsonElement *> *)toJsonObject:(NSDictionary<id, id> *)receiver __attribute__((swift_name("toJsonObject(_:)")));
+ (NSArray<id> *)toListOfAny:(NSArray<NCSDKKotlinx_serialization_jsonJsonElement *> *)receiver __attribute__((swift_name("toListOfAny(_:)")));
+ (NSDictionary<NSString *, id> *)toMapOfAny:(NSDictionary<NSString *, NCSDKKotlinx_serialization_jsonJsonElement *> *)receiver __attribute__((swift_name("toMapOfAny(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValueKt")))
@interface NCSDKValueKt : NCSDKBase
+ (void)requireSupportedTypeTypes:(NCSDKKotlinArray<id<NCSDKKotlinKClass>> *)types __attribute__((swift_name("requireSupportedType(types:)")));
+ (NCSDKValueFuncValue *)wrapFuncValueBlock:(id<NCSDKKotlinSuspendFunction2>)block __attribute__((swift_name("wrapFuncValue(block:)")));
+ (NCSDKValueFuncValue *)wrapFuncValueBlock_:(id<NCSDKKotlinSuspendFunction3>)block __attribute__((swift_name("wrapFuncValue(block_:)")));
+ (NCSDKValueFuncValue *)wrapFuncValueBlock__:(id<NCSDKKotlinSuspendFunction1>)block __attribute__((swift_name("wrapFuncValue(block__:)")));
+ (id _Nullable)getOrThrowAs:(NSArray<id> *)receiver index:(int32_t)index __attribute__((swift_name("getOrThrowAs(_:index:)")));
+ (NCSDKValueFuncValue *)toFuncValue:(id<NCSDKKotlinSuspendFunction2>)receiver __attribute__((swift_name("toFuncValue(_:)")));
+ (NCSDKValueFuncValue *)toFuncValue_:(id<NCSDKKotlinSuspendFunction3>)receiver __attribute__((swift_name("toFuncValue(__:)")));
+ (NCSDKValueFuncValue *)toFuncValue__:(id<NCSDKKotlinSuspendFunction1>)receiver __attribute__((swift_name("toFuncValue(___:)")));
+ (BOOL)toTruthy:(id _Nullable)receiver __attribute__((swift_name("toTruthy(_:)")));
@property (class, readonly) NSSet<id<NCSDKKotlinKClass>> *SUPPORT_TYPES __attribute__((swift_name("SUPPORT_TYPES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineScopesKt")))
@interface NCSDKCoroutineScopesKt : NCSDKBase
@property (class, readonly) id<NCSDKKotlinx_coroutines_coreCoroutineScope> WorkflowScope __attribute__((swift_name("WorkflowScope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowLoggerKt")))
@interface NCSDKWorkflowLoggerKt : NCSDKBase
+ (void)debug:(id<NCSDKWorkflowLogger>)receiver block:(NSString *(^)(void))block __attribute__((swift_name("debug(_:block:)")));
+ (void)error:(id<NCSDKWorkflowLogger>)receiver block:(NSString *(^)(void))block __attribute__((swift_name("error(_:block:)")));
+ (void)error:(id<NCSDKWorkflowLogger>)receiver e:(NCSDKKotlinThrowable *)e block:(NSString *(^)(void))block __attribute__((swift_name("error(_:e:block:)")));
+ (void)info:(id<NCSDKWorkflowLogger>)receiver block:(NSString *(^)(void))block __attribute__((swift_name("info(_:block:)")));
+ (void)trace:(id<NCSDKWorkflowLogger>)receiver block:(NSString *(^)(void))block __attribute__((swift_name("trace(_:block:)")));
+ (void)warn:(id<NCSDKWorkflowLogger>)receiver block:(NSString *(^)(void))block __attribute__((swift_name("warn(_:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowContextKt")))
@interface NCSDKWorkflowContextKt : NCSDKBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)getInputOrNull:(id<NCSDKWorkflowContext>)receiver key:(NSString *)key completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getInputOrNull(_:key:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)getRequiredInput:(id<NCSDKWorkflowContext>)receiver key:(NSString *)key completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getRequiredInput(_:key:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)getRequiredRawExpression:(id<NCSDKWorkflowContext>)receiver key:(NSString *)key completionHandler:(void (^)(NCSDKExpression * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRequiredRawExpression(_:key:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionWorkflowKt")))
@interface NCSDKActionWorkflowKt : NCSDKBase
+ (id<NCSDKWorkflow>)toWorkflow:(id<NCSDKAction>)receiver __attribute__((swift_name("toWorkflow(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloseableKt")))
@interface NCSDKCloseableKt : NCSDKBase
+ (id _Nullable)use:(id<NCSDKCloseable>)receiver block:(id _Nullable (^)(id<NCSDKCloseable>))block __attribute__((swift_name("use(_:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArraysKt")))
@interface NCSDKArraysKt : NCSDKBase
+ (void)arraycopySrc:(NCSDKKotlinArray<id> *)src srcPos:(int32_t)srcPos dest:(NCSDKKotlinArray<id> *)dest destPos:(int32_t)destPos length:(int32_t)length __attribute__((swift_name("arraycopy(src:srcPos:dest:destPos:length:)")));
+ (void)arraycopySrc:(NCSDKKotlinIntArray *)src srcPos:(int32_t)srcPos dest:(NCSDKKotlinIntArray *)dest destPos:(int32_t)destPos length_:(int32_t)length __attribute__((swift_name("arraycopy(src:srcPos:dest:destPos:length_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiscKt")))
@interface NCSDKMiscKt : NCSDKBase
+ (void)assertCondition:(BOOL)condition __attribute__((swift_name("assert(condition:)")));
+ (void)outMessageMessage:(NSString *)message __attribute__((swift_name("outMessage(message:)")));
+ (NCSDKKotlinCharArray *)asCharArray:(NSString *)receiver __attribute__((swift_name("asCharArray(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggingKt")))
@interface NCSDKLoggingKt : NCSDKBase
+ (void)errMessageMessage:(NSString *)message __attribute__((swift_name("errMessage(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CharsKt")))
@interface NCSDKCharsKt : NCSDKBase
+ (BOOL)isCharLowerCaseFirstChar:(unichar)firstChar __attribute__((swift_name("isCharLowerCase(firstChar:)")));
+ (BOOL)isCharUppercaseFirstChar:(unichar)firstChar __attribute__((swift_name("isCharUppercase(firstChar:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyncKt")))
@interface NCSDKSyncKt : NCSDKBase
+ (id _Nullable)synchronizedLock:(id)lock block:(id _Nullable (^)(void))block __attribute__((swift_name("synchronized(lock:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TypeKt")))
@interface NCSDKTypeKt : NCSDKBase
+ (NCSDKType *)getType:(id<NCSDKTypeDeclarator>)receiver name:(NSString *)name __attribute__((swift_name("getType(_:name:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuleContextKt")))
@interface NCSDKRuleContextKt : NCSDKBase
@property (class, readonly) NCSDKParserRuleContext *EMPTY_RULECTX __attribute__((swift_name("EMPTY_RULECTX")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositionKt")))
@interface NCSDKPositionKt : NCSDKBase
+ (NCSDKPosition *)posStartLine:(int32_t)startLine startCol:(int32_t)startCol endLine:(int32_t)endLine endCol:(int32_t)endCol __attribute__((swift_name("pos(startLine:startCol:endLine:endCol:)")));
@property (class, readonly) NCSDKPoint *START_POINT __attribute__((swift_name("START_POINT")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuleTagTokenKt")))
@interface NCSDKRuleTagTokenKt : NCSDKBase
@property (class, readonly) int32_t DEFAULT_CHANNEL __attribute__((swift_name("DEFAULT_CHANNEL")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloseableKt_")))
@interface NCSDKCloseableKt_ : NCSDKBase
+ (id _Nullable)use:(id<NCSDKCloseable_>)receiver block:(id _Nullable (^)(id<NCSDKCloseable_>))block __attribute__((swift_name("use(_:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUUIDKt")))
@interface NCSDKGetUUIDKt : NCSDKBase
+ (NSString *)getUUID __attribute__((swift_name("getUUID()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientProxyKt")))
@interface NCSDKHttpClientProxyKt : NCSDKBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)execute:(id<NCSDKHttpClientProxy>)receiver request:(id<NCSDKHttpRequest>)request completionHandler:(void (^)(NCSDKHttpResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(_:request:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatetimeKt")))
@interface NCSDKDatetimeKt : NCSDKBase
+ (NCSDKKotlinx_datetimeInstant *)getDate __attribute__((swift_name("getDate()")));
+ (int64_t)getTimestamp __attribute__((swift_name("getTimestamp()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutinesKt")))
@interface NCSDKCoroutinesKt : NCSDKBase
+ (NCSDKKotlinx_coroutines_coreCoroutineDispatcher *)getPlatformDispatcher __attribute__((swift_name("getPlatformDispatcher()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DomainWhiteListKt")))
@interface NCSDKDomainWhiteListKt : NCSDKBase
+ (NSSet<NSString *> *)getPlatformWhiteList __attribute__((swift_name("getPlatformWhiteList()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SchemaUpdateKt")))
@interface NCSDKSchemaUpdateKt : NCSDKBase
@property (class, readonly) NSString *SCHEMA_DATABASE_NAME __attribute__((swift_name("SCHEMA_DATABASE_NAME")));
@property (class, readonly) NSString *SDK_VERSION __attribute__((swift_name("SDK_VERSION")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkflowSetMigrationKt")))
@interface NCSDKWorkflowSetMigrationKt : NCSDKBase
@property (class, readonly) NSDictionary<NSString *, NSString *> *workflowDefinitions __attribute__((swift_name("workflowDefinitions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonSerDeKt")))
@interface NCSDKJsonSerDeKt : NCSDKBase
+ (id)decodeFromString:(id<NCSDKJsonSerDe>)receiver data:(NSString *)data __attribute__((swift_name("decodeFromString(_:data:)")));
+ (NSString *)encodeToString:(id<NCSDKJsonSerDe>)receiver value:(id)value __attribute__((swift_name("encodeToString(_:value:)")));
+ (NSString *)encodeToString:(id)receiver json:(id<NCSDKJsonSerDe>)json __attribute__((swift_name("encodeToString(_:json:)")));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface NCSDKKotlinCancellationException : NCSDKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface NCSDKKotlinEnumCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface NCSDKKotlinPair<__covariant A, __covariant B> : NCSDKBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (B _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol NCSDKKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol NCSDKKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol NCSDKKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol NCSDKKotlinKClass <NCSDKKotlinKDeclarationContainer, NCSDKKotlinKAnnotatedElement, NCSDKKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol NCSDKKotlinx_serialization_coreEncoder
@required
- (id<NCSDKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<NCSDKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<NCSDKKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<NCSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<NCSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) NCSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol NCSDKKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<NCSDKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<NCSDKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<NCSDKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) NCSDKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol NCSDKKotlinx_serialization_coreDecoder
@required
- (id<NCSDKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<NCSDKKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (NCSDKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<NCSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<NCSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) NCSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex")))
@interface NCSDKKotlinRegex : NCSDKBase
- (instancetype)initWithPattern:(NSString *)pattern __attribute__((swift_name("init(pattern:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern option:(NCSDKKotlinRegexOption *)option __attribute__((swift_name("init(pattern:option:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern options:(NSSet<NCSDKKotlinRegexOption *> *)options __attribute__((swift_name("init(pattern:options:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKKotlinRegexCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsMatchInInput:(id)input __attribute__((swift_name("containsMatchIn(input:)")));
- (id<NCSDKKotlinMatchResult> _Nullable)findInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("find(input:startIndex:)")));
- (id<NCSDKKotlinSequence>)findAllInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("findAll(input:startIndex:)")));
- (id<NCSDKKotlinMatchResult> _Nullable)matchAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchAt(input:index:)")));
- (id<NCSDKKotlinMatchResult> _Nullable)matchEntireInput:(id)input __attribute__((swift_name("matchEntire(input:)")));
- (BOOL)matchesInput:(id)input __attribute__((swift_name("matches(input:)")));
- (BOOL)matchesAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchesAt(input:index:)")));
- (NSString *)replaceInput:(id)input transform:(id (^)(id<NCSDKKotlinMatchResult>))transform __attribute__((swift_name("replace(input:transform:)")));
- (NSString *)replaceInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replace(input:replacement:)")));
- (NSString *)replaceFirstInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replaceFirst(input:replacement:)")));
- (NSArray<NSString *> *)splitInput:(id)input limit:(int32_t)limit __attribute__((swift_name("split(input:limit:)")));
- (id<NCSDKKotlinSequence>)splitToSequenceInput:(id)input limit:(int32_t)limit __attribute__((swift_name("splitToSequence(input:limit:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSSet<NCSDKKotlinRegexOption *> *options __attribute__((swift_name("options")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol NCSDKKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol NCSDKKotlinSuspendFunction1 <NCSDKKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol NCSDKKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<NCSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreReceiveChannel")))
@protocol NCSDKKotlinx_coroutines_coreReceiveChannel
@required
- (void)cancelCause:(NCSDKKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (id<NCSDKKotlinx_coroutines_coreChannelIterator>)iterator __attribute__((swift_name("iterator()")));
- (id _Nullable)poll __attribute__((swift_name("poll()"))) __attribute__((unavailable("Deprecated in the favour of 'tryReceive'. Please note that the provided replacement does not rethrow channel's close cause as 'poll' did, for the precise replacement please refer to the 'poll' documentation")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveCatchingWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveCatching(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveOrNullWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveOrNull(completionHandler:)"))) __attribute__((unavailable("Deprecated in favor of 'receiveCatching'. Please note that the provided replacement does not rethrow channel's close cause as 'receiveOrNull' did, for the detailed replacement please refer to the 'receiveOrNull' documentation")));
- (id _Nullable)tryReceive __attribute__((swift_name("tryReceive()")));
@property (readonly) BOOL isClosedForReceive __attribute__((swift_name("isClosedForReceive")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) id<NCSDKKotlinx_coroutines_coreSelectClause1> onReceive __attribute__((swift_name("onReceive")));
@property (readonly) id<NCSDKKotlinx_coroutines_coreSelectClause1> onReceiveCatching __attribute__((swift_name("onReceiveCatching")));
@property (readonly) id<NCSDKKotlinx_coroutines_coreSelectClause1> onReceiveOrNull __attribute__((swift_name("onReceiveOrNull"))) __attribute__((unavailable("Deprecated in favor of onReceiveCatching extension")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol NCSDKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<NCSDKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<NCSDKKotlinCoroutineContextElement> _Nullable)getKey:(id<NCSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<NCSDKKotlinCoroutineContext>)minusKeyKey:(id<NCSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<NCSDKKotlinCoroutineContext>)plusContext:(id<NCSDKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol NCSDKKotlinCoroutineContextElement <NCSDKKotlinCoroutineContext>
@required
@property (readonly) id<NCSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol NCSDKKotlinx_coroutines_coreJob <NCSDKKotlinCoroutineContextElement>
@required
- (id<NCSDKKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<NCSDKKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(NCSDKKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (NCSDKKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<NCSDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(NCSDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<NCSDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(NCSDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<NCSDKKotlinx_coroutines_coreJob>)plusOther:(id<NCSDKKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start_ __attribute__((swift_name("start()")));
@property (readonly) id<NCSDKKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<NCSDKKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDeferred")))
@protocol NCSDKKotlinx_coroutines_coreDeferred <NCSDKKotlinx_coroutines_coreJob>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));
- (id _Nullable)getCompleted __attribute__((swift_name("getCompleted()")));
- (NCSDKKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
@property (readonly) id<NCSDKKotlinx_coroutines_coreSelectClause1> onAwait __attribute__((swift_name("onAwait")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSendChannel")))
@protocol NCSDKKotlinx_coroutines_coreSendChannel
@required
- (BOOL)closeCause:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("close(cause:)")));
- (void)invokeOnCloseHandler:(void (^)(NCSDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnClose(handler:)")));
- (BOOL)offerElement:(id _Nullable)element __attribute__((swift_name("offer(element:)"))) __attribute__((unavailable("Deprecated in the favour of 'trySend' method")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendElement:(id _Nullable)element completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("send(element:completionHandler:)")));
- (id _Nullable)trySendElement:(id _Nullable)element __attribute__((swift_name("trySend(element:)")));
@property (readonly) BOOL isClosedForSend __attribute__((swift_name("isClosedForSend")));
@property (readonly) id<NCSDKKotlinx_coroutines_coreSelectClause2> onSend __attribute__((swift_name("onSend")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface NCSDKKotlinIntArray : NCSDKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(NCSDKInt *(^)(NCSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NCSDKKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UuidUuid")))
@interface NCSDKUuidUuid : NCSDKBase <NCSDKKotlinComparable>
- (instancetype)initWithMsb:(int64_t)msb lsb:(int64_t)lsb __attribute__((swift_name("init(msb:lsb:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUuidBytes:(NCSDKKotlinByteArray *)uuidBytes __attribute__((swift_name("init(uuidBytes:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use `uuidOf` instead.")));
- (int32_t)compareToOther:(NCSDKUuidUuid *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t leastSignificantBits __attribute__((swift_name("leastSignificantBits")));
@property (readonly) int64_t mostSignificantBits __attribute__((swift_name("mostSignificantBits")));
@end;

__attribute__((swift_name("KotlinCharSequence")))
@protocol NCSDKKotlinCharSequence
@required
- (unichar)getIndex__:(int32_t)index __attribute__((swift_name("get(index__:)")));
- (id)subSequenceStartIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("subSequence(startIndex:endIndex:)")));
@property (readonly) int32_t length __attribute__((swift_name("length")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol NCSDKKotlinAppendable
@required
- (id<NCSDKKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<NCSDKKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<NCSDKKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinStringBuilder")))
@interface NCSDKKotlinStringBuilder : NCSDKBase <NCSDKKotlinCharSequence, NCSDKKotlinAppendable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithCapacity:(int32_t)capacity __attribute__((swift_name("init(capacity:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content __attribute__((swift_name("init(content:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent_:(id)content __attribute__((swift_name("init(content_:)"))) __attribute__((objc_designated_initializer));
- (NCSDKKotlinStringBuilder *)appendValue__:(id _Nullable)value __attribute__((swift_name("append(value__:)")));
- (NCSDKKotlinStringBuilder *)appendValue___:(BOOL)value __attribute__((swift_name("append(value___:)")));
- (NCSDKKotlinStringBuilder *)appendValue____:(int8_t)value __attribute__((swift_name("append(value____:)")));
- (NCSDKKotlinStringBuilder *)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (NCSDKKotlinStringBuilder *)appendValue_____:(NCSDKKotlinCharArray *)value __attribute__((swift_name("append(value_____:)")));
- (NCSDKKotlinStringBuilder *)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (NCSDKKotlinStringBuilder *)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
- (NCSDKKotlinStringBuilder *)appendValue______:(double)value __attribute__((swift_name("append(value______:)")));
- (NCSDKKotlinStringBuilder *)appendValue_______:(float)value __attribute__((swift_name("append(value_______:)")));
- (NCSDKKotlinStringBuilder *)appendValue________:(int32_t)value __attribute__((swift_name("append(value________:)")));
- (NCSDKKotlinStringBuilder *)appendValue_________:(int64_t)value __attribute__((swift_name("append(value_________:)")));
- (NCSDKKotlinStringBuilder *)appendValue__________:(int16_t)value __attribute__((swift_name("append(value__________:)")));
- (NCSDKKotlinStringBuilder *)appendValue___________:(NSString * _Nullable)value __attribute__((swift_name("append(value___________:)")));
- (NCSDKKotlinStringBuilder *)appendRangeValue:(NCSDKKotlinCharArray *)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("appendRange(value:startIndex:endIndex:)")));
- (NCSDKKotlinStringBuilder *)appendRangeValue:(id)value startIndex:(int32_t)startIndex endIndex_:(int32_t)endIndex __attribute__((swift_name("appendRange(value:startIndex:endIndex_:)")));
- (int32_t)capacity __attribute__((swift_name("capacity()")));
- (NCSDKKotlinStringBuilder *)deleteAtIndex:(int32_t)index __attribute__((swift_name("deleteAt(index:)")));
- (NCSDKKotlinStringBuilder *)deleteRangeStartIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("deleteRange(startIndex:endIndex:)")));
- (void)ensureCapacityMinimumCapacity:(int32_t)minimumCapacity __attribute__((swift_name("ensureCapacity(minimumCapacity:)")));
- (unichar)getIndex__:(int32_t)index __attribute__((swift_name("get(index__:)")));
- (int32_t)indexOfString:(NSString *)string __attribute__((swift_name("indexOf(string:)")));
- (int32_t)indexOfString:(NSString *)string startIndex:(int32_t)startIndex __attribute__((swift_name("indexOf(string:startIndex:)")));
- (NCSDKKotlinStringBuilder *)insertIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("insert(index:value:)")));
- (NCSDKKotlinStringBuilder *)insertIndex:(int32_t)index value_:(BOOL)value __attribute__((swift_name("insert(index:value_:)")));
- (NCSDKKotlinStringBuilder *)insertIndex:(int32_t)index value__:(int8_t)value __attribute__((swift_name("insert(index:value__:)")));
- (NCSDKKotlinStringBuilder *)insertIndex:(int32_t)index value___:(unichar)value __attribute__((swift_name("insert(index:value___:)")));
- (NCSDKKotlinStringBuilder *)insertIndex:(int32_t)index value____:(NCSDKKotlinCharArray *)value __attribute__((swift_name("insert(index:value____:)")));
- (NCSDKKotlinStringBuilder *)insertIndex:(int32_t)index value_____:(id _Nullable)value __attribute__((swift_name("insert(index:value_____:)")));
- (NCSDKKotlinStringBuilder *)insertIndex:(int32_t)index value______:(double)value __attribute__((swift_name("insert(index:value______:)")));
- (NCSDKKotlinStringBuilder *)insertIndex:(int32_t)index value_______:(float)value __attribute__((swift_name("insert(index:value_______:)")));
- (NCSDKKotlinStringBuilder *)insertIndex:(int32_t)index value________:(int32_t)value __attribute__((swift_name("insert(index:value________:)")));
- (NCSDKKotlinStringBuilder *)insertIndex:(int32_t)index value_________:(int64_t)value __attribute__((swift_name("insert(index:value_________:)")));
- (NCSDKKotlinStringBuilder *)insertIndex:(int32_t)index value__________:(int16_t)value __attribute__((swift_name("insert(index:value__________:)")));
- (NCSDKKotlinStringBuilder *)insertIndex:(int32_t)index value___________:(NSString * _Nullable)value __attribute__((swift_name("insert(index:value___________:)")));
- (NCSDKKotlinStringBuilder *)insertRangeIndex:(int32_t)index value:(NCSDKKotlinCharArray *)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("insertRange(index:value:startIndex:endIndex:)")));
- (NCSDKKotlinStringBuilder *)insertRangeIndex:(int32_t)index value:(id)value startIndex:(int32_t)startIndex endIndex_:(int32_t)endIndex __attribute__((swift_name("insertRange(index:value:startIndex:endIndex_:)")));
- (int32_t)lastIndexOfString:(NSString *)string __attribute__((swift_name("lastIndexOf(string:)")));
- (int32_t)lastIndexOfString:(NSString *)string startIndex:(int32_t)startIndex __attribute__((swift_name("lastIndexOf(string:startIndex:)")));
- (NCSDKKotlinStringBuilder *)reverse __attribute__((swift_name("reverse()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
- (void)setLengthNewLength:(int32_t)newLength __attribute__((swift_name("setLength(newLength:)")));
- (NCSDKKotlinStringBuilder *)setRangeStartIndex:(int32_t)startIndex endIndex:(int32_t)endIndex value:(NSString *)value __attribute__((swift_name("setRange(startIndex:endIndex:value:)")));
- (id)subSequenceStartIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("subSequence(startIndex:endIndex:)")));
- (NSString *)substringStartIndex:(int32_t)startIndex __attribute__((swift_name("substring(startIndex:)")));
- (NSString *)substringStartIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("substring(startIndex:endIndex:)")));
- (void)toCharArrayDestination:(NCSDKKotlinCharArray *)destination destinationOffset:(int32_t)destinationOffset startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("toCharArray(destination:destinationOffset:startIndex:endIndex:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)trimToSize __attribute__((swift_name("trimToSize()")));
@property (readonly) int32_t length __attribute__((swift_name("length")));
@end;

__attribute__((swift_name("Sqliter_driverDatabaseConnection")))
@protocol NCSDKSqliter_driverDatabaseConnection
@required
- (void)beginTransaction __attribute__((swift_name("beginTransaction()")));
- (void)close __attribute__((swift_name("close_()")));
- (id<NCSDKSqliter_driverStatement>)createStatementSql:(NSString *)sql __attribute__((swift_name("createStatement(sql:)")));
- (void)endTransaction __attribute__((swift_name("endTransaction()")));
- (void *)getDbPointer __attribute__((swift_name("getDbPointer()")));
- (void)rawExecSqlSql:(NSString *)sql __attribute__((swift_name("rawExecSql(sql:)")));
- (void)setTransactionSuccessful __attribute__((swift_name("setTransactionSuccessful()")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface NCSDKKotlinByteArray : NCSDKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(NCSDKByte *(^)(NCSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NCSDKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Sqliter_driverCursor")))
@protocol NCSDKSqliter_driverCursor
@required
- (NSString *)columnNameIndex:(int32_t)index __attribute__((swift_name("columnName(index:)")));
- (NCSDKKotlinByteArray *)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (double)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (int64_t)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString *)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (NCSDKSqliter_driverFieldType *)getTypeIndex:(int32_t)index __attribute__((swift_name("getType(index:)")));
- (BOOL)isNullIndex:(int32_t)index __attribute__((swift_name("isNull(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@property (readonly) int32_t columnCount __attribute__((swift_name("columnCount")));
@property (readonly) NSDictionary<NSString *, NCSDKInt *> *columnNames __attribute__((swift_name("columnNames")));
@property (readonly) id<NCSDKSqliter_driverStatement> statement __attribute__((swift_name("statement")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sqliter_driverDatabaseConfiguration")))
@interface NCSDKSqliter_driverDatabaseConfiguration : NCSDKBase
- (instancetype)initWithName:(NSString * _Nullable)name version:(int32_t)version create:(void (^)(id<NCSDKSqliter_driverDatabaseConnection>))create upgrade:(void (^)(id<NCSDKSqliter_driverDatabaseConnection>, NCSDKInt *, NCSDKInt *))upgrade inMemory:(BOOL)inMemory journalMode:(NCSDKSqliter_driverJournalMode *)journalMode extendedConfig:(NCSDKSqliter_driverDatabaseConfigurationExtended *)extendedConfig loggingConfig:(NCSDKSqliter_driverDatabaseConfigurationLogging *)loggingConfig lifecycleConfig:(NCSDKSqliter_driverDatabaseConfigurationLifecycle *)lifecycleConfig encryptionConfig:(NCSDKSqliter_driverDatabaseConfigurationEncryption *)encryptionConfig __attribute__((swift_name("init(name:version:create:upgrade:inMemory:journalMode:extendedConfig:loggingConfig:lifecycleConfig:encryptionConfig:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSqliter_driverDatabaseConfigurationEncryption *)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(id<NCSDKSqliter_driverDatabaseConnection>))component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(id<NCSDKSqliter_driverDatabaseConnection>, NCSDKInt *, NCSDKInt *))component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSqliter_driverJournalMode *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSqliter_driverDatabaseConfigurationExtended *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSqliter_driverDatabaseConfigurationLogging *)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSqliter_driverDatabaseConfigurationLifecycle *)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSqliter_driverDatabaseConfiguration *)doCopyName:(NSString * _Nullable)name version:(int32_t)version create:(void (^)(id<NCSDKSqliter_driverDatabaseConnection>))create upgrade:(void (^)(id<NCSDKSqliter_driverDatabaseConnection>, NCSDKInt *, NCSDKInt *))upgrade inMemory:(BOOL)inMemory journalMode:(NCSDKSqliter_driverJournalMode *)journalMode extendedConfig:(NCSDKSqliter_driverDatabaseConfigurationExtended *)extendedConfig loggingConfig:(NCSDKSqliter_driverDatabaseConfigurationLogging *)loggingConfig lifecycleConfig:(NCSDKSqliter_driverDatabaseConfigurationLifecycle *)lifecycleConfig encryptionConfig:(NCSDKSqliter_driverDatabaseConfigurationEncryption *)encryptionConfig __attribute__((swift_name("doCopy(name:version:create:upgrade:inMemory:journalMode:extendedConfig:loggingConfig:lifecycleConfig:encryptionConfig:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^create)(id<NCSDKSqliter_driverDatabaseConnection>) __attribute__((swift_name("create")));
@property (readonly) NCSDKSqliter_driverDatabaseConfigurationEncryption *encryptionConfig __attribute__((swift_name("encryptionConfig")));
@property (readonly) NCSDKSqliter_driverDatabaseConfigurationExtended *extendedConfig __attribute__((swift_name("extendedConfig")));
@property (readonly) BOOL inMemory __attribute__((swift_name("inMemory")));
@property (readonly) NCSDKSqliter_driverJournalMode *journalMode __attribute__((swift_name("journalMode")));
@property (readonly) NCSDKSqliter_driverDatabaseConfigurationLifecycle *lifecycleConfig __attribute__((swift_name("lifecycleConfig")));
@property (readonly) NCSDKSqliter_driverDatabaseConfigurationLogging *loggingConfig __attribute__((swift_name("loggingConfig")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) void (^upgrade)(id<NCSDKSqliter_driverDatabaseConnection>, NCSDKInt *, NCSDKInt *) __attribute__((swift_name("upgrade")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("Sqliter_driverStatement")))
@protocol NCSDKSqliter_driverStatement
@required
- (void)bindBlobIndex:(int32_t)index value:(NCSDKKotlinByteArray *)value __attribute__((swift_name("bindBlob(index:value:)")));
- (void)bindDoubleIndex:(int32_t)index value_:(double)value __attribute__((swift_name("bindDouble(index:value_:)")));
- (void)bindLongIndex:(int32_t)index value_:(int64_t)value __attribute__((swift_name("bindLong(index:value_:)")));
- (void)bindNullIndex:(int32_t)index __attribute__((swift_name("bindNull(index:)")));
- (int32_t)bindParameterIndexParamName:(NSString *)paramName __attribute__((swift_name("bindParameterIndex(paramName:)")));
- (void)bindStringIndex:(int32_t)index value_:(NSString *)value __attribute__((swift_name("bindString(index:value_:)")));
- (void)clearBindings __attribute__((swift_name("clearBindings()")));
- (void)execute __attribute__((swift_name("execute()")));
- (int64_t)executeInsert __attribute__((swift_name("executeInsert()")));
- (int32_t)executeUpdateDelete __attribute__((swift_name("executeUpdateDelete()")));
- (void)finalizeStatement __attribute__((swift_name("finalizeStatement()")));
- (id<NCSDKSqliter_driverCursor>)query __attribute__((swift_name("query()")));
- (void)resetStatement __attribute__((swift_name("resetStatement()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface NCSDKKtor_utilsTypeInfo : NCSDKBase
- (instancetype)initWithType:(id<NCSDKKotlinKClass>)type reifiedType:(id<NCSDKKotlinKType>)reifiedType kotlinType:(id<NCSDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<NCSDKKotlinKClass>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<NCSDKKotlinKType>)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<NCSDKKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKKtor_utilsTypeInfo *)doCopyType:(id<NCSDKKotlinKClass>)type reifiedType:(id<NCSDKKotlinKType>)reifiedType kotlinType:(id<NCSDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<NCSDKKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<NCSDKKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<NCSDKKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol NCSDKKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close_()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface NCSDKKtor_client_coreHttpClient : NCSDKBase <NCSDKKotlinx_coroutines_coreCoroutineScope, NCSDKKtor_ioCloseable>
- (instancetype)initWithEngine:(id<NCSDKKtor_client_coreHttpClientEngine>)engine userConfig:(NCSDKKtor_client_coreHttpClientConfig<NCSDKKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close_()")));
- (NCSDKKtor_client_coreHttpClient *)configBlock:(void (^)(NCSDKKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<NCSDKKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<NCSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<NCSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<NCSDKKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) NCSDKKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) NCSDKKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) NCSDKKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) NCSDKKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) NCSDKKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) NCSDKKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface NCSDKKotlinx_datetimeInstant : NCSDKBase <NCSDKKotlinComparable>
@property (class, readonly, getter=companion) NCSDKKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(NCSDKKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NCSDKKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(NCSDKKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (NCSDKKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol NCSDKKotlinx_serialization_coreSerialFormat
@required
@property (readonly) NCSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol NCSDKKotlinx_serialization_coreStringFormat <NCSDKKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<NCSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<NCSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface NCSDKKotlinx_serialization_jsonJson : NCSDKBase <NCSDKKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) NCSDKKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<NCSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(NCSDKKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<NCSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NCSDKKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<NCSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<NCSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (NCSDKKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) NCSDKKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) NCSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface NCSDKKotlinx_serialization_jsonJsonElementCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonPrimitive.Companion")))
@interface NCSDKKotlinx_serialization_jsonJsonPrimitiveCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKotlinx_serialization_jsonJsonPrimitiveCompanion *shared __attribute__((swift_name("shared")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol NCSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface NCSDKKotlinCharIterator : NCSDKBase <NCSDKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next_ __attribute__((swift_name("next_()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChannel")))
@protocol NCSDKKotlinx_coroutines_coreChannel <NCSDKKotlinx_coroutines_coreSendChannel, NCSDKKotlinx_coroutines_coreReceiveChannel>
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol NCSDKKotlinSuspendFunction2 <NCSDKKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction3")))
@protocol NCSDKKotlinSuspendFunction3 <NCSDKKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface NCSDKKotlinAbstractCoroutineContextElement : NCSDKBase <NCSDKKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<NCSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<NCSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol NCSDKKotlinContinuationInterceptor <NCSDKKotlinCoroutineContextElement>
@required
- (id<NCSDKKotlinContinuation>)interceptContinuationContinuation:(id<NCSDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<NCSDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface NCSDKKotlinx_coroutines_coreCoroutineDispatcher : NCSDKKotlinAbstractCoroutineContextElement <NCSDKKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<NCSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<NCSDKKotlinCoroutineContext>)context block:(id<NCSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<NCSDKKotlinCoroutineContext>)context block:(id<NCSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<NCSDKKotlinContinuation>)interceptContinuationContinuation:(id<NCSDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<NCSDKKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (NCSDKKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (NCSDKKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(NCSDKKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<NCSDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol NCSDKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<NCSDKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<NCSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<NCSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) NCSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface NCSDKKotlinx_serialization_coreSerializersModule : NCSDKBase
- (void)dumpToCollector:(id<NCSDKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<NCSDKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<NCSDKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<NCSDKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<NCSDKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<NCSDKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<NCSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<NCSDKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol NCSDKKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface NCSDKKotlinx_serialization_coreSerialKind : NCSDKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol NCSDKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<NCSDKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<NCSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<NCSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<NCSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) NCSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface NCSDKKotlinNothing : NCSDKBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegexOption")))
@interface NCSDKKotlinRegexOption : NCSDKKotlinEnum<NCSDKKotlinRegexOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKKotlinRegexOption *ignoreCase __attribute__((swift_name("ignoreCase")));
@property (class, readonly) NCSDKKotlinRegexOption *multiline __attribute__((swift_name("multiline")));
@property (class, readonly) NCSDKKotlinRegexOption *literal __attribute__((swift_name("literal")));
@property (class, readonly) NCSDKKotlinRegexOption *unixLines __attribute__((swift_name("unixLines")));
@property (class, readonly) NCSDKKotlinRegexOption *comments __attribute__((swift_name("comments")));
@property (class, readonly) NCSDKKotlinRegexOption *dotMatchesAll __attribute__((swift_name("dotMatchesAll")));
@property (class, readonly) NCSDKKotlinRegexOption *canonEq __attribute__((swift_name("canonEq")));
+ (NCSDKKotlinArray<NCSDKKotlinRegexOption *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t mask __attribute__((swift_name("mask")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex.Companion")))
@interface NCSDKKotlinRegexCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKotlinRegexCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)escapeLiteral:(NSString *)literal __attribute__((swift_name("escape(literal:)")));
- (NSString *)escapeReplacementLiteral:(NSString *)literal __attribute__((swift_name("escapeReplacement(literal:)")));
- (NCSDKKotlinRegex *)fromLiteralLiteral:(NSString *)literal __attribute__((swift_name("fromLiteral(literal:)")));
@end;

__attribute__((swift_name("KotlinMatchResult")))
@protocol NCSDKKotlinMatchResult
@required
- (id<NCSDKKotlinMatchResult> _Nullable)next_ __attribute__((swift_name("next_()")));
@property (readonly) NCSDKKotlinMatchResultDestructured *destructured __attribute__((swift_name("destructured")));
@property (readonly) NSArray<NSString *> *groupValues __attribute__((swift_name("groupValues")));
@property (readonly) id<NCSDKKotlinMatchGroupCollection> groups __attribute__((swift_name("groups")));
@property (readonly) NCSDKKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value_ __attribute__((swift_name("value_")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol NCSDKKotlinSequence
@required
- (id<NCSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChannelIterator")))
@protocol NCSDKKotlinx_coroutines_coreChannelIterator
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(NCSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause1")))
@protocol NCSDKKotlinx_coroutines_coreSelectClause1
@required
- (void)registerSelectClause1Select:(id<NCSDKKotlinx_coroutines_coreSelectInstance>)select block:(id<NCSDKKotlinSuspendFunction1>)block __attribute__((swift_name("registerSelectClause1(select:block:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol NCSDKKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol NCSDKKotlinx_coroutines_coreChildHandle <NCSDKKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(NCSDKKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<NCSDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol NCSDKKotlinx_coroutines_coreChildJob <NCSDKKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<NCSDKKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol NCSDKKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<NCSDKKotlinx_coroutines_coreSelectInstance>)select block:(id<NCSDKKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol NCSDKKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause2")))
@protocol NCSDKKotlinx_coroutines_coreSelectClause2
@required
- (void)registerSelectClause2Select:(id<NCSDKKotlinx_coroutines_coreSelectInstance>)select param:(id _Nullable)param block:(id<NCSDKKotlinSuspendFunction1>)block __attribute__((swift_name("registerSelectClause2(select:param:block:)")));
@end;

__attribute__((swift_name("KotlinIntIterator")))
@interface NCSDKKotlinIntIterator : NCSDKBase <NCSDKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NCSDKInt *)next_ __attribute__((swift_name("next_()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface NCSDKKotlinByteIterator : NCSDKBase <NCSDKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NCSDKByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sqliter_driverFieldType")))
@interface NCSDKSqliter_driverFieldType : NCSDKKotlinEnum<NCSDKSqliter_driverFieldType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKSqliter_driverFieldTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NCSDKSqliter_driverFieldType *typeInteger __attribute__((swift_name("typeInteger")));
@property (class, readonly) NCSDKSqliter_driverFieldType *typeFloat __attribute__((swift_name("typeFloat")));
@property (class, readonly) NCSDKSqliter_driverFieldType *typeBlob __attribute__((swift_name("typeBlob")));
@property (class, readonly) NCSDKSqliter_driverFieldType *typeNull __attribute__((swift_name("typeNull")));
@property (class, readonly) NCSDKSqliter_driverFieldType *typeText __attribute__((swift_name("typeText")));
+ (NCSDKKotlinArray<NCSDKSqliter_driverFieldType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t nativeCode __attribute__((swift_name("nativeCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sqliter_driverJournalMode")))
@interface NCSDKSqliter_driverJournalMode : NCSDKKotlinEnum<NCSDKSqliter_driverJournalMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKSqliter_driverJournalModeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NCSDKSqliter_driverJournalMode *delete_ __attribute__((swift_name("delete_")));
@property (class, readonly) NCSDKSqliter_driverJournalMode *wal __attribute__((swift_name("wal")));
+ (NCSDKKotlinArray<NCSDKSqliter_driverJournalMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sqliter_driverDatabaseConfiguration.Extended")))
@interface NCSDKSqliter_driverDatabaseConfigurationExtended : NCSDKBase
- (instancetype)initWithForeignKeyConstraints:(BOOL)foreignKeyConstraints busyTimeout:(int32_t)busyTimeout pageSize:(NCSDKInt * _Nullable)pageSize basePath:(NSString * _Nullable)basePath synchronousFlag:(NCSDKSqliter_driverSynchronousFlag * _Nullable)synchronousFlag recursiveTriggers:(BOOL)recursiveTriggers lookasideSlotSize:(int32_t)lookasideSlotSize lookasideSlotCount:(int32_t)lookasideSlotCount __attribute__((swift_name("init(foreignKeyConstraints:busyTimeout:pageSize:basePath:synchronousFlag:recursiveTriggers:lookasideSlotSize:lookasideSlotCount:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKInt * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSqliter_driverSynchronousFlag * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSqliter_driverDatabaseConfigurationExtended *)doCopyForeignKeyConstraints:(BOOL)foreignKeyConstraints busyTimeout:(int32_t)busyTimeout pageSize:(NCSDKInt * _Nullable)pageSize basePath:(NSString * _Nullable)basePath synchronousFlag:(NCSDKSqliter_driverSynchronousFlag * _Nullable)synchronousFlag recursiveTriggers:(BOOL)recursiveTriggers lookasideSlotSize:(int32_t)lookasideSlotSize lookasideSlotCount:(int32_t)lookasideSlotCount __attribute__((swift_name("doCopy(foreignKeyConstraints:busyTimeout:pageSize:basePath:synchronousFlag:recursiveTriggers:lookasideSlotSize:lookasideSlotCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable basePath __attribute__((swift_name("basePath")));
@property (readonly) int32_t busyTimeout __attribute__((swift_name("busyTimeout")));
@property (readonly) BOOL foreignKeyConstraints __attribute__((swift_name("foreignKeyConstraints")));
@property (readonly) int32_t lookasideSlotCount __attribute__((swift_name("lookasideSlotCount")));
@property (readonly) int32_t lookasideSlotSize __attribute__((swift_name("lookasideSlotSize")));
@property (readonly) NCSDKInt * _Nullable pageSize __attribute__((swift_name("pageSize")));
@property (readonly) BOOL recursiveTriggers __attribute__((swift_name("recursiveTriggers")));
@property (readonly) NCSDKSqliter_driverSynchronousFlag * _Nullable synchronousFlag __attribute__((swift_name("synchronousFlag")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sqliter_driverDatabaseConfiguration.Logging")))
@interface NCSDKSqliter_driverDatabaseConfigurationLogging : NCSDKBase
- (instancetype)initWithLogger:(id<NCSDKSqliter_driverLogger>)logger verboseDataCalls:(BOOL)verboseDataCalls __attribute__((swift_name("init(logger:verboseDataCalls:)"))) __attribute__((objc_designated_initializer));
- (id<NCSDKSqliter_driverLogger>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSqliter_driverDatabaseConfigurationLogging *)doCopyLogger:(id<NCSDKSqliter_driverLogger>)logger verboseDataCalls:(BOOL)verboseDataCalls __attribute__((swift_name("doCopy(logger:verboseDataCalls:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<NCSDKSqliter_driverLogger> logger __attribute__((swift_name("logger")));
@property (readonly) BOOL verboseDataCalls __attribute__((swift_name("verboseDataCalls")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sqliter_driverDatabaseConfiguration.Lifecycle")))
@interface NCSDKSqliter_driverDatabaseConfigurationLifecycle : NCSDKBase
- (instancetype)initWithOnCreateConnection:(void (^)(id<NCSDKSqliter_driverDatabaseConnection>))onCreateConnection onCloseConnection:(void (^)(id<NCSDKSqliter_driverDatabaseConnection>))onCloseConnection __attribute__((swift_name("init(onCreateConnection:onCloseConnection:)"))) __attribute__((objc_designated_initializer));
- (void (^)(id<NCSDKSqliter_driverDatabaseConnection>))component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(id<NCSDKSqliter_driverDatabaseConnection>))component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSqliter_driverDatabaseConfigurationLifecycle *)doCopyOnCreateConnection:(void (^)(id<NCSDKSqliter_driverDatabaseConnection>))onCreateConnection onCloseConnection:(void (^)(id<NCSDKSqliter_driverDatabaseConnection>))onCloseConnection __attribute__((swift_name("doCopy(onCreateConnection:onCloseConnection:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^onCloseConnection)(id<NCSDKSqliter_driverDatabaseConnection>) __attribute__((swift_name("onCloseConnection")));
@property (readonly) void (^onCreateConnection)(id<NCSDKSqliter_driverDatabaseConnection>) __attribute__((swift_name("onCreateConnection")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sqliter_driverDatabaseConfiguration.Encryption")))
@interface NCSDKSqliter_driverDatabaseConfigurationEncryption : NCSDKBase
- (instancetype)initWithKey:(NSString * _Nullable)key rekey:(NSString * _Nullable)rekey __attribute__((swift_name("init(key:rekey:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKSqliter_driverDatabaseConfigurationEncryption *)doCopyKey:(NSString * _Nullable)key rekey:(NSString * _Nullable)rekey __attribute__((swift_name("doCopy(key:rekey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable key __attribute__((swift_name("key")));
@property (readonly) NSString * _Nullable rekey __attribute__((swift_name("rekey")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol NCSDKKotlinKType
@required
@property (readonly) NSArray<NCSDKKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<NCSDKKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol NCSDKKtor_client_coreHttpClientEngine <NCSDKKotlinx_coroutines_coreCoroutineScope, NCSDKKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(NCSDKKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(NCSDKKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(NCSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) NCSDKKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) NCSDKKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<NCSDKKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface NCSDKKtor_client_coreHttpClientEngineConfig : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property NCSDKKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface NCSDKKtor_client_coreHttpClientConfig<T> : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NCSDKKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(NCSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<NCSDKKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(NCSDKKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(NCSDKKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol NCSDKKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol NCSDKKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(NCSDKKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(NCSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(NCSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(NCSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(NCSDKKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(NCSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(NCSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(NCSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<NCSDKKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface NCSDKKtor_eventsEvents : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(NCSDKKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<NCSDKKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(NCSDKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(NCSDKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface NCSDKKtor_utilsPipeline<TSubject, TContext> : NCSDKBase
- (instancetype)initWithPhase:(NCSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<NCSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(NCSDKKotlinArray<NCSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(NCSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(NCSDKKtor_utilsPipelinePhase *)reference phase:(NCSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(NCSDKKtor_utilsPipelinePhase *)reference phase:(NCSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(NCSDKKtor_utilsPipelinePhase *)phase block:(id<NCSDKKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<NCSDKKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(NCSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(NCSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(NCSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(NCSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<NCSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<NCSDKKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface NCSDKKtor_client_coreHttpReceivePipeline : NCSDKKtor_utilsPipeline<NCSDKKtor_client_coreHttpResponse *, NCSDKKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(NCSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<NCSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(NCSDKKotlinArray<NCSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface NCSDKKtor_client_coreHttpRequestPipeline : NCSDKKtor_utilsPipeline<id, NCSDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(NCSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<NCSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(NCSDKKotlinArray<NCSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface NCSDKKtor_client_coreHttpResponsePipeline : NCSDKKtor_utilsPipeline<NCSDKKtor_client_coreHttpResponseContainer *, NCSDKKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(NCSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<NCSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(NCSDKKotlinArray<NCSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface NCSDKKtor_client_coreHttpSendPipeline : NCSDKKtor_utilsPipeline<id, NCSDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(NCSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<NCSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(NCSDKKotlinArray<NCSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface NCSDKKotlinx_datetimeInstantCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (NCSDKKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (NCSDKKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (NCSDKKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (NCSDKKotlinx_datetimeInstant *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NCSDKKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) NCSDKKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface NCSDKKotlinx_serialization_jsonJsonDefault : NCSDKKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface NCSDKKotlinx_serialization_jsonJsonConfiguration : NCSDKBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol NCSDKKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<NCSDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface NCSDKKotlinAbstractCoroutineContextKey<B, E> : NCSDKBase <NCSDKKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<NCSDKKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<NCSDKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface NCSDKKotlinx_coroutines_coreCoroutineDispatcherKey : NCSDKKotlinAbstractCoroutineContextKey<id<NCSDKKotlinContinuationInterceptor>, NCSDKKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<NCSDKKotlinCoroutineContextKey>)baseKey safeCast:(id<NCSDKKotlinCoroutineContextElement> _Nullable (^)(id<NCSDKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol NCSDKKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol NCSDKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<NCSDKKotlinKClass>)kClass provider:(id<NCSDKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<NCSDKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<NCSDKKotlinKClass>)kClass serializer:(id<NCSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<NCSDKKotlinKClass>)baseClass actualClass:(id<NCSDKKotlinKClass>)actualClass actualSerializer:(id<NCSDKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<NCSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<NCSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<NCSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<NCSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<NCSDKKotlinKClass>)baseClass defaultSerializerProvider:(id<NCSDKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchResultDestructured")))
@interface NCSDKKotlinMatchResultDestructured : NCSDKBase
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (NSArray<NSString *> *)toList __attribute__((swift_name("toList()")));
@property (readonly) id<NCSDKKotlinMatchResult> match __attribute__((swift_name("match")));
@end;

__attribute__((swift_name("KotlinIterable")))
@protocol NCSDKKotlinIterable
@required
- (id<NCSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("KotlinCollection")))
@protocol NCSDKKotlinCollection <NCSDKKotlinIterable>
@required
- (BOOL)containsElement:(id _Nullable)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly, getter=size_) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinMatchGroupCollection")))
@protocol NCSDKKotlinMatchGroupCollection <NCSDKKotlinCollection>
@required
- (NCSDKKotlinMatchGroup * _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
@end;

__attribute__((swift_name("KotlinIntProgression")))
@interface NCSDKKotlinIntProgression : NCSDKBase <NCSDKKotlinIterable>
@property (class, readonly, getter=companion) NCSDKKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NCSDKKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end;

__attribute__((swift_name("KotlinClosedRange")))
@protocol NCSDKKotlinClosedRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface NCSDKKotlinIntRange : NCSDKKotlinIntProgression <NCSDKKotlinClosedRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue_:(NCSDKInt *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) NCSDKInt *start __attribute__((swift_name("start")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol NCSDKKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<NCSDKKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(NCSDKKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(NCSDKKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<NCSDKKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol NCSDKKotlinx_coroutines_coreParentJob <NCSDKKotlinx_coroutines_coreJob>
@required
- (NCSDKKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol NCSDKKotlinSuspendFunction0 <NCSDKKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sqliter_driverFieldType.Companion")))
@interface NCSDKSqliter_driverFieldTypeCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKSqliter_driverFieldTypeCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKSqliter_driverFieldType *)forCodeNativeCode:(int32_t)nativeCode __attribute__((swift_name("forCode(nativeCode:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sqliter_driverJournalMode.Companion")))
@interface NCSDKSqliter_driverJournalModeCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKSqliter_driverJournalModeCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKSqliter_driverJournalMode *)forStringS:(NSString *)s __attribute__((swift_name("forString(s:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sqliter_driverSynchronousFlag")))
@interface NCSDKSqliter_driverSynchronousFlag : NCSDKKotlinEnum<NCSDKSqliter_driverSynchronousFlag *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKSqliter_driverSynchronousFlag *off __attribute__((swift_name("off")));
@property (class, readonly) NCSDKSqliter_driverSynchronousFlag *normal __attribute__((swift_name("normal")));
@property (class, readonly) NCSDKSqliter_driverSynchronousFlag *full __attribute__((swift_name("full")));
@property (class, readonly) NCSDKSqliter_driverSynchronousFlag *extra __attribute__((swift_name("extra")));
+ (NCSDKKotlinArray<NCSDKSqliter_driverSynchronousFlag *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Sqliter_driverLogger")))
@protocol NCSDKSqliter_driverLogger
@required
- (void)eWriteMessage:(NSString *)message exception:(NCSDKKotlinThrowable * _Nullable)exception __attribute__((swift_name("eWrite(message:exception:)")));
- (void)traceMessage:(NSString *)message __attribute__((swift_name("trace(message:)")));
- (void)vWriteMessage:(NSString *)message __attribute__((swift_name("vWrite(message:)")));
@property (readonly) BOOL eActive __attribute__((swift_name("eActive")));
@property (readonly) BOOL vActive __attribute__((swift_name("vActive")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface NCSDKKotlinKTypeProjection : NCSDKBase
- (instancetype)initWithVariance:(NCSDKKotlinKVariance * _Nullable)variance type:(id<NCSDKKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (NCSDKKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<NCSDKKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKKotlinKTypeProjection *)doCopyVariance:(NCSDKKotlinKVariance * _Nullable)variance type:(id<NCSDKKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<NCSDKKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) NCSDKKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface NCSDKKtor_client_coreHttpRequestData : NCSDKBase
- (instancetype)initWithUrl:(NCSDKKtor_httpUrl *)url method:(NCSDKKtor_httpHttpMethod *)method headers:(id<NCSDKKtor_httpHeaders>)headers body:(NCSDKKtor_httpOutgoingContent *)body executionContext:(id<NCSDKKotlinx_coroutines_coreJob>)executionContext attributes:(id<NCSDKKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<NCSDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<NCSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) NCSDKKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<NCSDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<NCSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) NCSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) NCSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface NCSDKKtor_client_coreHttpResponseData : NCSDKBase
- (instancetype)initWithStatusCode:(NCSDKKtor_httpHttpStatusCode *)statusCode requestTime:(NCSDKKtor_utilsGMTDate *)requestTime headers:(id<NCSDKKtor_httpHeaders>)headers version:(NCSDKKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<NCSDKKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<NCSDKKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<NCSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) NCSDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) NCSDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) NCSDKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface NCSDKKtor_client_coreProxyConfig : NCSDKBase
- (instancetype)initWithUrl:(NCSDKKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol NCSDKKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(NCSDKKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) NCSDKKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface NCSDKKtor_utilsAttributeKey<T> : NCSDKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface NCSDKKtor_eventsEventDefinition<T> : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface NCSDKKtor_utilsPipelinePhase : NCSDKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface NCSDKKtor_client_coreHttpReceivePipelinePhases : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol NCSDKKtor_httpHttpMessage
@required
@property (readonly) id<NCSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface NCSDKKtor_client_coreHttpResponse : NCSDKBase <NCSDKKtor_httpHttpMessage, NCSDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<NCSDKKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) NCSDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) NCSDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) NCSDKKtor_httpHttpProtocolVersion *version_ __attribute__((swift_name("version_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface NCSDKKotlinUnit : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface NCSDKKtor_client_coreHttpRequestPipelinePhases : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol NCSDKKtor_httpHttpMessageBuilder
@required
@property (readonly) NCSDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface NCSDKKtor_client_coreHttpRequestBuilder : NCSDKBase <NCSDKKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) NCSDKKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (NCSDKKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<NCSDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<NCSDKKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<NCSDKKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (NCSDKKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(NCSDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (NCSDKKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(NCSDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(NCSDKKtor_httpURLBuilder *, NCSDKKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<NCSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property NCSDKKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<NCSDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) NCSDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property NCSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) NCSDKKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface NCSDKKtor_client_coreHttpResponsePipelinePhases : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface NCSDKKtor_client_coreHttpResponseContainer : NCSDKBase
- (instancetype)initWithExpectedType:(NCSDKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (NCSDKKtor_utilsTypeInfo *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(NCSDKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface NCSDKKtor_client_coreHttpClientCall : NCSDKBase <NCSDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(NCSDKKtor_client_coreHttpClient *)client requestData:(NCSDKKtor_client_coreHttpRequestData *)requestData responseData:(NCSDKKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(NCSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(NCSDKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<NCSDKKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<NCSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) NCSDKKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<NCSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<NCSDKKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property NCSDKKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface NCSDKKtor_client_coreHttpSendPipelinePhases : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) NCSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchGroup")))
@interface NCSDKKotlinMatchGroup : NCSDKBase
- (instancetype)initWithValue:(NSString *)value range:(NCSDKKotlinIntRange *)range __attribute__((swift_name("init(value:range:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKKotlinIntRange *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKKotlinMatchGroup *)doCopyValue:(NSString *)value range:(NCSDKKotlinIntRange *)range __attribute__((swift_name("doCopy(value:range:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface NCSDKKotlinIntProgressionCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface NCSDKKotlinIntRangeCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface NCSDKKotlinx_coroutines_coreAtomicDesc : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(NCSDKKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(NCSDKKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property NCSDKKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface NCSDKKotlinx_coroutines_coreOpDescriptor : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(NCSDKKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : NCSDKKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) NCSDKKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface NCSDKKotlinKVariance : NCSDKKotlinEnum<NCSDKKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) NCSDKKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) NCSDKKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) NCSDKKotlinKVariance *out __attribute__((swift_name("out")));
+ (NCSDKKotlinArray<NCSDKKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface NCSDKKotlinKTypeProjectionCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKKotlinKTypeProjection *)contravariantType:(id<NCSDKKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (NCSDKKotlinKTypeProjection *)covariantType:(id<NCSDKKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (NCSDKKotlinKTypeProjection *)invariantType:(id<NCSDKKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) NCSDKKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface NCSDKKtor_httpUrl : NCSDKBase
@property (class, readonly, getter=companion) NCSDKKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<NCSDKKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) NCSDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface NCSDKKtor_httpHttpMethod : NCSDKBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol NCSDKKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<NCSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol NCSDKKtor_httpHeaders <NCSDKKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface NCSDKKtor_httpOutgoingContent : NCSDKBase
- (id _Nullable)getPropertyKey:(NCSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(NCSDKKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<NCSDKKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) NCSDKLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) NCSDKKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<NCSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) NCSDKKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface NCSDKKtor_httpHttpStatusCode : NCSDKBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (NCSDKKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface NCSDKKtor_utilsGMTDate : NCSDKBase <NCSDKKotlinComparable>
@property (class, readonly, getter=companion) NCSDKKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(NCSDKKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKKtor_utilsMonth *)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(NCSDKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(NCSDKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) NCSDKKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) NCSDKKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface NCSDKKtor_httpHttpProtocolVersion : NCSDKBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol NCSDKKtor_ioByteReadChannel
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(NCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(NCSDKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(NCSDKKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(NCSDKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(NCSDKKtor_ioChunkBuffer *)dst completionHandler:(void (^)(NCSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(NCSDKKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NCSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(NCSDKKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NCSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NCSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(NCSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(NCSDKByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(NCSDKDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(NCSDKFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(NCSDKKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(NCSDKKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(NCSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(NCSDKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(NCSDKKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(NCSDKKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<NCSDKKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(NCSDKShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<NCSDKKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<NCSDKKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(NCSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) NCSDKKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol NCSDKKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<NCSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<NCSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<NCSDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<NCSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface NCSDKKtor_utilsStringValuesBuilderImpl : NCSDKBase <NCSDKKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<NCSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<NCSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<NCSDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<NCSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) NCSDKMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface NCSDKKtor_httpHeadersBuilder : NCSDKKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<NCSDKKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface NCSDKKtor_client_coreHttpRequestBuilderCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface NCSDKKtor_httpURLBuilder : NCSDKBase
- (instancetype)initWithProtocol:(NCSDKKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<NCSDKKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (NCSDKKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<NCSDKKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<NCSDKKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property NCSDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface NCSDKKtor_client_coreHttpClientCallCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol NCSDKKtor_client_coreHttpRequest <NCSDKKtor_httpHttpMessage, NCSDKKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<NCSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) NCSDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) NCSDKKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) NCSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) NCSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface NCSDKKotlinx_coroutines_coreAtomicOp<__contravariant T> : NCSDKKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) NCSDKKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode : NCSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(NCSDKBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(NCSDKBoolean *(^)(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(NCSDKBoolean *(^)(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(NCSDKBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(NCSDKBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next__) id next __attribute__((swift_name("next")));
@property (readonly) NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : NCSDKKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(NCSDKKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(NCSDKKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(NCSDKKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface NCSDKKtor_httpUrlCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol NCSDKKtor_httpParameters <NCSDKKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface NCSDKKtor_httpURLProtocol : NCSDKBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface NCSDKKtor_httpHttpMethodCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<NCSDKKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) NCSDKKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) NCSDKKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) NCSDKKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) NCSDKKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) NCSDKKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) NCSDKKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) NCSDKKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol NCSDKKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value_ __attribute__((swift_name("value_")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface NCSDKKtor_httpHeaderValueWithParameters : NCSDKBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<NCSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<NCSDKKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface NCSDKKtor_httpContentType : NCSDKKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<NCSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<NCSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(NCSDKKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (NCSDKKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (NCSDKKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface NCSDKKtor_httpHttpStatusCodeCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) NCSDKKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<NCSDKKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface NCSDKKtor_utilsGMTDateCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface NCSDKKtor_utilsWeekDay : NCSDKKotlinEnum<NCSDKKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NCSDKKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) NCSDKKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) NCSDKKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) NCSDKKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) NCSDKKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) NCSDKKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) NCSDKKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (NCSDKKotlinArray<NCSDKKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface NCSDKKtor_utilsMonth : NCSDKKotlinEnum<NCSDKKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) NCSDKKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) NCSDKKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) NCSDKKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) NCSDKKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) NCSDKKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) NCSDKKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) NCSDKKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) NCSDKKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) NCSDKKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) NCSDKKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) NCSDKKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) NCSDKKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (NCSDKKotlinArray<NCSDKKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface NCSDKKtor_httpHttpProtocolVersionCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (NCSDKKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) NCSDKKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) NCSDKKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) NCSDKKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) NCSDKKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) NCSDKKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface NCSDKKtor_ioMemory : NCSDKBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(NCSDKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(NCSDKKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (NCSDKKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (NCSDKKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface NCSDKKtor_ioBuffer : NCSDKBase
- (instancetype)initWithMemory:(NCSDKKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (NCSDKKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(NCSDKKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) NCSDKKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface NCSDKKtor_ioChunkBuffer : NCSDKKtor_ioBuffer
- (instancetype)initWithMemory:(NCSDKKtor_ioMemory *)memory origin:(NCSDKKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<NCSDKKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(NCSDKKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (NCSDKKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (NCSDKKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<NCSDKKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next__) NCSDKKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) NCSDKKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@interface NCSDKKtor_ioInput : NCSDKBase <NCSDKKtor_ioCloseable>
- (instancetype)initWithHead:(NCSDKKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<NCSDKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) NCSDKKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close_()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (NCSDKKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(NCSDKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(NCSDKKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(NCSDKKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<NCSDKKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<NCSDKKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<NCSDKKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface NCSDKKtor_ioByteReadPacket : NCSDKKtor_ioInput
- (instancetype)initWithHead:(NCSDKKtor_ioChunkBuffer *)head pool:(id<NCSDKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(NCSDKKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<NCSDKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) NCSDKKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (NCSDKKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (NCSDKKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(NCSDKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol NCSDKKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (NCSDKKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface NCSDKKtor_httpURLBuilderCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol NCSDKKtor_httpParametersBuilder <NCSDKKtor_utilsStringValuesBuilder>
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(NCSDKKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(NCSDKKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) NCSDKKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface NCSDKKtor_httpURLProtocolCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) NCSDKKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) NCSDKKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) NCSDKKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) NCSDKKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) NCSDKKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, NCSDKKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface NCSDKKtor_httpHeaderValueParam : NCSDKBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NCSDKKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface NCSDKKtor_httpHeaderValueWithParametersCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<NCSDKKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface NCSDKKtor_httpContentTypeCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) NCSDKKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface NCSDKKtor_utilsWeekDayCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (NCSDKKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface NCSDKKtor_utilsMonthCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (NCSDKKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (NCSDKKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface NCSDKKtor_ioMemoryCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface NCSDKKtor_ioBufferCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol NCSDKKtor_ioObjectPool <NCSDKKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface NCSDKKtor_ioChunkBufferCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<NCSDKKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<NCSDKKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface NCSDKKtor_ioInputCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface NCSDKKtor_ioByteReadPacketCompanion : NCSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) NCSDKKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NCSDKKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
