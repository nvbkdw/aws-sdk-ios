//
// Copyright 2010-2019 Amazon.com, Inc. or its affiliates. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License").
// You may not use this file except in compliance with the License.
// A copy of the License is located at
//
// http://aws.amazon.com/apache2.0
//
// or in the "license" file accompanying this file. This file is distributed
// on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing
// permissions and limitations under the License.
//

#import <Foundation/Foundation.h>
#import <AWSCore/AWSNetworking.h>
#import <AWSCore/AWSModel.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *const AWSAutoScalingErrorDomain;

typedef NS_ENUM(NSInteger, AWSAutoScalingErrorType) {
    AWSAutoScalingErrorUnknown,
    AWSAutoScalingErrorAlreadyExists,
    AWSAutoScalingErrorInvalidNextToken,
    AWSAutoScalingErrorLimitExceeded,
    AWSAutoScalingErrorResourceContention,
    AWSAutoScalingErrorResourceInUse,
    AWSAutoScalingErrorScalingActivityInProgress,
    AWSAutoScalingErrorServiceLinkedRoleFailure,
};

typedef NS_ENUM(NSInteger, AWSAutoScalingLifecycleState) {
    AWSAutoScalingLifecycleStateUnknown,
    AWSAutoScalingLifecycleStatePending,
    AWSAutoScalingLifecycleStatePendingWait,
    AWSAutoScalingLifecycleStatePendingProceed,
    AWSAutoScalingLifecycleStateQuarantined,
    AWSAutoScalingLifecycleStateInService,
    AWSAutoScalingLifecycleStateTerminating,
    AWSAutoScalingLifecycleStateTerminatingWait,
    AWSAutoScalingLifecycleStateTerminatingProceed,
    AWSAutoScalingLifecycleStateTerminated,
    AWSAutoScalingLifecycleStateDetaching,
    AWSAutoScalingLifecycleStateDetached,
    AWSAutoScalingLifecycleStateEnteringStandby,
    AWSAutoScalingLifecycleStateStandby,
};

typedef NS_ENUM(NSInteger, AWSAutoScalingMetricStatistic) {
    AWSAutoScalingMetricStatisticUnknown,
    AWSAutoScalingMetricStatisticAverage,
    AWSAutoScalingMetricStatisticMinimum,
    AWSAutoScalingMetricStatisticMaximum,
    AWSAutoScalingMetricStatisticSampleCount,
    AWSAutoScalingMetricStatisticSum,
};

typedef NS_ENUM(NSInteger, AWSAutoScalingMetricType) {
    AWSAutoScalingMetricTypeUnknown,
    AWSAutoScalingMetricTypeASGAverageCPUUtilization,
    AWSAutoScalingMetricTypeASGAverageNetworkIn,
    AWSAutoScalingMetricTypeASGAverageNetworkOut,
    AWSAutoScalingMetricTypeALBRequestCountPerTarget,
};

typedef NS_ENUM(NSInteger, AWSAutoScalingScalingActivityStatusCode) {
    AWSAutoScalingScalingActivityStatusCodeUnknown,
    AWSAutoScalingScalingActivityStatusCodePendingSpotBidPlacement,
    AWSAutoScalingScalingActivityStatusCodeWaitingForSpotInstanceRequestId,
    AWSAutoScalingScalingActivityStatusCodeWaitingForSpotInstanceId,
    AWSAutoScalingScalingActivityStatusCodeWaitingForInstanceId,
    AWSAutoScalingScalingActivityStatusCodePreInService,
    AWSAutoScalingScalingActivityStatusCodeInProgress,
    AWSAutoScalingScalingActivityStatusCodeWaitingForELBConnectionDraining,
    AWSAutoScalingScalingActivityStatusCodeMidLifecycleAction,
    AWSAutoScalingScalingActivityStatusCodeWaitingForInstanceWarmup,
    AWSAutoScalingScalingActivityStatusCodeSuccessful,
    AWSAutoScalingScalingActivityStatusCodeFailed,
    AWSAutoScalingScalingActivityStatusCodeCancelled,
};

@class AWSAutoScalingActivitiesType;
@class AWSAutoScalingActivity;
@class AWSAutoScalingActivityType;
@class AWSAutoScalingAdjustmentType;
@class AWSAutoScalingAlarm;
@class AWSAutoScalingAttachInstancesQuery;
@class AWSAutoScalingAttachLoadBalancerTargetGroupsResultType;
@class AWSAutoScalingAttachLoadBalancerTargetGroupsType;
@class AWSAutoScalingAttachLoadBalancersResultType;
@class AWSAutoScalingAttachLoadBalancersType;
@class AWSAutoScalingAutoScalingGroup;
@class AWSAutoScalingAutoScalingGroupNamesType;
@class AWSAutoScalingAutoScalingGroupsType;
@class AWSAutoScalingAutoScalingInstanceDetails;
@class AWSAutoScalingAutoScalingInstancesType;
@class AWSAutoScalingBatchDeleteScheduledActionAnswer;
@class AWSAutoScalingBatchDeleteScheduledActionType;
@class AWSAutoScalingBatchPutScheduledUpdateGroupActionAnswer;
@class AWSAutoScalingBatchPutScheduledUpdateGroupActionType;
@class AWSAutoScalingBlockDeviceMapping;
@class AWSAutoScalingCompleteLifecycleActionAnswer;
@class AWSAutoScalingCompleteLifecycleActionType;
@class AWSAutoScalingCreateAutoScalingGroupType;
@class AWSAutoScalingCreateLaunchConfigurationType;
@class AWSAutoScalingCreateOrUpdateTagsType;
@class AWSAutoScalingCustomizedMetricSpecification;
@class AWSAutoScalingDeleteAutoScalingGroupType;
@class AWSAutoScalingDeleteLifecycleHookAnswer;
@class AWSAutoScalingDeleteLifecycleHookType;
@class AWSAutoScalingDeleteNotificationConfigurationType;
@class AWSAutoScalingDeletePolicyType;
@class AWSAutoScalingDeleteScheduledActionType;
@class AWSAutoScalingDeleteTagsType;
@class AWSAutoScalingDescribeAccountLimitsAnswer;
@class AWSAutoScalingDescribeAdjustmentTypesAnswer;
@class AWSAutoScalingDescribeAutoScalingInstancesType;
@class AWSAutoScalingDescribeAutoScalingNotificationTypesAnswer;
@class AWSAutoScalingDescribeLifecycleHookTypesAnswer;
@class AWSAutoScalingDescribeLifecycleHooksAnswer;
@class AWSAutoScalingDescribeLifecycleHooksType;
@class AWSAutoScalingDescribeLoadBalancerTargetGroupsRequest;
@class AWSAutoScalingDescribeLoadBalancerTargetGroupsResponse;
@class AWSAutoScalingDescribeLoadBalancersRequest;
@class AWSAutoScalingDescribeLoadBalancersResponse;
@class AWSAutoScalingDescribeMetricCollectionTypesAnswer;
@class AWSAutoScalingDescribeNotificationConfigurationsAnswer;
@class AWSAutoScalingDescribeNotificationConfigurationsType;
@class AWSAutoScalingDescribePoliciesType;
@class AWSAutoScalingDescribeScalingActivitiesType;
@class AWSAutoScalingDescribeScheduledActionsType;
@class AWSAutoScalingDescribeTagsType;
@class AWSAutoScalingDescribeTerminationPolicyTypesAnswer;
@class AWSAutoScalingDetachInstancesAnswer;
@class AWSAutoScalingDetachInstancesQuery;
@class AWSAutoScalingDetachLoadBalancerTargetGroupsResultType;
@class AWSAutoScalingDetachLoadBalancerTargetGroupsType;
@class AWSAutoScalingDetachLoadBalancersResultType;
@class AWSAutoScalingDetachLoadBalancersType;
@class AWSAutoScalingDisableMetricsCollectionQuery;
@class AWSAutoScalingEbs;
@class AWSAutoScalingEnableMetricsCollectionQuery;
@class AWSAutoScalingEnabledMetric;
@class AWSAutoScalingEnterStandbyAnswer;
@class AWSAutoScalingEnterStandbyQuery;
@class AWSAutoScalingExecutePolicyType;
@class AWSAutoScalingExitStandbyAnswer;
@class AWSAutoScalingExitStandbyQuery;
@class AWSAutoScalingFailedScheduledUpdateGroupActionRequest;
@class AWSAutoScalingFilter;
@class AWSAutoScalingInstance;
@class AWSAutoScalingInstanceMonitoring;
@class AWSAutoScalingInstancesDistribution;
@class AWSAutoScalingLaunchConfiguration;
@class AWSAutoScalingLaunchConfigurationNameType;
@class AWSAutoScalingLaunchConfigurationNamesType;
@class AWSAutoScalingLaunchConfigurationsType;
@class AWSAutoScalingLaunchTemplate;
@class AWSAutoScalingLaunchTemplateOverrides;
@class AWSAutoScalingLaunchTemplateSpecification;
@class AWSAutoScalingLifecycleHook;
@class AWSAutoScalingLifecycleHookSpecification;
@class AWSAutoScalingLoadBalancerState;
@class AWSAutoScalingLoadBalancerTargetGroupState;
@class AWSAutoScalingMetricCollectionType;
@class AWSAutoScalingMetricDimension;
@class AWSAutoScalingMetricGranularityType;
@class AWSAutoScalingMixedInstancesPolicy;
@class AWSAutoScalingNotificationConfiguration;
@class AWSAutoScalingPoliciesType;
@class AWSAutoScalingPolicyARNType;
@class AWSAutoScalingPredefinedMetricSpecification;
@class AWSAutoScalingProcessType;
@class AWSAutoScalingProcessesType;
@class AWSAutoScalingPutLifecycleHookAnswer;
@class AWSAutoScalingPutLifecycleHookType;
@class AWSAutoScalingPutNotificationConfigurationType;
@class AWSAutoScalingPutScalingPolicyType;
@class AWSAutoScalingPutScheduledUpdateGroupActionType;
@class AWSAutoScalingRecordLifecycleActionHeartbeatAnswer;
@class AWSAutoScalingRecordLifecycleActionHeartbeatType;
@class AWSAutoScalingScalingPolicy;
@class AWSAutoScalingScalingProcessQuery;
@class AWSAutoScalingScheduledActionsType;
@class AWSAutoScalingScheduledUpdateGroupAction;
@class AWSAutoScalingScheduledUpdateGroupActionRequest;
@class AWSAutoScalingSetDesiredCapacityType;
@class AWSAutoScalingSetInstanceHealthQuery;
@class AWSAutoScalingSetInstanceProtectionAnswer;
@class AWSAutoScalingSetInstanceProtectionQuery;
@class AWSAutoScalingStepAdjustment;
@class AWSAutoScalingSuspendedProcess;
@class AWSAutoScalingTag;
@class AWSAutoScalingTagDescription;
@class AWSAutoScalingTagsType;
@class AWSAutoScalingTargetTrackingConfiguration;
@class AWSAutoScalingTerminateInstanceInAutoScalingGroupType;
@class AWSAutoScalingUpdateAutoScalingGroupType;

/**
 
 */
@interface AWSAutoScalingActivitiesType : AWSModel


/**
 <p>The scaling activities. Activities are sorted by start time. Activities still in progress are described first.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingActivity *> * _Nullable activities;

/**
 <p>A string that indicates that the response contains more items than can be returned in a single response. To receive additional items, specify this string for the <code>NextToken</code> value when requesting the next set of items. This value is null when there are no more items to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Describes scaling activity, which is a long-running process that represents a change to your Auto Scaling group, such as changing its size or replacing an instance.</p>
 Required parameters: [ActivityId, AutoScalingGroupName, Cause, StartTime, StatusCode]
 */
@interface AWSAutoScalingActivity : AWSModel


/**
 <p>The ID of the activity.</p>
 */
@property (nonatomic, strong) NSString * _Nullable activityId;

/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The reason the activity began.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cause;

/**
 <p>A friendly, more verbose description of the activity.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The details about the activity.</p>
 */
@property (nonatomic, strong) NSString * _Nullable details;

/**
 <p>The end time of the activity.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable endTime;

/**
 <p>A value between 0 and 100 that indicates the progress of the activity.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable progress;

/**
 <p>The start time of the activity.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable startTime;

/**
 <p>The current status of the activity.</p>
 */
@property (nonatomic, assign) AWSAutoScalingScalingActivityStatusCode statusCode;

/**
 <p>A friendly, more verbose description of the activity status.</p>
 */
@property (nonatomic, strong) NSString * _Nullable statusMessage;

@end

/**
 
 */
@interface AWSAutoScalingActivityType : AWSModel


/**
 <p>A scaling activity.</p>
 */
