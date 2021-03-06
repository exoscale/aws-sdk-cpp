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
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/MetricAlarm.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{
  class AWS_CLOUDWATCH_API DescribeAlarmsResult
  {
  public:
    DescribeAlarmsResult();
    DescribeAlarmsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeAlarmsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The information for the specified alarms.</p>
     */
    inline const Aws::Vector<MetricAlarm>& GetMetricAlarms() const{ return m_metricAlarms; }

    /**
     * <p>The information for the specified alarms.</p>
     */
    inline void SetMetricAlarms(const Aws::Vector<MetricAlarm>& value) { m_metricAlarms = value; }

    /**
     * <p>The information for the specified alarms.</p>
     */
    inline void SetMetricAlarms(Aws::Vector<MetricAlarm>&& value) { m_metricAlarms = std::move(value); }

    /**
     * <p>The information for the specified alarms.</p>
     */
    inline DescribeAlarmsResult& WithMetricAlarms(const Aws::Vector<MetricAlarm>& value) { SetMetricAlarms(value); return *this;}

    /**
     * <p>The information for the specified alarms.</p>
     */
    inline DescribeAlarmsResult& WithMetricAlarms(Aws::Vector<MetricAlarm>&& value) { SetMetricAlarms(std::move(value)); return *this;}

    /**
     * <p>The information for the specified alarms.</p>
     */
    inline DescribeAlarmsResult& AddMetricAlarms(const MetricAlarm& value) { m_metricAlarms.push_back(value); return *this; }

    /**
     * <p>The information for the specified alarms.</p>
     */
    inline DescribeAlarmsResult& AddMetricAlarms(MetricAlarm&& value) { m_metricAlarms.push_back(std::move(value)); return *this; }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline DescribeAlarmsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline DescribeAlarmsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline DescribeAlarmsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAlarmsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAlarmsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:
    Aws::Vector<MetricAlarm> m_metricAlarms;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws