// Generated by bin/class-dump/dump.rb

#if LOAD_XCTEST_PRIVATE_HEADERS
#import "XCTest/MXMInstrumental-Protocol.h"
#import "XCTest/NSArray-XCTestAdditions.h"
#import "XCTest/NSBundle-XCTestAdditions.h"
#import "XCTest/NSError-XCTFutureCancelation.h"
#import "XCTest/NSException-XCTestAdditions.h"
#import "XCTest/NSKeyedArchiver-XCTestAdditions.h"
#import "XCTest/NSKeyedUnarchiver-XCTestAdditions.h"
#import "XCTest/NSMutableArray-XCTestAdditions.h"
#import "XCTest/NSSet-XCTestAdditions.h"
#import "XCTest/NSString-XCTAdditions.h"
#import "XCTest/NSThread-XCTContext.h"
#import "XCTest/NSValue-XCTestAdditions.h"
#import "XCTest/UIGestureRecognizer-RecordingAdditions.h"
#import "XCTest/UILongPressGestureRecognizer-RecordingAdditions.h"
#import "XCTest/UIPanGestureRecognizer-RecordingAdditions.h"
#import "XCTest/UIPinchGestureRecognizer-RecordingAdditions.h"
#import "XCTest/UISwipeGestureRecognizer-RecordingAdditions.h"
#import "XCTest/UITapGestureRecognizer-RecordingAdditions.h"
#import "XCTest/XCAXClient_iOS.h"
#import "XCTest/XCActivityRecord.h"
#import "XCTest/XCApplicationQuery.h"
#import "XCTest/XCDebugLogDelegate-Protocol.h"
#import "XCTest/XCElementSnapshot-Hitpoint.h"
#import "XCTest/XCPointerEvent.h"
#import "XCTest/XCPointerEventPath.h"
#import "XCTest/XCSourceCodeRecording.h"
#import "XCTest/XCSourceCodeTreeNode.h"
#import "XCTest/XCSourceCodeTreeNodeEnumerator.h"
#import "XCTest/XCSymbolicationRecord.h"
#import "XCTest/XCSynthesizedEventRecord.h"
#import "XCTest/XCTASDebugLogDelegate-Protocol.h"
#import "XCTest/XCTActivity-Protocol.h"
#import "XCTest/XCTActivityAggregationRecord.h"
#import "XCTest/XCTActivityRecordStack.h"
#import "XCTest/XCTAggregateSuiteRunStatistics.h"
#import "XCTest/XCTAggregateSuiteRunStatisticsRecord.h"
#import "XCTest/XCTAttachment.h"
#import "XCTest/XCTAttachmentManager.h"
#import "XCTest/XCTAutomationTarget-Protocol.h"
#import "XCTest/XCTBlockingQueue.h"
#import "XCTest/XCTCPUMetric.h"
#import "XCTest/XCTClockMetric.h"
#import "XCTest/XCTCompoundExpectation.h"
#import "XCTest/XCTContext.h"
#import "XCTest/XCTDarwinNotificationExpectation.h"
#import "XCTest/XCTElementSnapshotAttributeDataSource-Protocol.h"
#import "XCTest/XCTElementSnapshotProvider-Protocol.h"
#import "XCTest/XCTFailure.h"
#import "XCTest/XCTFailureLocation.h"
#import "XCTest/XCTFixedPriorityTestScheduler.h"
#import "XCTest/XCTFuture.h"
#import "XCTest/XCTImage.h"
#import "XCTest/XCTKVOExpectation.h"
#import "XCTest/XCTMacCatalystStatusProviding-Protocol.h"
#import "XCTest/XCTMeasureOptions.h"
#import "XCTest/XCTMeasurement.h"
#import "XCTest/XCTMemoryChecker.h"
#import "XCTest/XCTMemoryCheckerDelegate-Protocol.h"
#import "XCTest/XCTMemoryMarker.h"
#import "XCTest/XCTMemoryMetric.h"
#import "XCTest/XCTMetric-Protocol.h"
#import "XCTest/XCTMetricInstrumentalAdapter.h"
#import "XCTest/XCTMetric_Private-Protocol.h"
#import "XCTest/XCTNSNotificationExpectation.h"
#import "XCTest/XCTNSPredicateExpectation.h"
#import "XCTest/XCTNSPredicateExpectationObject-Protocol.h"
#import "XCTest/XCTOSSignpostMetric.h"
#import "XCTest/XCTPerformanceMeasurement.h"
#import "XCTest/XCTPerformanceMeasurementTimestamp.h"
#import "XCTest/XCTPromise.h"
#import "XCTest/XCTResult.h"
#import "XCTest/XCTRunnerAutomationSession-Protocol.h"
#import "XCTest/XCTRunnerAutomationSession.h"
#import "XCTest/XCTRunnerDTServiceHubSession.h"
#import "XCTest/XCTRunnerDaemonSession.h"
#import "XCTest/XCTRunnerDaemonSessionEventRequest.h"
#import "XCTest/XCTRunnerIDESession.h"
#import "XCTest/XCTRunnerIDESessionDelegate-Protocol.h"
#import "XCTest/XCTSerializedTransportWrapper.h"
#import "XCTest/XCTSkippedTestContext.h"
#import "XCTest/XCTStorageMetric.h"
#import "XCTest/XCTSwiftErrorObservation.h"
#import "XCTest/XCTTestIdentifier.h"
#import "XCTest/XCTTestRunSession.h"
#import "XCTest/XCTTestRunSessionDelegate-Protocol.h"
#import "XCTest/XCTTestScheduler-Protocol.h"
#import "XCTest/XCTTestSchedulerWorker-Protocol.h"
#import "XCTest/XCTTestWorker-Protocol.h"
#import "XCTest/XCTUniformTypeIdentifier.h"
#import "XCTest/XCTWaiter.h"
#import "XCTest/XCTWaiterDelegate-Protocol.h"
#import "XCTest/XCTWaiterManagement-Protocol.h"
#import "XCTest/XCTWaiterManager.h"
#import "XCTest/XCTest.h"
#import "XCTest/XCTestCase.h"
#import "XCTest/XCTestCaseRun.h"
#import "XCTest/XCTestCaseSuite.h"
#import "XCTest/XCTestConfiguration.h"
#import "XCTest/XCTestDriver.h"
#import "XCTest/XCTestDriverInterface-Protocol.h"
#import "XCTest/XCTestExpectation.h"
#import "XCTest/XCTestExpectationDelegate-Protocol.h"
#import "XCTest/XCTestExpectationWaiter.h"
#import "XCTest/XCTestLog.h"
#import "XCTest/XCTestManager_IDEInterface-Protocol.h"
#import "XCTest/XCTestManager_ManagerInterface-Protocol.h"
#import "XCTest/XCTestManager_ProtectedResources-Protocol.h"
#import "XCTest/XCTestManager_TestsInterface-Protocol.h"
#import "XCTest/XCTestMisuseObserver.h"
#import "XCTest/XCTestObservation-Protocol.h"
#import "XCTest/XCTestObservationCenter.h"
#import "XCTest/XCTestObserver.h"
#import "XCTest/XCTestProbe.h"
#import "XCTest/XCTestRun.h"
#import "XCTest/XCTestSuite.h"
#import "XCTest/XCTestSuiteRun.h"
#import "XCTest/XCTestWaiter.h"
#import "XCTest/XCUIAXNotificationHandling-Protocol.h"
#import "XCTest/XCUIAccessibilityAction.h"
#import "XCTest/XCUIAccessibilityInterface-Protocol.h"
#import "XCTest/XCUIApplication.h"
#import "XCTest/XCUIApplicationAutomationSessionProviding-Protocol.h"
#import "XCTest/XCUIApplicationImpl.h"
#import "XCTest/XCUIApplicationImplDepot.h"
#import "XCTest/XCUIApplicationManaging-Protocol.h"
#import "XCTest/XCUIApplicationMonitor-Protocol.h"
#import "XCTest/XCUIApplicationMonitor.h"
#import "XCTest/XCUIApplicationOpenRequest.h"
#import "XCTest/XCUIApplicationPlatformServicesProviderDelegate-Protocol.h"
#import "XCTest/XCUIApplicationProcess.h"
#import "XCTest/XCUIApplicationProcessDelegate-Protocol.h"
#import "XCTest/XCUIApplicationProcessTracker-Protocol.h"
#import "XCTest/XCUIApplicationRegistry.h"
#import "XCTest/XCUIApplicationRegistryRecord.h"
#import "XCTest/XCUIApplicationSpecifier.h"
#import "XCTest/XCUICoordinate.h"
#import "XCTest/XCUIDevice.h"
#import "XCTest/XCUIDeviceEventAndStateInterface-Protocol.h"
#import "XCTest/XCUIElement.h"
#import "XCTest/XCUIElementAttributes-Protocol.h"
#import "XCTest/XCUIElementAttributesPrivate-Protocol.h"
#import "XCTest/XCUIElementHitPointCoordinate.h"
#import "XCTest/XCUIElementQuery.h"
#import "XCTest/XCUIElementSnapshot-Protocol.h"
#import "XCTest/XCUIElementSnapshotProviding-Protocol.h"
#import "XCTest/XCUIElementTypeQueryProvider-Protocol.h"
#import "XCTest/XCUIEventSynthesisRequest-Protocol.h"
#import "XCTest/XCUIEventSynthesizing-Protocol.h"
#import "XCTest/XCUIHitPointResult.h"
#import "XCTest/XCUIInterruptionHandler.h"
#import "XCTest/XCUIInterruptionMonitor.h"
#import "XCTest/XCUIInterruptionMonitoring-Protocol.h"
#import "XCTest/XCUILocalDeviceScreenDataSource.h"
#import "XCTest/XCUIPlatformApplicationManager.h"
#import "XCTest/XCUIPlatformApplicationServicesProviding-Protocol.h"
#import "XCTest/XCUIPoint.h"
#import "XCTest/XCUIPointTransformationRequest.h"
#import "XCTest/XCUIRecorderNodeFinder.h"
#import "XCTest/XCUIRecorderNodeFinderMatch.h"
#import "XCTest/XCUIRecorderTimingMessage.h"
#import "XCTest/XCUIRecorderUtilities.h"
#import "XCTest/XCUIRect.h"
#import "XCTest/XCUIRectTransformationRequest.h"
#import "XCTest/XCUIRemoteAccessibilityInterface-Protocol.h"
#import "XCTest/XCUIRemoteSiriInterface-Protocol.h"
#import "XCTest/XCUIResetAuthorizationStatusOfProtectedResourcesInterface-Protocol.h"
#import "XCTest/XCUIScreen.h"
#import "XCTest/XCUIScreenDataSource-Protocol.h"
#import "XCTest/XCUIScreenshot.h"
#import "XCTest/XCUIScreenshotProviding-Protocol.h"
#import "XCTest/XCUISiriService.h"
#import "XCTest/XCUISnapshotGenerationTracker.h"
#import "XCTest/XCUITransformParameters.h"
#import "XCTest/XCUIXcodeApplicationManaging-Protocol.h"
#import "XCTest/_XCTRunnerDaemonSessionDummyExportedObject.h"
#import "XCTest/_XCTSkipFailureException.h"
#import "XCTest/_XCTestCaseInterruptionException.h"
#import "XCTest/_XCTestObservationPrivate-Protocol.h"
#endif