@property (nonatomic, strong) AWSAutoScalingActivity * _Nullable activity;

@end

/**
 <p>Describes a policy adjustment type.</p>
 */
@interface AWSAutoScalingAdjustmentType : AWSModel


/**
 <p>The policy adjustment type. The valid values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable adjustmentType;

@end

/**
 <p>Describes an alarm.</p>
 */
@interface AWSAutoScalingAlarm : AWSModel


/**
 <p>The Amazon Resource Name (ARN) of the alarm.</p>
 */
@property (nonatomic, strong) NSString * _Nullable alarmARN;

/**
 <p>The name of the alarm.</p>
 */
@property (nonatomic, strong) NSString * _Nullable alarmName;

@end

/**
 
 */
@interface AWSAutoScalingAttachInstancesQuery : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The IDs of the instances. You can specify up to 20 instances.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIds;

@end

/**
 
 */
@interface AWSAutoScalingAttachLoadBalancerTargetGroupsResultType : AWSModel


@end

/**
 
 */
@interface AWSAutoScalingAttachLoadBalancerTargetGroupsType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The Amazon Resource Names (ARN) of the target groups. You can specify up to 10 target groups.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable targetGroupARNs;

@end

/**
 
 */
@interface AWSAutoScalingAttachLoadBalancersResultType : AWSModel


@end

/**
 
 */
@interface AWSAutoScalingAttachLoadBalancersType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The names of the load balancers. You can specify up to 10 load balancers.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable loadBalancerNames;

@end

/**
 <p>Describes an Auto Scaling group.</p>
 Required parameters: [AutoScalingGroupName, MinSize, MaxSize, DesiredCapacity, DefaultCooldown, AvailabilityZones, HealthCheckType, CreatedTime]
 */
@interface AWSAutoScalingAutoScalingGroup : AWSModel


/**
 <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupARN;

/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>One or more Availability Zones for the group.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable availabilityZones;

/**
 <p>The date and time the group was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable createdTime;

/**
 <p>The amount of time, in seconds, after a scaling activity completes before another scaling activity can start.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable defaultCooldown;

/**
 <p>The desired size of the group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable desiredCapacity;

/**
 <p>The metrics enabled for the group.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingEnabledMetric *> * _Nullable enabledMetrics;

/**
 <p>The amount of time, in seconds, that Amazon EC2 Auto Scaling waits before checking the health status of an EC2 instance that has come into service.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable healthCheckGracePeriod;

/**
 <p>The service to use for the health checks. The valid values are <code>EC2</code> and <code>ELB</code>. If you configure an Auto Scaling group to use ELB health checks, it considers the instance unhealthy if it fails either the EC2 status checks or the load balancer health checks.</p>
 */
@property (nonatomic, strong) NSString * _Nullable healthCheckType;

/**
 <p>The EC2 instances associated with the group.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingInstance *> * _Nullable instances;

/**
 <p>The name of the associated launch configuration.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchConfigurationName;

/**
 <p>The launch template for the group.</p>
 */
@property (nonatomic, strong) AWSAutoScalingLaunchTemplateSpecification * _Nullable launchTemplate;

/**
 <p>One or more load balancers associated with the group.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable loadBalancerNames;

/**
 <p>The maximum size of the group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxSize;

/**
 <p>The minimum size of the group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable minSize;

/**
 <p>The mixed instances policy for the group. </p>
 */
@property (nonatomic, strong) AWSAutoScalingMixedInstancesPolicy * _Nullable mixedInstancesPolicy;

/**
 <p>Indicates whether newly launched instances are protected from termination by Amazon EC2 Auto Scaling when scaling in.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable latestInstancesProtectedFromScaleIn;

/**
 <p>The name of the placement group into which to launch your instances, if any.</p>
 */
@property (nonatomic, strong) NSString * _Nullable placementGroup;

/**
 <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto Scaling group uses to call other AWS services on your behalf.</p>
 */
@property (nonatomic, strong) NSString * _Nullable serviceLinkedRoleARN;

/**
 <p>The current state of the group when <a>DeleteAutoScalingGroup</a> is in progress.</p>
 */
@property (nonatomic, strong) NSString * _Nullable status;

/**
 <p>The suspended processes associated with the group.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingSuspendedProcess *> * _Nullable suspendedProcesses;

/**
 <p>The tags for the group.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingTagDescription *> * _Nullable tags;

/**
 <p>The Amazon Resource Names (ARN) of the target groups for your load balancer.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable targetGroupARNs;

/**
 <p>The termination policies for the group.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable terminationPolicies;

/**
 <p>One or more subnet IDs, if applicable, separated by commas.</p>
 */
@property (nonatomic, strong) NSString * _Nullable VPCZoneIdentifier;

@end

/**
 
 */
@interface AWSAutoScalingAutoScalingGroupNamesType : AWSRequest


/**
 <p>The names of the Auto Scaling groups. Each name can be a maximum of 1600 characters. By default, you can only specify up to 50 names. You can optionally increase this limit using the <code>MaxRecords</code> parameter. </p><p>If you omit this parameter, all Auto Scaling groups are described.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable autoScalingGroupNames;

/**
 <p>The maximum number of items to return with this call. The default value is <code>50</code> and the maximum value is <code>100</code>. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxRecords;

/**
 <p>The token for the next set of items to return. (You received this token from a previous call.)</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSAutoScalingAutoScalingGroupsType : AWSModel


/**
 <p>The groups.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingAutoScalingGroup *> * _Nullable autoScalingGroups;

/**
 <p>A string that indicates that the response contains more items than can be returned in a single response. To receive additional items, specify this string for the <code>NextToken</code> value when requesting the next set of items. This value is null when there are no more items to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Describes an EC2 instance associated with an Auto Scaling group.</p>
 Required parameters: [InstanceId, AutoScalingGroupName, AvailabilityZone, LifecycleState, HealthStatus, ProtectedFromScaleIn]
 */
@interface AWSAutoScalingAutoScalingInstanceDetails : AWSModel


/**
 <p>The name of the Auto Scaling group for the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The Availability Zone for the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The last reported health status of this instance. "Healthy" means that the instance is healthy and should remain in service. "Unhealthy" means that the instance is unhealthy and Amazon EC2 Auto Scaling should terminate and replace it.</p>
 */
@property (nonatomic, strong) NSString * _Nullable healthStatus;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The launch configuration used to launch the instance. This value is not available if you attached the instance to the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchConfigurationName;

/**
 <p>The launch template for the instance.</p>
 */
@property (nonatomic, strong) AWSAutoScalingLaunchTemplateSpecification * _Nullable launchTemplate;

/**
 <p>The lifecycle state for the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable lifecycleState;

/**
 <p>Indicates whether the instance is protected from termination by Amazon EC2 Auto Scaling when scaling in.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable protectedFromScaleIn;

@end

/**
 
 */
@interface AWSAutoScalingAutoScalingInstancesType : AWSModel


/**
 <p>The instances.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingAutoScalingInstanceDetails *> * _Nullable autoScalingInstances;

/**
 <p>A string that indicates that the response contains more items than can be returned in a single response. To receive additional items, specify this string for the <code>NextToken</code> value when requesting the next set of items. This value is null when there are no more items to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSAutoScalingBatchDeleteScheduledActionAnswer : AWSModel


/**
 <p>The names of the scheduled actions that could not be deleted, including an error message. </p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingFailedScheduledUpdateGroupActionRequest *> * _Nullable failedScheduledActions;

@end

/**
 
 */
@interface AWSAutoScalingBatchDeleteScheduledActionType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The names of the scheduled actions to delete. The maximum number allowed is 50. </p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable scheduledActionNames;

@end

/**
 
 */
@interface AWSAutoScalingBatchPutScheduledUpdateGroupActionAnswer : AWSModel


/**
 <p>The names of the scheduled actions that could not be created or updated, including an error message.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingFailedScheduledUpdateGroupActionRequest *> * _Nullable failedScheduledUpdateGroupActions;

@end

/**
 
 */
@interface AWSAutoScalingBatchPutScheduledUpdateGroupActionType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>One or more scheduled actions. The maximum number allowed is 50. </p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingScheduledUpdateGroupActionRequest *> * _Nullable scheduledUpdateGroupActions;

@end

/**
 <p>Describes a block device mapping.</p>
 Required parameters: [DeviceName]
 */
@interface AWSAutoScalingBlockDeviceMapping : AWSModel


/**
 <p>The device name exposed to the EC2 instance (for example, <code>/dev/sdh</code> or <code>xvdh</code>). For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/device_naming.html">Device Naming on Linux Instances</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deviceName;

/**
 <p>The information about the Amazon EBS volume.</p>
 */
@property (nonatomic, strong) AWSAutoScalingEbs * _Nullable ebs;

/**
 <p>Suppresses a device mapping.</p><p>If this parameter is true for the root device, the instance might fail the EC2 health check. In that case, Amazon EC2 Auto Scaling launches a replacement instance.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable noDevice;

/**
 <p>The name of the virtual device (for example, <code>ephemeral0</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable virtualName;

@end

/**
 
 */
@interface AWSAutoScalingCompleteLifecycleActionAnswer : AWSModel


@end

/**
 
 */
@interface AWSAutoScalingCompleteLifecycleActionType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The action for the group to take. This parameter can be either <code>CONTINUE</code> or <code>ABANDON</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable lifecycleActionResult;

/**
 <p>A universally unique identifier (UUID) that identifies a specific lifecycle action associated with an instance. Amazon EC2 Auto Scaling sends this token to the notification target you specified when you created the lifecycle hook.</p>
 */
@property (nonatomic, strong) NSString * _Nullable lifecycleActionToken;

/**
 <p>The name of the lifecycle hook.</p>
 */
@property (nonatomic, strong) NSString * _Nullable lifecycleHookName;

@end

/**
 
 */
@interface AWSAutoScalingCreateAutoScalingGroupType : AWSRequest


/**
 <p>The name of the Auto Scaling group. This name must be unique per Region per account.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>One or more Availability Zones for the group. This parameter is optional if you specify one or more subnets for <code>VPCZoneIdentifier</code>.</p><p>Conditional: If your account supports EC2-Classic and VPC, this parameter is required to launch instances into EC2-Classic.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable availabilityZones;

/**
 <p>The amount of time, in seconds, after a scaling activity completes before another scaling activity can start. The default value is <code>300</code>.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/Cooldown.html">Scaling Cooldowns</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable defaultCooldown;

/**
 <p>The number of Amazon EC2 instances that the Auto Scaling group attempts to maintain. This number must be greater than or equal to the minimum size of the group and less than or equal to the maximum size of the group. If you do not specify a desired capacity, the default is the minimum size of the group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable desiredCapacity;

/**
 <p>The amount of time, in seconds, that Amazon EC2 Auto Scaling waits before checking the health status of an EC2 instance that has come into service. During this time, any health check failures for the instance are ignored. The default value is <code>0</code>.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health Checks for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p>Conditional: This parameter is required if you are adding an <code>ELB</code> health check.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable healthCheckGracePeriod;

/**
 <p>The service to use for the health checks. The valid values are <code>EC2</code> and <code>ELB</code>. The default value is <code>EC2</code>. If you configure an Auto Scaling group to use ELB health checks, it considers the instance unhealthy if it fails either the EC2 status checks or the load balancer health checks.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health Checks for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable healthCheckType;

/**
 <p>The ID of the instance used to create a launch configuration for the group.</p><p>When you specify an ID of an instance, Amazon EC2 Auto Scaling creates a new launch configuration and associates it with the group. This launch configuration derives its attributes from the specified instance, except for the block device mapping.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-asg-from-instance.html">Create an Auto Scaling Group Using an EC2 Instance</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p>You must specify one of the following parameters in your request: <code>LaunchConfigurationName</code>, <code>LaunchTemplate</code>, <code>InstanceId</code>, or <code>MixedInstancesPolicy</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The name of the launch configuration.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-asg.html">Creating an Auto Scaling Group Using a Launch Configuration</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p>If you do not specify <code>LaunchConfigurationName</code>, you must specify one of the following parameters: <code>InstanceId</code>, <code>LaunchTemplate</code>, or <code>MixedInstancesPolicy</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchConfigurationName;

/**
 <p>The launch template to use to launch instances.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-asg-launch-template.html">Creating an Auto Scaling Group Using a Launch Template</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p>If you do not specify <code>LaunchTemplate</code>, you must specify one of the following parameters: <code>InstanceId</code>, <code>LaunchConfigurationName</code>, or <code>MixedInstancesPolicy</code>.</p>
 */
@property (nonatomic, strong) AWSAutoScalingLaunchTemplateSpecification * _Nullable launchTemplate;

