// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef _BADNETWORK_H_
#define _BADNETWORK_H_

#include "iothub_client_ll.h"
#include "iothub_account.h"

#ifdef __cplusplus
extern "C" {
#endif

    extern void disconnect_create_send_reconnect(IOTHUB_PROVISIONED_DEVICE* deviceToUse, IOTHUB_CLIENT_TRANSPORT_PROVIDER protocol);

#ifdef __cplusplus
}
#endif

#endif // _BADNETWORK_H_
