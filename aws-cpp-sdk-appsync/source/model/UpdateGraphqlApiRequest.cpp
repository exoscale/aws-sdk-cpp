﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/appsync/model/UpdateGraphqlApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGraphqlApiRequest::UpdateGraphqlApiRequest() : 
    m_apiIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_authenticationType(AuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false),
    m_userPoolConfigHasBeenSet(false)
{
}

Aws::String UpdateGraphqlApiRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("authenticationType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType));
  }

  if(m_userPoolConfigHasBeenSet)
  {
   payload.WithObject("userPoolConfig", m_userPoolConfig.Jsonize());

  }

  return payload.WriteReadable();
}