/**
 <p>One or more lifecycle hooks.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingLifecycleHookSpecification *> * _Nullable lifecycleHookSpecificationList;

/**
 <p>A list of Classic Load Balancers associated with this Auto Scaling group. For Application Load Balancers and Network Load Balancers, specify a list of target groups using the <code>TargetGroupARNs</code> property instead.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable loadBalancerNames;

/**
 <p>The maximum size of the group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxSize;

/**
 <p>The minimum size of the group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable minSize;

/**
 <p>An embedded object that specifies a mixed instances policy. The required parameters must be specified. If optional parameters are unspecified, their default values are used.</p><p>The policy includes parameters that not only define the distribution of On-Demand Instances and Spot Instances, the maximum price to pay for Spot instances, and how the Auto Scaling group allocates instance types to fulfill On-Demand and Spot capacity, but also the parameters that specify the instance configuration information—the launch template and instance types.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-purchase-options.html">Auto Scaling Groups with Multiple Instance Types and Purchase Options</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p>You must specify one of the following parameters in your request: <code>LaunchConfigurationName</code>, <code>LaunchTemplate</code>, <code>InstanceId</code>, or <code>MixedInstancesPolicy</code>.</p>
 */
@property (nonatomic, strong) AWSAutoScalingMixedInstancesPolicy * _Nullable mixedInstancesPolicy;

/**
 <p>Indicates whether newly launched instances are protected from termination by Amazon EC2 Auto Scaling when scaling in.</p><p>For more information about preventing instances from terminating on scale in, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance Protection</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable latestInstancesProtectedFromScaleIn;

/**
 <p>The name of the placement group into which to launch your instances, if any. A placement group is a logical grouping of instances within a single Availability Zone. You cannot specify multiple Availability Zones and a placement group. For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable placementGroup;

/**
 <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto Scaling group uses to call other AWS services on your behalf. By default, Amazon EC2 Auto Scaling uses a service-linked role named AWSServiceRoleForAutoScaling, which it creates if it does not exist. For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-service-linked-role.html">Service-Linked Roles</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable serviceLinkedRoleARN;

/**
 <p>One or more tags.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging Auto Scaling Groups and Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingTag *> * _Nullable tags;

/**
 <p>The Amazon Resource Names (ARN) of the target groups to associate with the Auto Scaling group. Instances are registered as targets in a target group, and traffic is routed to the target group.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Using a Load Balancer with an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable targetGroupARNs;

/**
 <p>One or more termination policies used to select the instance to terminate. These policies are executed in the order that they are listed.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable terminationPolicies;

/**
 <p>A comma-separated list of subnet IDs for your virtual private cloud (VPC).</p><p>If you specify <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>, the subnets that you specify for this parameter must reside in those Availability Zones.</p><p>Conditional: If your account supports EC2-Classic and VPC, this parameter is required to launch instances into a VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable VPCZoneIdentifier;

@end

/**
 
 */
@interface AWSAutoScalingCreateLaunchConfigurationType : AWSRequest


/**
 <p>Used for groups that launch instances into a virtual private cloud (VPC). Specifies whether to assign a public IP address to each instance. For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html">Launching Auto Scaling Instances in a VPC</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p>If you specify this parameter, be sure to specify at least one subnet when you create your group.</p><p>Default: If the instance is launched into a default subnet, the default is to assign a public IP address. If the instance is launched into a nondefault subnet, the default is not to assign a public IP address.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable associatePublicIpAddress;

/**
 <p>One or more mappings that specify how block devices are exposed to the instance. For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html">Block Device Mapping</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingBlockDeviceMapping *> * _Nullable blockDeviceMappings;

/**
 <p>The ID of a ClassicLink-enabled VPC to link your EC2-Classic instances to. This parameter is supported only if you are launching EC2-Classic instances. For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a> in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking EC2-Classic Instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable classicLinkVPCId;

/**
 <p>The IDs of one or more security groups for the specified ClassicLink-enabled VPC. For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a> in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking EC2-Classic Instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p>Conditional: This parameter is required if you specify a ClassicLink-enabled VPC, and is not supported otherwise.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable classicLinkVPCSecurityGroups;

/**
 <p>Indicates whether the instance is optimized for Amazon EBS I/O. By default, the instance is not optimized for EBS I/O. The optimization provides dedicated throughput to Amazon EBS and an optimized configuration stack to provide optimal I/O performance. This optimization is not available with all instance types. Additional usage charges apply. For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon EBS-Optimized Instances</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ebsOptimized;

/**
 <p>The name or the Amazon Resource Name (ARN) of the instance profile associated with the IAM role for the instance.</p><p>EC2 instances launched with an IAM role automatically have AWS security credentials available. You can use IAM roles with Amazon EC2 Auto Scaling to automatically enable applications running on your EC2 instances to securely access other AWS resources. For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/us-iam-role.html">IAM Role for Applications That Run on Amazon EC2 Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable iamInstanceProfile;

/**
 <p>The ID of the Amazon Machine Image (AMI) to use to launch your EC2 instances.</p><p>If you do not specify <code>InstanceId</code>, you must specify <code>ImageId</code>.</p><p>For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding an AMI</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

/**
 <p>The ID of the instance to use to create the launch configuration. The new launch configuration derives attributes from the instance, except for the block device mapping.</p><p>To create a launch configuration with a block device mapping or override any other instance attributes, specify them as part of the same request.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-lc-with-instanceID.html">Create a Launch Configuration Using an EC2 Instance</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p>If you do not specify <code>InstanceId</code>, you must specify both <code>ImageId</code> and <code>InstanceType</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>Enables detailed monitoring (<code>true</code>) or basic monitoring (<code>false</code>) for the Auto Scaling instances. The default value is <code>true</code>.</p>
 */
@property (nonatomic, strong) AWSAutoScalingInstanceMonitoring * _Nullable instanceMonitoring;

/**
 <p>The instance type of the EC2 instance.</p><p>For information about available instance types, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available Instance Types</a> in the <i>Amazon EC2 User Guide for Linux Instances.</i></p><p>If you do not specify <code>InstanceId</code>, you must specify <code>InstanceType</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceType;

/**
 <p>The ID of the kernel associated with the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kernelId;

/**
 <p>The name of the key pair. For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Amazon EC2 Key Pairs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyName;

/**
 <p>The name of the launch configuration. This name must be unique per Region per account.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchConfigurationName;

/**
 <p>The tenancy of the instance. An instance with a tenancy of <code>dedicated</code> runs on single-tenant hardware and can only be launched into a VPC.</p><p>To launch Dedicated Instances into a shared tenancy VPC (a VPC with the instance placement tenancy attribute set to <code>default</code>), you must set the value of this parameter to <code>dedicated</code>.</p><p>If you specify <code>PlacementTenancy</code>, be sure to specify at least one subnet when you create your group.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-vpc-tenancy">Instance Placement Tenancy</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p>Valid values: <code>default</code> | <code>dedicated</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable placementTenancy;

/**
 <p>The ID of the RAM disk associated with the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ramdiskId;

/**
 <p>One or more security groups with which to associate the instances.</p><p>If your instances are launched in EC2-Classic, you can either specify security group names or the security group IDs. For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon EC2 Security Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p><p>If your instances are launched into a VPC, specify security group IDs. For more information, see <a href="https://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security Groups for Your VPC</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable securityGroups;

/**
 <p>The maximum hourly price to be paid for any Spot Instance launched to fulfill the request. Spot Instances are launched when the price you specify exceeds the current Spot market price. For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-launch-spot-instances.html">Launching Spot Instances in Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotPrice;

/**
 <p>The user data to make available to the launched EC2 instances. For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance Metadata and User Data</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable userData;

@end

/**
 
 */
@interface AWSAutoScalingCreateOrUpdateTagsType : AWSRequest


/**
 <p>One or more tags.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingTag *> * _Nullable tags;

@end

/**
 <p>Represents a CloudWatch metric of your choosing for a target tracking scaling policy to use with Amazon EC2 Auto Scaling.</p><p>To create your customized metric specification:</p><ul><li><p>Add values for each required parameter from CloudWatch. You can use an existing metric, or a new metric that you create. To use your own metric, you must first publish the metric to CloudWatch. For more information, see <a href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html">Publish Custom Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p></li><li><p>Choose a metric that changes proportionally with capacity. The value of the metric should increase or decrease in inverse proportion to the number of capacity units. That is, the value of the metric should decrease when capacity increases. </p></li></ul><p>For more information about CloudWatch, see <a href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html">Amazon CloudWatch Concepts</a>. </p>
 Required parameters: [MetricName, Namespace, Statistic]
 */
@interface AWSAutoScalingCustomizedMetricSpecification : AWSModel


/**
 <p>The dimensions of the metric.</p><p>Conditional: If you published your metric with dimensions, you must specify the same dimensions in your scaling policy.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingMetricDimension *> * _Nullable dimensions;

/**
 <p>The name of the metric.</p>
 */
@property (nonatomic, strong) NSString * _Nullable metricName;

/**
 <p>The namespace of the metric.</p>
 */
@property (nonatomic, strong) NSString * _Nullable namespace;

/**
 <p>The statistic of the metric.</p>
 */
@property (nonatomic, assign) AWSAutoScalingMetricStatistic statistic;

/**
 <p>The unit of the metric.</p>
 */
@property (nonatomic, strong) NSString * _Nullable unit;

@end

/**
 
 */
@interface AWSAutoScalingDeleteAutoScalingGroupType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>Specifies that the group is to be deleted along with all instances associated with the group, without waiting for all instances to be terminated. This parameter also deletes any lifecycle actions associated with the group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable forceDelete;

@end

/**
 
 */
@interface AWSAutoScalingDeleteLifecycleHookAnswer : AWSModel


@end

/**
 
 */
@interface AWSAutoScalingDeleteLifecycleHookType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The name of the lifecycle hook.</p>
 */
@property (nonatomic, strong) NSString * _Nullable lifecycleHookName;

@end

/**
 
 */
@interface AWSAutoScalingDeleteNotificationConfigurationType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service (Amazon SNS) topic.</p>
 */
@property (nonatomic, strong) NSString * _Nullable topicARN;

@end

/**
 
 */
@interface AWSAutoScalingDeletePolicyType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The name or Amazon Resource Name (ARN) of the policy.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyName;

@end

/**
 
 */
@interface AWSAutoScalingDeleteScheduledActionType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The name of the action to delete.</p>
 */
@property (nonatomic, strong) NSString * _Nullable scheduledActionName;

@end

/**
 
 */
@interface AWSAutoScalingDeleteTagsType : AWSRequest


/**
 <p>One or more tags.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingTag *> * _Nullable tags;

@end

/**
 
 */
@interface AWSAutoScalingDescribeAccountLimitsAnswer : AWSModel


/**
 <p>The maximum number of groups allowed for your AWS account. The default limit is 200 per region.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxNumberOfAutoScalingGroups;

/**
 <p>The maximum number of launch configurations allowed for your AWS account. The default limit is 200 per region.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxNumberOfLaunchConfigurations;

/**
 <p>The current number of groups for your AWS account.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable numberOfAutoScalingGroups;

/**
 <p>The current number of launch configurations for your AWS account.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable numberOfLaunchConfigurations;

@end

/**
 
 */
@interface AWSAutoScalingDescribeAdjustmentTypesAnswer : AWSModel


/**
 <p>The policy adjustment types.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingAdjustmentType *> * _Nullable adjustmentTypes;

@end

/**
 
 */
@interface AWSAutoScalingDescribeAutoScalingInstancesType : AWSRequest


/**
 <p>The IDs of the instances. You can specify up to <code>MaxRecords</code> IDs. If you omit this parameter, all Auto Scaling instances are described. If you specify an ID that does not exist, it is ignored with no error.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIds;

/**
 <p>The maximum number of items to return with this call. The default value is <code>50</code> and the maximum value is <code>50</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxRecords;

/**
 <p>The token for the next set of items to return. (You received this token from a previous call.)</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSAutoScalingDescribeAutoScalingNotificationTypesAnswer : AWSModel


/**
 <p>The notification types.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable autoScalingNotificationTypes;

@end

/**
 
 */
@interface AWSAutoScalingDescribeLifecycleHookTypesAnswer : AWSModel


/**
 <p>The lifecycle hook types.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable lifecycleHookTypes;

@end

/**
 
 */
@interface AWSAutoScalingDescribeLifecycleHooksAnswer : AWSModel


/**
 <p>The lifecycle hooks for the specified group.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingLifecycleHook *> * _Nullable lifecycleHooks;

@end

/**
 
 */
@interface AWSAutoScalingDescribeLifecycleHooksType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The names of one or more lifecycle hooks. If you omit this parameter, all lifecycle hooks are described.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable lifecycleHookNames;

@end

/**
 
 */
@interface AWSAutoScalingDescribeLoadBalancerTargetGroupsRequest : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The maximum number of items to return with this call. The default value is <code>100</code> and the maximum value is <code>100</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxRecords;

/**
 <p>The token for the next set of items to return. (You received this token from a previous call.)</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSAutoScalingDescribeLoadBalancerTargetGroupsResponse : AWSModel


/**
 <p>Information about the target groups.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingLoadBalancerTargetGroupState *> * _Nullable loadBalancerTargetGroups;

/**
 <p>A string that indicates that the response contains more items than can be returned in a single response. To receive additional items, specify this string for the <code>NextToken</code> value when requesting the next set of items. This value is null when there are no more items to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSAutoScalingDescribeLoadBalancersRequest : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The maximum number of items to return with this call. The default value is <code>100</code> and the maximum value is <code>100</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxRecords;

/**
 <p>The token for the next set of items to return. (You received this token from a previous call.)</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSAutoScalingDescribeLoadBalancersResponse : AWSModel


/**
 <p>The load balancers.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingLoadBalancerState *> * _Nullable loadBalancers;

/**
 <p>A string that indicates that the response contains more items than can be returned in a single response. To receive additional items, specify this string for the <code>NextToken</code> value when requesting the next set of items. This value is null when there are no more items to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSAutoScalingDescribeMetricCollectionTypesAnswer : AWSModel


/**
 <p>The granularities for the metrics.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingMetricGranularityType *> * _Nullable granularities;

/**
 <p>One or more metrics.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingMetricCollectionType *> * _Nullable metrics;

@end

/**
 
 */
@interface AWSAutoScalingDescribeNotificationConfigurationsAnswer : AWSModel


/**
 <p>A string that indicates that the response contains more items than can be returned in a single response. To receive additional items, specify this string for the <code>NextToken</code> value when requesting the next set of items. This value is null when there are no more items to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The notification configurations.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingNotificationConfiguration *> * _Nullable notificationConfigurations;

@end

/**
 
 */
@interface AWSAutoScalingDescribeNotificationConfigurationsType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable autoScalingGroupNames;

/**
 <p>The maximum number of items to return with this call. The default value is <code>50</code> and the maximum value is <code>100</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxRecords;

/**
 <p>The token for the next set of items to return. (You received this token from a previous call.)</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSAutoScalingDescribePoliciesType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The maximum number of items to be returned with each call. The default value is <code>50</code> and the maximum value is <code>100</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxRecords;

/**
 <p>The token for the next set of items to return. (You received this token from a previous call.)</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The names of one or more policies. If you omit this parameter, all policies are described. If a group name is provided, the results are limited to that group. This list is limited to 50 items. If you specify an unknown policy name, it is ignored with no error.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable policyNames;

/**
 <p>One or more policy types. The valid values are <code>SimpleScaling</code>, <code>StepScaling</code>, and <code>TargetTrackingScaling</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable policyTypes;

@end

/**
 
 */
@interface AWSAutoScalingDescribeScalingActivitiesType : AWSRequest


/**
 <p>The activity IDs of the desired scaling activities. You can specify up to 50 IDs. If you omit this parameter, all activities for the past six weeks are described. If unknown activities are requested, they are ignored with no error. If you specify an Auto Scaling group, the results are limited to that group.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable activityIds;

/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The maximum number of items to return with this call. The default value is <code>100</code> and the maximum value is <code>100</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxRecords;

/**
 <p>The token for the next set of items to return. (You received this token from a previous call.)</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSAutoScalingDescribeScheduledActionsType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The latest scheduled start time to return. If scheduled action names are provided, this parameter is ignored.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable endTime;

/**
 <p>The maximum number of items to return with this call. The default value is <code>50</code> and the maximum value is <code>100</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxRecords;

/**
 <p>The token for the next set of items to return. (You received this token from a previous call.)</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The names of one or more scheduled actions. You can specify up to 50 actions. If you omit this parameter, all scheduled actions are described. If you specify an unknown scheduled action, it is ignored with no error.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable scheduledActionNames;

/**
 <p>The earliest scheduled start time to return. If scheduled action names are provided, this parameter is ignored.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable startTime;

@end

/**
 
 */
@interface AWSAutoScalingDescribeTagsType : AWSRequest


/**
 <p>One or more filters to scope the tags to return. The maximum number of filters per filter type (for example, <code>auto-scaling-group</code>) is 1000.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingFilter *> * _Nullable filters;

/**
 <p>The maximum number of items to return with this call. The default value is <code>50</code> and the maximum value is <code>100</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxRecords;

/**
 <p>The token for the next set of items to return. (You received this token from a previous call.)</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSAutoScalingDescribeTerminationPolicyTypesAnswer : AWSModel


/**
 <p>The termination policies supported by Amazon EC2 Auto Scaling: <code>OldestInstance</code>, <code>OldestLaunchConfiguration</code>, <code>NewestInstance</code>, <code>ClosestToNextInstanceHour</code>, <code>Default</code>, <code>OldestLaunchTemplate</code>, and <code>AllocationStrategy</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable terminationPolicyTypes;

@end

/**
 
 */
@interface AWSAutoScalingDetachInstancesAnswer : AWSModel


/**
 <p>The activities related to detaching the instances from the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingActivity *> * _Nullable activities;

@end

/**
 
 */
@interface AWSAutoScalingDetachInstancesQuery : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The IDs of the instances. You can specify up to 20 instances.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIds;

/**
 <p>Indicates whether the Auto Scaling group decrements the desired capacity value by the number of instances detached.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable shouldDecrementDesiredCapacity;

@end

/**
 
 */
@interface AWSAutoScalingDetachLoadBalancerTargetGroupsResultType : AWSModel


@end

/**
 
 */
@interface AWSAutoScalingDetachLoadBalancerTargetGroupsType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The Amazon Resource Names (ARN) of the target groups. You can specify up to 10 target groups.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable targetGroupARNs;

@end

/**
 
 */
@interface AWSAutoScalingDetachLoadBalancersResultType : AWSModel


@end

/**
 
 */
@interface AWSAutoScalingDetachLoadBalancersType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The names of the load balancers. You can specify up to 10 load balancers.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable loadBalancerNames;

@end

/**
 
 */
@interface AWSAutoScalingDisableMetricsCollectionQuery : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>One or more of the following metrics. If you omit this parameter, all metrics are disabled.</p><ul><li><p><code>GroupMinSize</code></p></li><li><p><code>GroupMaxSize</code></p></li><li><p><code>GroupDesiredCapacity</code></p></li><li><p><code>GroupInServiceInstances</code></p></li><li><p><code>GroupPendingInstances</code></p></li><li><p><code>GroupStandbyInstances</code></p></li><li><p><code>GroupTerminatingInstances</code></p></li><li><p><code>GroupTotalInstances</code></p></li></ul>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable metrics;

@end

/**
 <p>Describes an Amazon EBS volume. Used in combination with <a>BlockDeviceMapping</a>.</p>
 */
@interface AWSAutoScalingEbs : AWSModel


/**
 <p>Indicates whether the volume is deleted on instance termination. For Amazon EC2 Auto Scaling, the default value is <code>true</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deleteOnTermination;

/**
 <p>Specifies whether the volume should be encrypted. Encrypted EBS volumes can only be attached to instances that support Amazon EBS encryption. For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#EBSEncryption_supported_instances">Supported Instance Types</a>. If your AMI uses encrypted volumes, you can also only launch it on supported instance types.</p><note><p>If you are creating a volume from a snapshot, you cannot specify an encryption value. Volumes that are created from encrypted snapshots are automatically encrypted, and volumes that are created from unencrypted snapshots are automatically unencrypted. By default, encrypted snapshots use the AWS managed CMK that is used for EBS encryption, but you can specify a custom CMK when you create the snapshot. The ability to encrypt a snapshot during copying also allows you to apply a new CMK to an already-encrypted snapshot. Volumes restored from the resulting copy are only accessible using the new CMK. </p><p>Enabling <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html#encryption-by-default">encryption by default</a> results in all EBS volumes being encrypted with the AWS managed CMK or a customer managed CMK, whether or not the snapshot was encrypted.</p></note><p>For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AMIEncryption.html">Using Encryption with EBS-Backed AMIs</a> in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/key-policy-requirements-EBS-encryption.html">Required CMK Key Policy for Use with Encrypted Volumes</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable encrypted;

/**
 <p>The number of I/O operations per second (IOPS) to provision for the volume. The maximum ratio of IOPS to volume size (in GiB) is 50:1. For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p><p>Conditional: This parameter is required when the volume type is <code>io1</code>. (Not used with <code>standard</code>, <code>gp2</code>, <code>st1</code>, or <code>sc1</code> volumes.) </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable iops;

/**
 <p>The snapshot ID of the volume to use. </p><p>Conditional: This parameter is optional if you specify a volume size. If you specify both <code>SnapshotId</code> and <code>VolumeSize</code>, <code>VolumeSize</code> must be equal or greater than the size of the snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

/**
 <p>The volume size, in Gibibytes (GiB). </p><p>This can be a number from 1-1,024 for <code>standard</code>, 4-16,384 for <code>io1</code>, 1-16,384 for <code>gp2</code>, and 500-16,384 for <code>st1</code> and <code>sc1</code>. If you specify a snapshot, the volume size must be equal to or larger than the snapshot size.</p><p>Default: If you create a volume from a snapshot and you don't specify a volume size, the default is the snapshot size.</p><note><p>At least one of VolumeSize or SnapshotId is required.</p></note>
 */
@property (nonatomic, strong) NSNumber * _Nullable volumeSize;

/**
 <p>The volume type, which can be <code>standard</code> for Magnetic, <code>io1</code> for Provisioned IOPS SSD, <code>gp2</code> for General Purpose SSD, <code>st1</code> for Throughput Optimized HDD, or <code>sc1</code> for Cold HDD. For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon EBS Volume Types</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p><p>Valid values: <code>standard</code> | <code>io1</code> | <code>gp2</code> | <code>st1</code> | <code>sc1</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeType;

@end

/**
 
 */
@interface AWSAutoScalingEnableMetricsCollectionQuery : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The granularity to associate with the metrics to collect. The only valid value is <code>1Minute</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable granularity;

/**
 <p>One or more of the following metrics. If you omit this parameter, all metrics are enabled.</p><ul><li><p><code>GroupMinSize</code></p></li><li><p><code>GroupMaxSize</code></p></li><li><p><code>GroupDesiredCapacity</code></p></li><li><p><code>GroupInServiceInstances</code></p></li><li><p><code>GroupPendingInstances</code></p></li><li><p><code>GroupStandbyInstances</code></p></li><li><p><code>GroupTerminatingInstances</code></p></li><li><p><code>GroupTotalInstances</code></p></li></ul>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable metrics;

@end

/**
 <p>Describes an enabled metric.</p>
 */
@interface AWSAutoScalingEnabledMetric : AWSModel


/**
 <p>The granularity of the metric. The only valid value is <code>1Minute</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable granularity;

/**
 <p>One of the following metrics:</p><ul><li><p><code>GroupMinSize</code></p></li><li><p><code>GroupMaxSize</code></p></li><li><p><code>GroupDesiredCapacity</code></p></li><li><p><code>GroupInServiceInstances</code></p></li><li><p><code>GroupPendingInstances</code></p></li><li><p><code>GroupStandbyInstances</code></p></li><li><p><code>GroupTerminatingInstances</code></p></li><li><p><code>GroupTotalInstances</code></p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable metric;

@end

/**
 
 */
@interface AWSAutoScalingEnterStandbyAnswer : AWSModel


/**
 <p>The activities related to moving instances into <code>Standby</code> mode.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingActivity *> * _Nullable activities;

@end

/**
 
 */
@interface AWSAutoScalingEnterStandbyQuery : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The IDs of the instances. You can specify up to 20 instances.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIds;

/**
 <p>Indicates whether to decrement the desired capacity of the Auto Scaling group by the number of instances moved to <code>Standby</code> mode.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable shouldDecrementDesiredCapacity;

@end

/**
 
 */
@interface AWSAutoScalingExecutePolicyType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The breach threshold for the alarm.</p><p>Conditional: This parameter is required if the policy type is <code>StepScaling</code> and not supported otherwise.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable breachThreshold;

/**
 <p>Indicates whether Amazon EC2 Auto Scaling waits for the cooldown period to complete before executing the policy.</p><p>This parameter is not supported if the policy type is <code>StepScaling</code> or <code>TargetTrackingScaling</code>.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/Cooldown.html">Scaling Cooldowns</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable honorCooldown;

/**
 <p>The metric value to compare to <code>BreachThreshold</code>. This enables you to execute a policy of type <code>StepScaling</code> and determine which step adjustment to use. For example, if the breach threshold is 50 and you want to use a step adjustment with a lower bound of 0 and an upper bound of 10, you can set the metric value to 59.</p><p>If you specify a metric value that doesn't correspond to a step adjustment for the policy, the call returns an error.</p><p>Conditional: This parameter is required if the policy type is <code>StepScaling</code> and not supported otherwise.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable metricValue;

/**
 <p>The name or ARN of the policy.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyName;

@end

/**
 
 */
