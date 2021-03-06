﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeAutoScalingInstances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DescribeAutoScalingInstancesType">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API DescribeAutoScalingInstancesRequest : public AutoScalingRequest
  {
  public:
    DescribeAutoScalingInstancesRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The instances to describe; up to 50 instance IDs. If you omit this parameter,
     * all Auto Scaling instances are described. If you specify an ID that does not
     * exist, it is ignored with no error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>The instances to describe; up to 50 instance IDs. If you omit this parameter,
     * all Auto Scaling instances are described. If you specify an ID that does not
     * exist, it is ignored with no error.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The instances to describe; up to 50 instance IDs. If you omit this parameter,
     * all Auto Scaling instances are described. If you specify an ID that does not
     * exist, it is ignored with no error.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>The instances to describe; up to 50 instance IDs. If you omit this parameter,
     * all Auto Scaling instances are described. If you specify an ID that does not
     * exist, it is ignored with no error.</p>
     */
    inline DescribeAutoScalingInstancesRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The instances to describe; up to 50 instance IDs. If you omit this parameter,
     * all Auto Scaling instances are described. If you specify an ID that does not
     * exist, it is ignored with no error.</p>
     */
    inline DescribeAutoScalingInstancesRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>The instances to describe; up to 50 instance IDs. If you omit this parameter,
     * all Auto Scaling instances are described. If you specify an ID that does not
     * exist, it is ignored with no error.</p>
     */
    inline DescribeAutoScalingInstancesRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The instances to describe; up to 50 instance IDs. If you omit this parameter,
     * all Auto Scaling instances are described. If you specify an ID that does not
     * exist, it is ignored with no error.</p>
     */
    inline DescribeAutoScalingInstancesRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The instances to describe; up to 50 instance IDs. If you omit this parameter,
     * all Auto Scaling instances are described. If you specify an ID that does not
     * exist, it is ignored with no error.</p>
     */
    inline DescribeAutoScalingInstancesRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline DescribeAutoScalingInstancesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeAutoScalingInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeAutoScalingInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeAutoScalingInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet;
    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
