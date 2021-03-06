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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/StageKey.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request to create an <a>ApiKey</a> resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateApiKeyRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API CreateApiKeyRequest : public APIGatewayRequest
  {
  public:
    CreateApiKeyRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the <a>ApiKey</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <a>ApiKey</a>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <a>ApiKey</a>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the <a>ApiKey</a>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <a>ApiKey</a>.</p>
     */
    inline CreateApiKeyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <a>ApiKey</a>.</p>
     */
    inline CreateApiKeyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the <a>ApiKey</a>.</p>
     */
    inline CreateApiKeyRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The description of the <a>ApiKey</a>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the <a>ApiKey</a>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the <a>ApiKey</a>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the <a>ApiKey</a>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the <a>ApiKey</a>.</p>
     */
    inline CreateApiKeyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the <a>ApiKey</a>.</p>
     */
    inline CreateApiKeyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the <a>ApiKey</a>.</p>
     */
    inline CreateApiKeyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Specifies whether the <a>ApiKey</a> can be used by callers.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether the <a>ApiKey</a> can be used by callers.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether the <a>ApiKey</a> can be used by callers.</p>
     */
    inline CreateApiKeyRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

    /**
     * <p>Specifies whether (<code>true</code>) or not (<code>false</code>) the key
     * identifier is distinct from the created API key value.</p>
     */
    inline bool GetGenerateDistinctId() const{ return m_generateDistinctId; }

    /**
     * <p>Specifies whether (<code>true</code>) or not (<code>false</code>) the key
     * identifier is distinct from the created API key value.</p>
     */
    inline void SetGenerateDistinctId(bool value) { m_generateDistinctIdHasBeenSet = true; m_generateDistinctId = value; }

    /**
     * <p>Specifies whether (<code>true</code>) or not (<code>false</code>) the key
     * identifier is distinct from the created API key value.</p>
     */
    inline CreateApiKeyRequest& WithGenerateDistinctId(bool value) { SetGenerateDistinctId(value); return *this;}

    /**
     * <p>Specifies a value of the API key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Specifies a value of the API key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Specifies a value of the API key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Specifies a value of the API key.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Specifies a value of the API key.</p>
     */
    inline CreateApiKeyRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Specifies a value of the API key.</p>
     */
    inline CreateApiKeyRequest& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Specifies a value of the API key.</p>
     */
    inline CreateApiKeyRequest& WithValue(const char* value) { SetValue(value); return *this;}

    /**
     * <p>DEPRECATED FOR USAGE PLANS - Specifies stages associated with the API
     * key.</p>
     */
    inline const Aws::Vector<StageKey>& GetStageKeys() const{ return m_stageKeys; }

    /**
     * <p>DEPRECATED FOR USAGE PLANS - Specifies stages associated with the API
     * key.</p>
     */
    inline void SetStageKeys(const Aws::Vector<StageKey>& value) { m_stageKeysHasBeenSet = true; m_stageKeys = value; }

    /**
     * <p>DEPRECATED FOR USAGE PLANS - Specifies stages associated with the API
     * key.</p>
     */
    inline void SetStageKeys(Aws::Vector<StageKey>&& value) { m_stageKeysHasBeenSet = true; m_stageKeys = std::move(value); }

    /**
     * <p>DEPRECATED FOR USAGE PLANS - Specifies stages associated with the API
     * key.</p>
     */
    inline CreateApiKeyRequest& WithStageKeys(const Aws::Vector<StageKey>& value) { SetStageKeys(value); return *this;}

    /**
     * <p>DEPRECATED FOR USAGE PLANS - Specifies stages associated with the API
     * key.</p>
     */
    inline CreateApiKeyRequest& WithStageKeys(Aws::Vector<StageKey>&& value) { SetStageKeys(std::move(value)); return *this;}

    /**
     * <p>DEPRECATED FOR USAGE PLANS - Specifies stages associated with the API
     * key.</p>
     */
    inline CreateApiKeyRequest& AddStageKeys(const StageKey& value) { m_stageKeysHasBeenSet = true; m_stageKeys.push_back(value); return *this; }

    /**
     * <p>DEPRECATED FOR USAGE PLANS - Specifies stages associated with the API
     * key.</p>
     */
    inline CreateApiKeyRequest& AddStageKeys(StageKey&& value) { m_stageKeysHasBeenSet = true; m_stageKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>An AWS Marketplace customer identifier , when integrating with the AWS SaaS
     * Marketplace.</p>
     */
    inline const Aws::String& GetCustomerId() const{ return m_customerId; }

    /**
     * <p>An AWS Marketplace customer identifier , when integrating with the AWS SaaS
     * Marketplace.</p>
     */
    inline void SetCustomerId(const Aws::String& value) { m_customerIdHasBeenSet = true; m_customerId = value; }

    /**
     * <p>An AWS Marketplace customer identifier , when integrating with the AWS SaaS
     * Marketplace.</p>
     */
    inline void SetCustomerId(Aws::String&& value) { m_customerIdHasBeenSet = true; m_customerId = std::move(value); }

    /**
     * <p>An AWS Marketplace customer identifier , when integrating with the AWS SaaS
     * Marketplace.</p>
     */
    inline void SetCustomerId(const char* value) { m_customerIdHasBeenSet = true; m_customerId.assign(value); }

    /**
     * <p>An AWS Marketplace customer identifier , when integrating with the AWS SaaS
     * Marketplace.</p>
     */
    inline CreateApiKeyRequest& WithCustomerId(const Aws::String& value) { SetCustomerId(value); return *this;}

    /**
     * <p>An AWS Marketplace customer identifier , when integrating with the AWS SaaS
     * Marketplace.</p>
     */
    inline CreateApiKeyRequest& WithCustomerId(Aws::String&& value) { SetCustomerId(std::move(value)); return *this;}

    /**
     * <p>An AWS Marketplace customer identifier , when integrating with the AWS SaaS
     * Marketplace.</p>
     */
    inline CreateApiKeyRequest& WithCustomerId(const char* value) { SetCustomerId(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    bool m_enabled;
    bool m_enabledHasBeenSet;
    bool m_generateDistinctId;
    bool m_generateDistinctIdHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
    Aws::Vector<StageKey> m_stageKeys;
    bool m_stageKeysHasBeenSet;
    Aws::String m_customerId;
    bool m_customerIdHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