@interface AWSAutoScalingExitStandbyAnswer : AWSModel


/**
 <p>The activities related to moving instances out of <code>Standby</code> mode.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingActivity *> * _Nullable activities;

@end

/**
 
 */
@interface AWSAutoScalingExitStandbyQuery : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The IDs of the instances. You can specify up to 20 instances.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIds;

@end

/**
 <p>Describes a scheduled action that could not be created, updated, or deleted.</p>
 Required parameters: [ScheduledActionName]
 */
@interface AWSAutoScalingFailedScheduledUpdateGroupActionRequest : AWSModel


/**
 <p>The error code.</p>
 */
@property (nonatomic, strong) NSString * _Nullable errorCode;

/**
 <p>The error message accompanying the error code.</p>
 */
@property (nonatomic, strong) NSString * _Nullable errorMessage;

/**
 <p>The name of the scheduled action.</p>
 */
@property (nonatomic, strong) NSString * _Nullable scheduledActionName;

@end

/**
 <p>Describes a filter.</p>
 */
@interface AWSAutoScalingFilter : AWSModel


/**
 <p>The name of the filter. The valid values are: <code>"auto-scaling-group"</code>, <code>"key"</code>, <code>"value"</code>, and <code>"propagate-at-launch"</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>The value of the filter.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable values;

@end

/**
 <p>Describes an EC2 instance.</p>
 Required parameters: [InstanceId, AvailabilityZone, LifecycleState, HealthStatus, ProtectedFromScaleIn]
 */
@interface AWSAutoScalingInstance : AWSModel


/**
 <p>The Availability Zone in which the instance is running.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The last reported health status of the instance. "Healthy" means that the instance is healthy and should remain in service. "Unhealthy" means that the instance is unhealthy and that Amazon EC2 Auto Scaling should terminate and replace it.</p>
 */
@property (nonatomic, strong) NSString * _Nullable healthStatus;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The launch configuration associated with the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchConfigurationName;

/**
 <p>The launch template for the instance.</p>
 */
@property (nonatomic, strong) AWSAutoScalingLaunchTemplateSpecification * _Nullable launchTemplate;

/**
 <p>A description of the current lifecycle state. The <code>Quarantined</code> state is not used.</p>
 */
@property (nonatomic, assign) AWSAutoScalingLifecycleState lifecycleState;

/**
 <p>Indicates whether the instance is protected from termination by Amazon EC2 Auto Scaling when scaling in.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable protectedFromScaleIn;

@end

/**
 <p>Describes whether detailed monitoring is enabled for the Auto Scaling instances.</p>
 */
@interface AWSAutoScalingInstanceMonitoring : AWSModel


/**
 <p>If <code>true</code>, detailed monitoring is enabled. Otherwise, basic monitoring is enabled.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enabled;

@end

/**
 <p>Describes an instances distribution for an Auto Scaling group with <a>MixedInstancesPolicy</a>.</p><p>The instances distribution specifies the distribution of On-Demand Instances and Spot Instances, the maximum price to pay for Spot Instances, and how the Auto Scaling group allocates instance types to fulfill On-Demand and Spot capacity.</p>
 */
@interface AWSAutoScalingInstancesDistribution : AWSModel


/**
 <p>Indicates how to allocate instance types to fulfill On-Demand capacity. </p><p>The only valid value is <code>prioritized</code>, which is also the default value. This strategy uses the order of instance type overrides for the <a>LaunchTemplate</a> to define the launch priority of each instance type. The first instance type in the array is prioritized higher than the last. If all your On-Demand capacity cannot be fulfilled using your highest priority instance, then the Auto Scaling groups launches the remaining capacity using the second priority instance type, and so on. </p>
 */
@property (nonatomic, strong) NSString * _Nullable onDemandAllocationStrategy;

/**
 <p>The minimum amount of the Auto Scaling group's capacity that must be fulfilled by On-Demand Instances. This base portion is provisioned first as your group scales.</p><p>The default value is <code>0</code>. If you leave this parameter set to <code>0</code>, On-Demand Instances are launched as a percentage of the Auto Scaling group's desired capacity, per the <code>OnDemandPercentageAboveBaseCapacity</code> setting.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable onDemandBaseCapacity;

/**
 <p>Controls the percentages of On-Demand Instances and Spot Instances for your additional capacity beyond <code>OnDemandBaseCapacity</code>. The range is 0–100.</p><p>The default value is <code>100</code>. If you leave this parameter set to <code>100</code>, the percentages are 100% for On-Demand Instances and 0% for Spot Instances. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable onDemandPercentageAboveBaseCapacity;

/**
 <p>Indicates how to allocate Spot capacity across Spot pools.</p><p>The only valid value is <code>lowest-price</code>, which is also the default value. The Auto Scaling group selects the cheapest Spot pools and evenly allocates your Spot capacity across the number of Spot pools that you specify. </p>
 */
@property (nonatomic, strong) NSString * _Nullable spotAllocationStrategy;

/**
 <p>The number of Spot pools to use to allocate your Spot capacity. The Spot pools are determined from the different instance types in the Overrides array of <a>LaunchTemplate</a>. The range is 1–20.</p><p>The default value is <code>2</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable spotInstancePools;

/**
 <p>The maximum price per unit hour that you are willing to pay for a Spot Instance. If you leave the value of this parameter blank (which is the default), the maximum Spot price is set at the On-Demand price.</p><p>To remove a value that you previously set, include the parameter but leave the value blank.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotMaxPrice;

@end

/**
 <p>Describes a launch configuration.</p>
 Required parameters: [LaunchConfigurationName, ImageId, InstanceType, CreatedTime]
 */
@interface AWSAutoScalingLaunchConfiguration : AWSModel


/**
 <p>[EC2-VPC] Indicates whether to assign a public IP address to each instance.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable associatePublicIpAddress;

/**
 <p>A block device mapping, which specifies the block devices for the instance.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingBlockDeviceMapping *> * _Nullable blockDeviceMappings;

/**
 <p>The ID of a ClassicLink-enabled VPC to link your EC2-Classic instances to. This parameter can only be used if you are launching EC2-Classic instances. For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a> in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking EC2-Classic Instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable classicLinkVPCId;

/**
 <p>The IDs of one or more security groups for the VPC specified in <code>ClassicLinkVPCId</code>. For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a> in the <i>Amazon EC2 User Guide for Linux Instances</i> and <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-in-vpc.html#as-ClassicLink">Linking EC2-Classic Instances to a VPC</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p>Conditional: This parameter is required if you specify a ClassicLink-enabled VPC, and cannot be used otherwise.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable classicLinkVPCSecurityGroups;

/**
 <p>The creation date and time for the launch configuration.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable createdTime;

/**
 <p>Controls whether the instance is optimized for EBS I/O (<code>true</code>) or not (<code>false</code>).</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ebsOptimized;

/**
 <p>The name or Amazon Resource Name (ARN) of the instance profile associated with the IAM role for the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable iamInstanceProfile;

/**
 <p>The ID of the Amazon Machine Image (AMI).</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

/**
 <p>Controls whether instances in this group are launched with detailed (<code>true</code>) or basic (<code>false</code>) monitoring.</p>
 */
@property (nonatomic, strong) AWSAutoScalingInstanceMonitoring * _Nullable instanceMonitoring;

/**
 <p>The instance type for the instances.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceType;

/**
 <p>The ID of the kernel associated with the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kernelId;

/**
 <p>The name of the key pair.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyName;

/**
 <p>The Amazon Resource Name (ARN) of the launch configuration.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchConfigurationARN;

/**
 <p>The name of the launch configuration.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchConfigurationName;

/**
 <p>The tenancy of the instance, either <code>default</code> or <code>dedicated</code>. An instance with <code>dedicated</code> tenancy runs in an isolated, single-tenant hardware and can only be launched into a VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable placementTenancy;

/**
 <p>The ID of the RAM disk associated with the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ramdiskId;

/**
 <p>The security groups to associate with the instances.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable securityGroups;

/**
 <p>The price to bid when launching Spot Instances.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotPrice;

/**
 <p>The user data available to the instances.</p>
 */
@property (nonatomic, strong) NSString * _Nullable userData;

@end

/**
 
 */
@interface AWSAutoScalingLaunchConfigurationNameType : AWSRequest


/**
 <p>The name of the launch configuration.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchConfigurationName;

@end

/**
 
 */
@interface AWSAutoScalingLaunchConfigurationNamesType : AWSRequest


/**
 <p>The launch configuration names. If you omit this parameter, all launch configurations are described.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable launchConfigurationNames;

/**
 <p>The maximum number of items to return with this call. The default value is <code>50</code> and the maximum value is <code>100</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxRecords;

/**
 <p>The token for the next set of items to return. (You received this token from a previous call.)</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSAutoScalingLaunchConfigurationsType : AWSModel


/**
 <p>The launch configurations.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingLaunchConfiguration *> * _Nullable launchConfigurations;

/**
 <p>A string that indicates that the response contains more items than can be returned in a single response. To receive additional items, specify this string for the <code>NextToken</code> value when requesting the next set of items. This value is null when there are no more items to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Describes a launch template and overrides. </p><p>The overrides are used to override the instance type specified by the launch template with multiple instance types that can be used to launch On-Demand Instances and Spot Instances. </p>
 */
@interface AWSAutoScalingLaunchTemplate : AWSModel


/**
 <p>The launch template to use. You must specify either the launch template ID or launch template name in the request. </p>
 */
@property (nonatomic, strong) AWSAutoScalingLaunchTemplateSpecification * _Nullable launchTemplateSpecification;

/**
 <p>Any parameters that you specify override the same parameters in the launch template. Currently, the only supported override is instance type. You must specify between 2 and 20 overrides.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingLaunchTemplateOverrides *> * _Nullable overrides;

@end

/**
 <p>Describes an override for a launch template. </p>
 */
@interface AWSAutoScalingLaunchTemplateOverrides : AWSModel


/**
 <p>The instance type. </p><p>For information about available instance types, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html#AvailableInstanceTypes">Available Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide.</i></p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceType;

@end

/**
 <p>Describes a launch template and the launch template version.</p><p>The launch template that is specified must be configured for use with an Auto Scaling group. For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-template.html">Creating a Launch Template for an Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@interface AWSAutoScalingLaunchTemplateSpecification : AWSModel


/**
 <p>The ID of the launch template. You must specify either a template ID or a template name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateId;

/**
 <p>The name of the launch template. You must specify either a template name or a template ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateName;

/**
 <p>The version number, <code>$Latest</code>, or <code>$Default</code>. If the value is <code>$Latest</code>, Amazon EC2 Auto Scaling selects the latest version of the launch template when launching instances. If the value is <code>$Default</code>, Amazon EC2 Auto Scaling selects the default version of the launch template when launching instances. The default value is <code>$Default</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable version;

@end

/**
 <p>Describes a lifecycle hook, which tells Amazon EC2 Auto Scaling that you want to perform an action whenever it launches instances or whenever it terminates instances. Used in response to <a>DescribeLifecycleHooks</a>.</p>
 */
@interface AWSAutoScalingLifecycleHook : AWSModel


/**
 <p>The name of the Auto Scaling group for the lifecycle hook.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>Defines the action the Auto Scaling group should take when the lifecycle hook timeout elapses or if an unexpected failure occurs. The possible values are <code>CONTINUE</code> and <code>ABANDON</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable defaultResult;

/**
 <p>The maximum time, in seconds, that an instance can remain in a <code>Pending:Wait</code> or <code>Terminating:Wait</code> state. The maximum is 172800 seconds (48 hours) or 100 times <code>HeartbeatTimeout</code>, whichever is smaller.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable globalTimeout;

/**
 <p>The maximum time, in seconds, that can elapse before the lifecycle hook times out. If the lifecycle hook times out, Amazon EC2 Auto Scaling performs the action that you specified in the <code>DefaultResult</code> parameter.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable heartbeatTimeout;

/**
 <p>The name of the lifecycle hook.</p>
 */
@property (nonatomic, strong) NSString * _Nullable lifecycleHookName;

/**
 <p>The state of the EC2 instance to which to attach the lifecycle hook. The following are possible values:</p><ul><li><p>autoscaling:EC2_INSTANCE_LAUNCHING</p></li><li><p>autoscaling:EC2_INSTANCE_TERMINATING</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable lifecycleTransition;

/**
 <p>Additional information that is included any time Amazon EC2 Auto Scaling sends a message to the notification target.</p>
 */
@property (nonatomic, strong) NSString * _Nullable notificationMetadata;

/**
 <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to when an instance is in the transition state for the lifecycle hook. The notification target can be either an SQS queue or an SNS topic.</p>
 */
@property (nonatomic, strong) NSString * _Nullable notificationTargetARN;

/**
 <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the specified notification target.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

@end

/**
 <p>Describes a lifecycle hook. Used in combination with <a>CreateAutoScalingGroup</a>.</p><p>A lifecycle hook tells Amazon EC2 Auto Scaling to perform an action on an instance when the instance launches (before it is put into service) or as the instance terminates (before it is fully terminated).</p><p>This step is a part of the procedure for creating a lifecycle hook for an Auto Scaling group:</p><ol><li><p>(Optional) Create a Lambda function and a rule that allows CloudWatch Events to invoke your Lambda function when Amazon EC2 Auto Scaling launches or terminates instances.</p></li><li><p>(Optional) Create a notification target and an IAM role. The target can be either an Amazon SQS queue or an Amazon SNS topic. The role allows Amazon EC2 Auto Scaling to publish lifecycle notifications to the target.</p></li><li><p><b>Create the lifecycle hook. Specify whether the hook is used when the instances launch or terminate.</b></p></li><li><p>If you need more time, record the lifecycle action heartbeat to keep the instance in a pending state using using <a>RecordLifecycleActionHeartbeat</a>.</p></li><li><p>If you finish before the timeout period ends, complete the lifecycle action using <a>CompleteLifecycleAction</a>.</p></li></ol><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon EC2 Auto Scaling Lifecycle Hooks</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p>You can view the lifecycle hooks for an Auto Scaling group using <a>DescribeLifecycleHooks</a>. You can modify an existing lifecycle hook or create new lifecycle hooks using <a>PutLifecycleHook</a>. If you are no longer using a lifecycle hook, you can delete it using <a>DeleteLifecycleHook</a>.</p>
 Required parameters: [LifecycleHookName, LifecycleTransition]
 */
@interface AWSAutoScalingLifecycleHookSpecification : AWSModel


/**
 <p>Defines the action the Auto Scaling group should take when the lifecycle hook timeout elapses or if an unexpected failure occurs. The valid values are <code>CONTINUE</code> and <code>ABANDON</code>. The default value is <code>ABANDON</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable defaultResult;

/**
 <p>The maximum time, in seconds, that can elapse before the lifecycle hook times out.</p><p>If the lifecycle hook times out, Amazon EC2 Auto Scaling performs the action that you specified in the <code>DefaultResult</code> parameter. You can prevent the lifecycle hook from timing out by calling <a>RecordLifecycleActionHeartbeat</a>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable heartbeatTimeout;

/**
 <p>The name of the lifecycle hook.</p>
 */
@property (nonatomic, strong) NSString * _Nullable lifecycleHookName;

/**
 <p>The state of the EC2 instance to which you want to attach the lifecycle hook. The valid values are:</p><ul><li><p>autoscaling:EC2_INSTANCE_LAUNCHING</p></li><li><p>autoscaling:EC2_INSTANCE_TERMINATING</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable lifecycleTransition;

/**
 <p>Additional information that you want to include any time Amazon EC2 Auto Scaling sends a message to the notification target.</p>
 */
@property (nonatomic, strong) NSString * _Nullable notificationMetadata;

/**
 <p>The ARN of the target that Amazon EC2 Auto Scaling sends notifications to when an instance is in the transition state for the lifecycle hook. The notification target can be either an SQS queue or an SNS topic.</p>
 */
@property (nonatomic, strong) NSString * _Nullable notificationTargetARN;

/**
 <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the specified notification target, for example, an Amazon SNS topic or an Amazon SQS queue.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

@end

/**
 <p>Describes the state of a Classic Load Balancer.</p><p>If you specify a load balancer when creating the Auto Scaling group, the state of the load balancer is <code>InService</code>.</p><p>If you attach a load balancer to an existing Auto Scaling group, the initial state is <code>Adding</code>. The state transitions to <code>Added</code> after all instances in the group are registered with the load balancer. If Elastic Load Balancing health checks are enabled for the load balancer, the state transitions to <code>InService</code> after at least one instance in the group passes the health check. If EC2 health checks are enabled instead, the load balancer remains in the <code>Added</code> state.</p>
 */
@interface AWSAutoScalingLoadBalancerState : AWSModel


/**
 <p>The name of the load balancer.</p>
 */
@property (nonatomic, strong) NSString * _Nullable loadBalancerName;

/**
 <p>One of the following load balancer states:</p><ul><li><p><code>Adding</code> - The instances in the group are being registered with the load balancer.</p></li><li><p><code>Added</code> - All instances in the group are registered with the load balancer.</p></li><li><p><code>InService</code> - At least one instance in the group passed an ELB health check.</p></li><li><p><code>Removing</code> - The instances in the group are being deregistered from the load balancer. If connection draining is enabled, Elastic Load Balancing waits for in-flight requests to complete before deregistering the instances.</p></li><li><p><code>Removed</code> - All instances in the group are deregistered from the load balancer.</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable state;

@end

/**
 <p>Describes the state of a target group.</p><p>If you attach a target group to an existing Auto Scaling group, the initial state is <code>Adding</code>. The state transitions to <code>Added</code> after all Auto Scaling instances are registered with the target group. If Elastic Load Balancing health checks are enabled, the state transitions to <code>InService</code> after at least one Auto Scaling instance passes the health check. If EC2 health checks are enabled instead, the target group remains in the <code>Added</code> state.</p>
 */
@interface AWSAutoScalingLoadBalancerTargetGroupState : AWSModel


/**
 <p>The Amazon Resource Name (ARN) of the target group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable loadBalancerTargetGroupARN;

/**
 <p>The state of the target group.</p><ul><li><p><code>Adding</code> - The Auto Scaling instances are being registered with the target group.</p></li><li><p><code>Added</code> - All Auto Scaling instances are registered with the target group.</p></li><li><p><code>InService</code> - At least one Auto Scaling instance passed an ELB health check.</p></li><li><p><code>Removing</code> - The Auto Scaling instances are being deregistered from the target group. If connection draining is enabled, Elastic Load Balancing waits for in-flight requests to complete before deregistering the instances.</p></li><li><p><code>Removed</code> - All Auto Scaling instances are deregistered from the target group.</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable state;

@end

/**
 <p>Describes a metric.</p>
 */
@interface AWSAutoScalingMetricCollectionType : AWSModel


/**
 <p>One of the following metrics:</p><ul><li><p><code>GroupMinSize</code></p></li><li><p><code>GroupMaxSize</code></p></li><li><p><code>GroupDesiredCapacity</code></p></li><li><p><code>GroupInServiceInstances</code></p></li><li><p><code>GroupPendingInstances</code></p></li><li><p><code>GroupStandbyInstances</code></p></li><li><p><code>GroupTerminatingInstances</code></p></li><li><p><code>GroupTotalInstances</code></p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable metric;

@end

/**
 <p>Describes the dimension of a metric.</p>
 Required parameters: [Name, Value]
 */
@interface AWSAutoScalingMetricDimension : AWSModel


/**
 <p>The name of the dimension.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>The value of the dimension.</p>
 */
@property (nonatomic, strong) NSString * _Nullable value;

@end

/**
 <p>Describes a granularity of a metric.</p>
 */
@interface AWSAutoScalingMetricGranularityType : AWSModel


/**
 <p>The granularity. The only valid value is <code>1Minute</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable granularity;

@end

/**
 <p>Describes a mixed instances policy for an Auto Scaling group. With mixed instances, your Auto Scaling group can provision a combination of On-Demand Instances and Spot Instances across multiple instance types. For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-purchase-options.html">Auto Scaling Groups with Multiple Instance Types and Purchase Options</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p>You can create a mixed instances policy for a new Auto Scaling group (<a>CreateAutoScalingGroup</a>), or you can create it for an existing group by updating the group (<a>UpdateAutoScalingGroup</a>) to specify <code>MixedInstancesPolicy</code> as the top-level parameter instead of a launch configuration or template.</p>
 */
@interface AWSAutoScalingMixedInstancesPolicy : AWSModel


/**
 <p>The instances distribution to use.</p><p>If you leave this parameter unspecified when creating a mixed instances policy, the default values are used.</p>
 */
@property (nonatomic, strong) AWSAutoScalingInstancesDistribution * _Nullable instancesDistribution;

/**
 <p>The launch template and instance types (overrides).</p><p>This parameter must be specified when creating a mixed instances policy.</p>
 */
@property (nonatomic, strong) AWSAutoScalingLaunchTemplate * _Nullable launchTemplate;

@end

/**
 <p>Describes a notification.</p>
 */
@interface AWSAutoScalingNotificationConfiguration : AWSModel


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>One of the following event notification types:</p><ul><li><p><code>autoscaling:EC2_INSTANCE_LAUNCH</code></p></li><li><p><code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code></p></li><li><p><code>autoscaling:EC2_INSTANCE_TERMINATE</code></p></li><li><p><code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code></p></li><li><p><code>autoscaling:TEST_NOTIFICATION</code></p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable notificationType;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service (Amazon SNS) topic.</p>
 */
@property (nonatomic, strong) NSString * _Nullable topicARN;

@end

/**
 
 */
@interface AWSAutoScalingPoliciesType : AWSModel


/**
 <p>A string that indicates that the response contains more items than can be returned in a single response. To receive additional items, specify this string for the <code>NextToken</code> value when requesting the next set of items. This value is null when there are no more items to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The scaling policies.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingScalingPolicy *> * _Nullable scalingPolicies;

@end

/**
 <p>Contains the output of PutScalingPolicy.</p>
 */
@interface AWSAutoScalingPolicyARNType : AWSModel


/**
 <p>The CloudWatch alarms created for the target tracking scaling policy.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingAlarm *> * _Nullable alarms;

/**
 <p>The Amazon Resource Name (ARN) of the policy.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyARN;

@end

/**
 <p>Represents a predefined metric for a target tracking scaling policy to use with Amazon EC2 Auto Scaling.</p>
 Required parameters: [PredefinedMetricType]
 */
@interface AWSAutoScalingPredefinedMetricSpecification : AWSModel


/**
 <p>The metric type.</p>
 */
@property (nonatomic, assign) AWSAutoScalingMetricType predefinedMetricType;

/**
 <p>Identifies the resource associated with the metric type. The following predefined metrics are available:</p><ul><li><p><code>ASGAverageCPUUtilization</code> - Average CPU utilization of the Auto Scaling group.</p></li><li><p><code>ASGAverageNetworkIn</code> - Average number of bytes received on all network interfaces by the Auto Scaling group.</p></li><li><p><code>ASGAverageNetworkOut</code> - Average number of bytes sent out on all network interfaces by the Auto Scaling group.</p></li><li><p><code>ALBRequestCountPerTarget</code> - Number of requests completed per target in an Application Load Balancer target group.</p></li></ul><p>For predefined metric types <code>ASGAverageCPUUtilization</code>, <code>ASGAverageNetworkIn</code>, and <code>ASGAverageNetworkOut</code>, the parameter must not be specified as the resource associated with the metric type is the Auto Scaling group. For predefined metric type <code>ALBRequestCountPerTarget</code>, the parameter must be specified in the format: <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i>/targetgroup/<i>target-group-name</i>/<i>target-group-id</i></code>, where <code>app/<i>load-balancer-name</i>/<i>load-balancer-id</i></code> is the final portion of the load balancer ARN, and <code>targetgroup/<i>target-group-name</i>/<i>target-group-id</i></code> is the final portion of the target group ARN. The target group must be attached to the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable resourceLabel;

@end

/**
 <p>Describes a process type.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html#process-types">Scaling Processes</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 Required parameters: [ProcessName]
 */
@interface AWSAutoScalingProcessType : AWSModel


/**
 <p>One of the following processes:</p><ul><li><p><code>Launch</code></p></li><li><p><code>Terminate</code></p></li><li><p><code>AddToLoadBalancer</code></p></li><li><p><code>AlarmNotification</code></p></li><li><p><code>AZRebalance</code></p></li><li><p><code>HealthCheck</code></p></li><li><p><code>ReplaceUnhealthy</code></p></li><li><p><code>ScheduledActions</code></p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable processName;

@end

/**
 
 */
@interface AWSAutoScalingProcessesType : AWSModel


/**
 <p>The names of the process types.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingProcessType *> * _Nullable processes;

@end

/**
 
 */
@interface AWSAutoScalingPutLifecycleHookAnswer : AWSModel


@end

/**
 
 */
@interface AWSAutoScalingPutLifecycleHookType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>Defines the action the Auto Scaling group should take when the lifecycle hook timeout elapses or if an unexpected failure occurs. This parameter can be either <code>CONTINUE</code> or <code>ABANDON</code>. The default value is <code>ABANDON</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable defaultResult;

/**
 <p>The maximum time, in seconds, that can elapse before the lifecycle hook times out. The range is from <code>30</code> to <code>7200</code> seconds. The default value is <code>3600</code> seconds (1 hour).</p><p>If the lifecycle hook times out, Amazon EC2 Auto Scaling performs the action that you specified in the <code>DefaultResult</code> parameter. You can prevent the lifecycle hook from timing out by calling <a>RecordLifecycleActionHeartbeat</a>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable heartbeatTimeout;

/**
 <p>The name of the lifecycle hook.</p>
 */
@property (nonatomic, strong) NSString * _Nullable lifecycleHookName;

/**
 <p>The instance state to which you want to attach the lifecycle hook. The valid values are:</p><ul><li><p>autoscaling:EC2_INSTANCE_LAUNCHING</p></li><li><p>autoscaling:EC2_INSTANCE_TERMINATING</p></li></ul><p>Conditional: This parameter is required for new lifecycle hooks, but optional when updating existing hooks.</p>
 */
@property (nonatomic, strong) NSString * _Nullable lifecycleTransition;

/**
 <p>Additional information that you want to include any time Amazon EC2 Auto Scaling sends a message to the notification target.</p>
 */
@property (nonatomic, strong) NSString * _Nullable notificationMetadata;

/**
 <p>The ARN of the notification target that Amazon EC2 Auto Scaling uses to notify you when an instance is in the transition state for the lifecycle hook. This target can be either an SQS queue or an SNS topic.</p><p>If you specify an empty string, this overrides the current ARN.</p><p>This operation uses the JSON format when sending notifications to an Amazon SQS queue, and an email key-value pair format when sending notifications to an Amazon SNS topic.</p><p>When you specify a notification target, Amazon EC2 Auto Scaling sends it a test message. Test messages contain the following additional key-value pair: <code>"Event": "autoscaling:TEST_NOTIFICATION"</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable notificationTargetARN;

/**
 <p>The ARN of the IAM role that allows the Auto Scaling group to publish to the specified notification target, for example, an Amazon SNS topic or an Amazon SQS queue.</p><p>Conditional: This parameter is required for new lifecycle hooks, but optional when updating existing hooks.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleARN;

@end

/**
 
 */
@interface AWSAutoScalingPutNotificationConfigurationType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The type of event that causes the notification to be sent. For more information about notification types supported by Amazon EC2 Auto Scaling, see <a>DescribeAutoScalingNotificationTypes</a>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable notificationTypes;

/**
 <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service (Amazon SNS) topic.</p>
 */
@property (nonatomic, strong) NSString * _Nullable topicARN;

@end

/**
 
 */
@interface AWSAutoScalingPutScalingPolicyType : AWSRequest


/**
 <p>The adjustment type. The valid values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p><p>This parameter is supported if the policy type is <code>SimpleScaling</code> or <code>StepScaling</code>.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scale-based-on-demand.html">Dynamic Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable adjustmentType;

/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The amount of time, in seconds, after a scaling activity completes and before the next scaling activity can start. If this parameter is not specified, the default cooldown period for the group applies.</p><p>This parameter is supported if the policy type is <code>SimpleScaling</code>.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/Cooldown.html">Scaling Cooldowns</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable cooldown;

/**
 <p>The estimated time, in seconds, until a newly launched instance can contribute to the CloudWatch metrics. The default is to use the value specified for the default cooldown period for the group.</p><p>This parameter is supported if the policy type is <code>StepScaling</code> or <code>TargetTrackingScaling</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable estimatedInstanceWarmup;

/**
 <p>The aggregation type for the CloudWatch metrics. The valid values are <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>. If the aggregation type is null, the value is treated as <code>Average</code>.</p><p>This parameter is supported if the policy type is <code>StepScaling</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable metricAggregationType;

/**
 <p>The minimum number of instances to scale. If the value of <code>AdjustmentType</code> is <code>PercentChangeInCapacity</code>, the scaling policy changes the <code>DesiredCapacity</code> of the Auto Scaling group by at least this many instances. Otherwise, the error is <code>ValidationError</code>.</p><p>This parameter is supported if the policy type is <code>SimpleScaling</code> or <code>StepScaling</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable minAdjustmentMagnitude;

/**
 <p>Available for backward compatibility. Use <code>MinAdjustmentMagnitude</code> instead.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable minAdjustmentStep;

/**
 <p>The name of the policy.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyName;

/**
 <p>The policy type. The valid values are <code>SimpleScaling</code>, <code>StepScaling</code>, and <code>TargetTrackingScaling</code>. If the policy type is null, the value is treated as <code>SimpleScaling</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyType;

/**
 <p>The amount by which to scale, based on the specified adjustment type. A positive value adds to the current capacity while a negative number removes from the current capacity.</p><p>Conditional: This parameter is required if the policy type is <code>SimpleScaling</code> and not supported otherwise.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable scalingAdjustment;

/**
 <p>A set of adjustments that enable you to scale based on the size of the alarm breach.</p><p>Conditional: This parameter is required if the policy type is <code>StepScaling</code> and not supported otherwise.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingStepAdjustment *> * _Nullable stepAdjustments;

/**
 <p>A target tracking scaling policy. Includes support for predefined or customized metrics.</p><p>Conditional: This parameter is required if the policy type is <code>TargetTrackingScaling</code> and not supported otherwise.</p>
 */
@property (nonatomic, strong) AWSAutoScalingTargetTrackingConfiguration * _Nullable targetTrackingConfiguration;

@end

/**
 
 */
@interface AWSAutoScalingPutScheduledUpdateGroupActionType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The number of EC2 instances that should be running in the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable desiredCapacity;

/**
 <p>The date and time for the recurring schedule to end. Amazon EC2 Auto Scaling does not perform the action after this time. </p>
 */
@property (nonatomic, strong) NSDate * _Nullable endTime;

/**
 <p>The maximum number of instances in the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxSize;

/**
 <p>The minimum number of instances in the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable minSize;

/**
 <p>The recurring schedule for this action, in Unix cron syntax format. This format consists of five fields separated by white spaces: [Minute] [Hour] [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for example, <code>"30 0 1 1,6,12 *"</code>). For more information about this format, see <a href="http://crontab.org">Crontab</a>.</p><p>When <code>StartTime</code> and <code>EndTime</code> are specified with <code>Recurrence</code>, they form the boundaries of when the recurring action starts and stops.</p>
 */
@property (nonatomic, strong) NSString * _Nullable recurrence;

/**
 <p>The name of this scaling action.</p>
 */
@property (nonatomic, strong) NSString * _Nullable scheduledActionName;

/**
 <p>The date and time for this action to start, in YYYY-MM-DDThh:mm:ssZ format in UTC/GMT only and in quotes (for example, <code>"2019-06-01T00:00:00Z"</code>).</p><p>If you specify <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto Scaling performs the action at this time, and then performs the action based on the specified recurrence.</p><p>If you try to schedule your action in the past, Amazon EC2 Auto Scaling returns an error message.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable startTime;

/**
 <p>This parameter is deprecated.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable time;

@end

/**
 
 */
@interface AWSAutoScalingRecordLifecycleActionHeartbeatAnswer : AWSModel


@end

/**
 
 */
@interface AWSAutoScalingRecordLifecycleActionHeartbeatType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>A token that uniquely identifies a specific lifecycle action associated with an instance. Amazon EC2 Auto Scaling sends this token to the notification target that you specified when you created the lifecycle hook.</p>
 */
@property (nonatomic, strong) NSString * _Nullable lifecycleActionToken;

/**
 <p>The name of the lifecycle hook.</p>
 */
@property (nonatomic, strong) NSString * _Nullable lifecycleHookName;

@end

/**
 <p>Describes a scaling policy.</p>
 */
@interface AWSAutoScalingScalingPolicy : AWSModel


/**
 <p>The adjustment type, which specifies how <code>ScalingAdjustment</code> is interpreted. The valid values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable adjustmentType;

/**
 <p>The CloudWatch alarms related to the policy.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingAlarm *> * _Nullable alarms;

/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The amount of time, in seconds, after a scaling activity completes before any further dynamic scaling activities can start.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable cooldown;

/**
 <p>The estimated time, in seconds, until a newly launched instance can contribute to the CloudWatch metrics.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable estimatedInstanceWarmup;

/**
 <p>The aggregation type for the CloudWatch metrics. The valid values are <code>Minimum</code>, <code>Maximum</code>, and <code>Average</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable metricAggregationType;

/**
 <p>The minimum number of instances to scale. If the value of <code>AdjustmentType</code> is <code>PercentChangeInCapacity</code>, the scaling policy changes the <code>DesiredCapacity</code> of the Auto Scaling group by at least this many instances. Otherwise, the error is <code>ValidationError</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable minAdjustmentMagnitude;

/**
 <p>Available for backward compatibility. Use <code>MinAdjustmentMagnitude</code> instead.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable minAdjustmentStep;

/**
 <p>The Amazon Resource Name (ARN) of the policy.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyARN;

/**
 <p>The name of the scaling policy.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyName;

/**
 <p>The policy type. The valid values are <code>SimpleScaling</code>, <code>StepScaling</code>, and <code>TargetTrackingScaling</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyType;

/**
 <p>The amount by which to scale, based on the specified adjustment type. A positive value adds to the current capacity while a negative number removes from the current capacity.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable scalingAdjustment;

/**
 <p>A set of adjustments that enable you to scale based on the size of the alarm breach.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingStepAdjustment *> * _Nullable stepAdjustments;

/**
 <p>A target tracking scaling policy.</p>
 */
@property (nonatomic, strong) AWSAutoScalingTargetTrackingConfiguration * _Nullable targetTrackingConfiguration;

@end

/**
 
 */
@interface AWSAutoScalingScalingProcessQuery : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>One or more of the following processes. If you omit this parameter, all processes are specified.</p><ul><li><p><code>Launch</code></p></li><li><p><code>Terminate</code></p></li><li><p><code>HealthCheck</code></p></li><li><p><code>ReplaceUnhealthy</code></p></li><li><p><code>AZRebalance</code></p></li><li><p><code>AlarmNotification</code></p></li><li><p><code>ScheduledActions</code></p></li><li><p><code>AddToLoadBalancer</code></p></li></ul>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable scalingProcesses;

@end

/**
 
 */
@interface AWSAutoScalingScheduledActionsType : AWSModel


/**
 <p>A string that indicates that the response contains more items than can be returned in a single response. To receive additional items, specify this string for the <code>NextToken</code> value when requesting the next set of items. This value is null when there are no more items to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The scheduled actions.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingScheduledUpdateGroupAction *> * _Nullable scheduledUpdateGroupActions;

@end

/**
 <p>Describes a scheduled scaling action. Used in response to <a>DescribeScheduledActions</a>. </p>
 */
@interface AWSAutoScalingScheduledUpdateGroupAction : AWSModel


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The number of instances you prefer to maintain in the group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable desiredCapacity;

/**
 <p>The date and time in UTC for the recurring schedule to end. For example, <code>"2019-06-01T00:00:00Z"</code>. </p>
 */
@property (nonatomic, strong) NSDate * _Nullable endTime;

/**
 <p>The maximum number of instances in the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxSize;

/**
 <p>The minimum number of instances in the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable minSize;

/**
 <p>The recurring schedule for the action, in Unix cron syntax format. </p><p>When <code>StartTime</code> and <code>EndTime</code> are specified with <code>Recurrence</code>, they form the boundaries of when the recurring action starts and stops.</p>
 */
@property (nonatomic, strong) NSString * _Nullable recurrence;

/**
 <p>The Amazon Resource Name (ARN) of the scheduled action.</p>
 */
@property (nonatomic, strong) NSString * _Nullable scheduledActionARN;

/**
 <p>The name of the scheduled action.</p>
 */
@property (nonatomic, strong) NSString * _Nullable scheduledActionName;

/**
 <p>The date and time in UTC for this action to start. For example, <code>"2019-06-01T00:00:00Z"</code>. </p>
 */
@property (nonatomic, strong) NSDate * _Nullable startTime;

/**
 <p>This parameter is deprecated.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable time;

@end

/**
 <p>Describes one or more scheduled scaling action updates for a specified Auto Scaling group. Used in combination with <a>BatchPutScheduledUpdateGroupAction</a>.</p><p>When updating a scheduled scaling action, all optional parameters are left unchanged if not specified. </p>
 Required parameters: [ScheduledActionName]
 */
@interface AWSAutoScalingScheduledUpdateGroupActionRequest : AWSModel


/**
 <p>The number of EC2 instances that should be running in the group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable desiredCapacity;

/**
 <p>The date and time for the recurring schedule to end. Amazon EC2 Auto Scaling does not perform the action after this time.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable endTime;

/**
 <p>The maximum number of instances in the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxSize;

/**
 <p>The minimum number of instances in the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable minSize;

/**
 <p>The recurring schedule for the action, in Unix cron syntax format. This format consists of five fields separated by white spaces: [Minute] [Hour] [Day_of_Month] [Month_of_Year] [Day_of_Week]. The value must be in quotes (for example, <code>"30 0 1 1,6,12 *"</code>). For more information about this format, see <a href="http://crontab.org">Crontab</a>.</p><p>When <code>StartTime</code> and <code>EndTime</code> are specified with <code>Recurrence</code>, they form the boundaries of when the recurring action starts and stops.</p>
 */
@property (nonatomic, strong) NSString * _Nullable recurrence;

/**
 <p>The name of the scaling action.</p>
 */
@property (nonatomic, strong) NSString * _Nullable scheduledActionName;

/**
 <p>The date and time for the action to start, in YYYY-MM-DDThh:mm:ssZ format in UTC/GMT only and in quotes (for example, <code>"2019-06-01T00:00:00Z"</code>).</p><p>If you specify <code>Recurrence</code> and <code>StartTime</code>, Amazon EC2 Auto Scaling performs the action at this time, and then performs the action based on the specified recurrence.</p><p>If you try to schedule the action in the past, Amazon EC2 Auto Scaling returns an error message.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable startTime;

@end

/**
 
 */
@interface AWSAutoScalingSetDesiredCapacityType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>The number of EC2 instances that should be running in the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable desiredCapacity;

/**
 <p>Indicates whether Amazon EC2 Auto Scaling waits for the cooldown period to complete before initiating a scaling activity to set your Auto Scaling group to its new capacity. By default, Amazon EC2 Auto Scaling does not honor the cooldown period during manual scaling activities.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable honorCooldown;

@end

/**
 
 */
@interface AWSAutoScalingSetInstanceHealthQuery : AWSRequest


/**
 <p>The health status of the instance. Set to <code>Healthy</code> to have the instance remain in service. Set to <code>Unhealthy</code> to have the instance be out of service. Amazon EC2 Auto Scaling terminates and replaces the unhealthy instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable healthStatus;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>If the Auto Scaling group of the specified instance has a <code>HealthCheckGracePeriod</code> specified for the group, by default, this call respects the grace period. Set this to <code>False</code>, to have the call not respect the grace period associated with the group.</p><p>For more information about the health check grace period, see <a>CreateAutoScalingGroup</a>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable shouldRespectGracePeriod;

@end

/**
 
 */
@interface AWSAutoScalingSetInstanceProtectionAnswer : AWSModel


@end

/**
 
 */
@interface AWSAutoScalingSetInstanceProtectionQuery : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>One or more instance IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIds;

/**
 <p>Indicates whether the instance is protected from termination by Amazon EC2 Auto Scaling when scaling in.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable protectedFromScaleIn;

@end

/**
 <p>Describes an adjustment based on the difference between the value of the aggregated CloudWatch metric and the breach threshold that you've defined for the alarm. Used in combination with <a>PutScalingPolicy</a>.</p><p>For the following examples, suppose that you have an alarm with a breach threshold of 50:</p><ul><li><p>To trigger the adjustment when the metric is greater than or equal to 50 and less than 60, specify a lower bound of 0 and an upper bound of 10.</p></li><li><p>To trigger the adjustment when the metric is greater than 40 and less than or equal to 50, specify a lower bound of -10 and an upper bound of 0.</p></li></ul><p>There are a few rules for the step adjustments for your step policy:</p><ul><li><p>The ranges of your step adjustments can't overlap or have a gap.</p></li><li><p>At most, one step adjustment can have a null lower bound. If one step adjustment has a negative lower bound, then there must be a step adjustment with a null lower bound.</p></li><li><p>At most, one step adjustment can have a null upper bound. If one step adjustment has a positive upper bound, then there must be a step adjustment with a null upper bound.</p></li><li><p>The upper and lower bound can't be null in the same step adjustment.</p></li></ul>
 Required parameters: [ScalingAdjustment]
 */
@interface AWSAutoScalingStepAdjustment : AWSModel


/**
 <p>The lower bound for the difference between the alarm threshold and the CloudWatch metric. If the metric value is above the breach threshold, the lower bound is inclusive (the metric must be greater than or equal to the threshold plus the lower bound). Otherwise, it is exclusive (the metric must be greater than the threshold plus the lower bound). A null value indicates negative infinity.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable metricIntervalLowerBound;

/**
 <p>The upper bound for the difference between the alarm threshold and the CloudWatch metric. If the metric value is above the breach threshold, the upper bound is exclusive (the metric must be less than the threshold plus the upper bound). Otherwise, it is inclusive (the metric must be less than or equal to the threshold plus the upper bound). A null value indicates positive infinity.</p><p>The upper bound must be greater than the lower bound.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable metricIntervalUpperBound;

/**
 <p>The amount by which to scale, based on the specified adjustment type. A positive value adds to the current capacity while a negative number removes from the current capacity.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable scalingAdjustment;

@end

/**
 <p>Describes an automatic scaling process that has been suspended. For more information, see <a>ProcessType</a>.</p>
 */
@interface AWSAutoScalingSuspendedProcess : AWSModel


/**
 <p>The name of the suspended process.</p>
 */
@property (nonatomic, strong) NSString * _Nullable processName;

/**
 <p>The reason that the process was suspended.</p>
 */
@property (nonatomic, strong) NSString * _Nullable suspensionReason;

@end

/**
 <p>Describes a tag for an Auto Scaling group.</p>
 Required parameters: [Key]
 */
@interface AWSAutoScalingTag : AWSModel


/**
 <p>The tag key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable key;

/**
 <p>Determines whether the tag is added to new instances as they are launched in the group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable propagateAtLaunch;

/**
 <p>The name of the group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable resourceId;

/**
 <p>The type of resource. The only supported value is <code>auto-scaling-group</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable resourceType;

/**
 <p>The tag value.</p>
 */
@property (nonatomic, strong) NSString * _Nullable value;

@end

/**
 <p>Describes a tag for an Auto Scaling group.</p>
 */
@interface AWSAutoScalingTagDescription : AWSModel


/**
 <p>The tag key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable key;

/**
 <p>Determines whether the tag is added to new instances as they are launched in the group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable propagateAtLaunch;

/**
 <p>The name of the group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable resourceId;

/**
 <p>The type of resource. The only supported value is <code>auto-scaling-group</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable resourceType;

/**
 <p>The tag value.</p>
 */
@property (nonatomic, strong) NSString * _Nullable value;

@end

/**
 
 */
@interface AWSAutoScalingTagsType : AWSModel


/**
 <p>A string that indicates that the response contains more items than can be returned in a single response. To receive additional items, specify this string for the <code>NextToken</code> value when requesting the next set of items. This value is null when there are no more items to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>One or more tags.</p>
 */
@property (nonatomic, strong) NSArray<AWSAutoScalingTagDescription *> * _Nullable tags;

@end

/**
 <p>Represents a target tracking scaling policy configuration to use with Amazon EC2 Auto Scaling.</p>
 Required parameters: [TargetValue]
 */
@interface AWSAutoScalingTargetTrackingConfiguration : AWSModel


/**
 <p>A customized metric. You must specify either a predefined metric or a customized metric.</p>
 */
@property (nonatomic, strong) AWSAutoScalingCustomizedMetricSpecification * _Nullable customizedMetricSpecification;

/**
 <p>Indicates whether scaling in by the target tracking scaling policy is disabled. If scaling in is disabled, the target tracking scaling policy doesn't remove instances from the Auto Scaling group. Otherwise, the target tracking scaling policy can remove instances from the Auto Scaling group. The default is <code>false</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable disableScaleIn;

/**
 <p>A predefined metric. You must specify either a predefined metric or a customized metric.</p>
 */
@property (nonatomic, strong) AWSAutoScalingPredefinedMetricSpecification * _Nullable predefinedMetricSpecification;

/**
 <p>The target value for the metric.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable targetValue;

@end

/**
 
 */
@interface AWSAutoScalingTerminateInstanceInAutoScalingGroupType : AWSRequest


/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>Indicates whether terminating the instance also decrements the size of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable shouldDecrementDesiredCapacity;

@end

/**
 
 */
@interface AWSAutoScalingUpdateAutoScalingGroupType : AWSRequest


/**
 <p>The name of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable autoScalingGroupName;

/**
 <p>One or more Availability Zones for the group.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable availabilityZones;

/**
 <p>The amount of time, in seconds, after a scaling activity completes before another scaling activity can start. The default value is <code>300</code>. This cooldown period is not used when a scaling-specific cooldown is specified.</p><p>Cooldown periods are not supported for target tracking scaling policies, step scaling policies, or scheduled scaling. For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/Cooldown.html">Scaling Cooldowns</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable defaultCooldown;

/**
 <p>The number of EC2 instances that should be running in the Auto Scaling group. This number must be greater than or equal to the minimum size of the group and less than or equal to the maximum size of the group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable desiredCapacity;

/**
 <p>The amount of time, in seconds, that Amazon EC2 Auto Scaling waits before checking the health status of an EC2 instance that has come into service. The default value is <code>0</code>.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health Checks for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p>Conditional: This parameter is required if you are adding an <code>ELB</code> health check.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable healthCheckGracePeriod;

/**
 <p>The service to use for the health checks. The valid values are <code>EC2</code> and <code>ELB</code>. If you configure an Auto Scaling group to use ELB health checks, it considers the instance unhealthy if it fails either the EC2 status checks or the load balancer health checks.</p>
 */
@property (nonatomic, strong) NSString * _Nullable healthCheckType;

/**
 <p>The name of the launch configuration. If you specify <code>LaunchConfigurationName</code> in your update request, you can't specify <code>LaunchTemplate</code> or <code>MixedInstancesPolicy</code>.</p><note><p>To update an Auto Scaling group with a launch configuration with <code>InstanceMonitoring</code> set to <code>false</code>, you must first disable the collection of group metrics. Otherwise, you get an error. If you have previously enabled the collection of group metrics, you can disable it using <a>DisableMetricsCollection</a>.</p></note>
 */
@property (nonatomic, strong) NSString * _Nullable launchConfigurationName;

/**
 <p>The launch template and version to use to specify the updates. If you specify <code>LaunchTemplate</code> in your update request, you can't specify <code>LaunchConfigurationName</code> or <code>MixedInstancesPolicy</code>.</p>
 */
@property (nonatomic, strong) AWSAutoScalingLaunchTemplateSpecification * _Nullable launchTemplate;

/**
 <p>The maximum size of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxSize;

/**
 <p>The minimum size of the Auto Scaling group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable minSize;

/**
 <p>An embedded object that specifies a mixed instances policy.</p><p>In your call to <code>UpdateAutoScalingGroup</code>, you can make changes to the policy that is specified. All optional parameters are left unchanged if not specified.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-purchase-options.html">Auto Scaling Groups with Multiple Instance Types and Purchase Options</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) AWSAutoScalingMixedInstancesPolicy * _Nullable mixedInstancesPolicy;

/**
 <p>Indicates whether newly launched instances are protected from termination by Amazon EC2 Auto Scaling when scaling in.</p><p>For more information about preventing instances from terminating on scale in, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance Protection</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable latestInstancesProtectedFromScaleIn;

/**
 <p>The name of the placement group into which to launch your instances, if any. A placement group is a logical grouping of instances within a single Availability Zone. You cannot specify multiple Availability Zones and a placement group. For more information, see <a href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable placementGroup;

/**
 <p>The Amazon Resource Name (ARN) of the service-linked role that the Auto Scaling group uses to call other AWS services on your behalf. For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-service-linked-role.html">Service-Linked Roles</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable serviceLinkedRoleARN;

/**
 <p>A standalone termination policy or a list of termination policies used to select the instance to terminate. The policies are executed in the order that they are listed.</p><p>For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling Which Instances Auto Scaling Terminates During Scale In</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable terminationPolicies;

/**
 <p>A comma-separated list of subnet IDs for virtual private cloud (VPC).</p><p>If you specify <code>VPCZoneIdentifier</code> with <code>AvailabilityZones</code>, the subnets that you specify for this parameter must reside in those Availability Zones.</p>
 */
@property (nonatomic, strong) NSString * _Nullable VPCZoneIdentifier;

@end

NS_ASSUME_NONNULL_END
