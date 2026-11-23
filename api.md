# BoxFleet hosted control plane (boxfleet.io) Objective-C API

<!-- omniwrap-api-reference eyJjb250cmFjdF9maW5nZXJwcmludCI6ImUzZmQ0Yzc0NGFlODkzM2MwZTBiZDBjMjFhNjkyODk3Nzk1YTE0NjU3ZTU3N2ZiODIxMDg1MDBkMzlmMmFjOGQiLCJvcGVyYXRpb25fY291bnQiOjU2LCJyZW5kZXJlciI6Im9iamVjdGl2ZV9jIiwidmVyc2lvbiI6IjEuNS4wIn0 -->

This generated index is tied to Semantic IR `1.14.0` and contract fingerprint `e3fd4c744ae8933c0e0bd0c21a692897795a14657e577fb82108500d39f2ac8d`. Every operation below is rendered from the same semantic contract and artifact-attested public member allocation as the SDK.

SDK maturity: **experimental**  
Artifact evidence: [`omniwrap-artifact.json`](omniwrap-artifact.json) binds this file by SHA-256 and is revalidated by the package gate.

## Shared types

- `HostedPersistentBoxClose`
- `HostedPersistentBoxRead`
- `HostedPersistentUsageMeter`
- `HostedPersistentUsageRead`
- `ObservedBox`

## Resource `accounts`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRBY2NvdW50c0NvbmZpZyIsIm1ldGhvZCI6IkdFVCIsIm9wZXJhdGlvbl9pZCI6ImdldEFjY291bnRzQ29uZmlnIiwicGF0aCI6Ii92MS9hY2NvdW50cy9jb25maWciLCJyZXNvdXJjZSI6ImFjY291bnRzIiwic2VjdGlvbl9zaGEyNTYiOiJlNTg1ZDM3MGM4NWI5Yjg0MmFiNjdhZjA5NGI3N2UxN2VlNjhkYzYwYjliOTA1MWE5OWU1N2YxNTA1MzJiN2QyIiwic2lnbmF0dXJlX3NoYTI1NiI6ImYxNTE2ODkwMmY4NWIyYzhlOGNiMGM2YWZjZjgyNmRhYzQ3ODFlOWM5ZDI0N2IxNjBhMzNlMzVkOTE3NDZkMDIifQ -->
### `client.getAccountsConfig`

Operation ID: `getAccountsConfig`  
Route: `GET` `/v1/accounts/config`  

#### Signature

```objectivec
- (nullable NSDictionary *)getAccountsConfigWithError:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | OK | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRBY2NvdW50c0NvbmZpZyJ9 -->

## Resource `admin`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJjb250cm9sVXNlciIsIm1ldGhvZCI6IlBPU1QiLCJvcGVyYXRpb25faWQiOiJjb250cm9sVXNlciIsInBhdGgiOiIvdjEvYWRtaW4vdXNlcnMiLCJyZXNvdXJjZSI6ImFkbWluIiwic2VjdGlvbl9zaGEyNTYiOiIyOGJlMjA5MmYwZmYwZTljMGM4N2Q5MzNkOGZiMmJhMjM4ZDkwMzUzMzQ4NTdiNTM0YTM1YWNiMDdjOGQwYTYzIiwic2lnbmF0dXJlX3NoYTI1NiI6IjgwYTBmNmZhNWQ3OGY2ZmQ3NjQ4NmFiOTc4YTBhMTI4ZTFmNDI2YTg3YWRmMmNlNGFjZjU5YjFkMDIxZTRhOTgifQ -->
### `client.controlUser`

Operation ID: `controlUser`  
Route: `POST` `/v1/admin/users`  

#### Signature

```objectivec
- (nullable NSDictionary *)controlUser:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Applied | none |
| `401` | Admin token required | none |
| `409` | Managed account authority required; use the returned JackAISaaS accountUrl or portalUrl. | none |

#### Canonical required-input example

```json
{
  "body": {},
  "content_type": "application/json",
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJjb250cm9sVXNlciJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRBZG1pbkNvbnNvbGUiLCJtZXRob2QiOiJHRVQiLCJvcGVyYXRpb25faWQiOiJnZXRBZG1pbkNvbnNvbGUiLCJwYXRoIjoiL3YxL2FkbWluL2NvbnNvbGUiLCJyZXNvdXJjZSI6ImFkbWluIiwic2VjdGlvbl9zaGEyNTYiOiIyMDAwYzMzZjRjOGNjN2VjYTQ2MGQ3ZjE0MjkyOTY4ZjRkZmUwM2RmNTQ5N2M3MjM2MjZjNTA3MGM5YzE4MDgzIiwic2lnbmF0dXJlX3NoYTI1NiI6IjNiOTFmYTAzZTY4MjBiNjc4MzBkZGUwODg3OWI3ZWRmNTYzYzNiYmJkMWJmZGE3YzAzOTBlZTYyNjc5NmI1OTIifQ -->
### `client.getAdminConsole`

Operation ID: `getAdminConsole`  
Route: `GET` `/v1/admin/console`  

#### Signature

```objectivec
- (nullable NSDictionary *)getAdminConsoleWithError:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Console | none |
| `401` | Admin token required | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRBZG1pbkNvbnNvbGUifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRBZG1pblBsYW5zIiwibWV0aG9kIjoiR0VUIiwib3BlcmF0aW9uX2lkIjoiZ2V0QWRtaW5QbGFucyIsInBhdGgiOiIvdjEvYWRtaW4vcGxhbnMiLCJyZXNvdXJjZSI6ImFkbWluIiwic2VjdGlvbl9zaGEyNTYiOiIwZmYzMGFiOTBiYjc4NTc1YzNlNDQyYjc5ZjViODNkOGE4ZTA0MDE1MGE3MGRhYTkyM2ZlNmEyNGQxMTM3YTk4Iiwic2lnbmF0dXJlX3NoYTI1NiI6IjBjZWZkZTYzNGQ0MGUxYmE1MWMyMTAxMDY0MWJlY2I0NzExYWMzYjE0MzMwODlhMjdlYWU1NmZkZTllNTBjN2YifQ -->
### `client.getAdminPlans`

Operation ID: `getAdminPlans`  
Route: `GET` `/v1/admin/plans`  

#### Signature

```objectivec
- (nullable NSDictionary *)getAdminPlansWithError:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Plans | none |
| `401` | Admin token required | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRBZG1pblBsYW5zIn0 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJsaXN0VXNlcnMiLCJtZXRob2QiOiJHRVQiLCJvcGVyYXRpb25faWQiOiJsaXN0VXNlcnMiLCJwYXRoIjoiL3YxL2FkbWluL3VzZXJzIiwicmVzb3VyY2UiOiJhZG1pbiIsInNlY3Rpb25fc2hhMjU2IjoiMTlhMmNkNDUxZjZiMjBjZWUzMmZmMmQ0MTViNmYwNjhiYTg3M2ZjYTk0NWMzMzVmZmM3MDg0YmMzZDRjMzhiMiIsInNpZ25hdHVyZV9zaGEyNTYiOiJkNzgxYWU2NDA1YjMxZTIxYWJlM2ZmNzM0NmUzZmRmOTg0NTk2YTlhNzliZmQwZjlhYWVmOTAwYmI1ZGZiNTA4In0 -->
### `client.listUsers`

Operation ID: `listUsers`  
Route: `GET` `/v1/admin/users`  

#### Signature

```objectivec
- (nullable NSDictionary *)listUsersWithError:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Users | none |
| `401` | Admin token required | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJsaXN0VXNlcnMifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJyZWFkVGVsZW1ldHJ5IiwibWV0aG9kIjoiR0VUIiwib3BlcmF0aW9uX2lkIjoicmVhZFRlbGVtZXRyeSIsInBhdGgiOiIvdjEvYWRtaW4vdGVsZW1ldHJ5IiwicmVzb3VyY2UiOiJhZG1pbiIsInNlY3Rpb25fc2hhMjU2IjoiYmY2YjNhZThjZjQ4MDE1YjA2MTczMjczMGEzMjJkOTFmMjlmZmU0NjA1MjVjYjdkODRkYWY2YzFmYzg1ZTE2NSIsInNpZ25hdHVyZV9zaGEyNTYiOiJmMzE5ZjJhY2RmMzc0YmZjN2NjNjBkOTViODY3YWI4OGFhNDQwYTZkMDIwNDZhNDI2NjEyZjFhOWJmZTdkM2U0In0 -->
### `client.readTelemetry`

Operation ID: `readTelemetry`  
Route: `GET` `/v1/admin/telemetry`  

#### Signature

```objectivec
- (nullable NSDictionary *)readTelemetryWithError:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Events | none |
| `401` | Admin token required | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJyZWFkVGVsZW1ldHJ5In0 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJ1cGRhdGVQbGFuIiwibWV0aG9kIjoiUE9TVCIsIm9wZXJhdGlvbl9pZCI6InVwZGF0ZVBsYW4iLCJwYXRoIjoiL3YxL2FkbWluL3BsYW5zIiwicmVzb3VyY2UiOiJhZG1pbiIsInNlY3Rpb25fc2hhMjU2IjoiYTJlN2QwOWNkNGVmMmFiZjhiZTI4ODI3ZGI1NGI3Njc4NDBiNzE3Yjc2MzczOGJlNDA2MWRjMzQwNzBhZTM1MyIsInNpZ25hdHVyZV9zaGEyNTYiOiIyYmM5ZTUyODNjNDAzYmY2ZGJjZWY3MjljZmQyZjI5N2Y5ZWE3NzEwYzQ4N2VhMzEyOGFiMTA1YjU4Mzk3YmViIn0 -->
### `client.updatePlan`

Operation ID: `updatePlan`  
Route: `POST` `/v1/admin/plans`  

#### Signature

```objectivec
- (nullable NSDictionary *)updatePlan:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Updated | none |
| `401` | Admin token required | none |
| `409` | Managed account authority required; use the returned JackAISaaS accountUrl or portalUrl. | none |

#### Canonical required-input example

```json
{
  "body": {},
  "content_type": "application/json",
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJ1cGRhdGVQbGFuIn0 -->

## Resource `auth`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRBdXRoR2F0ZSIsIm1ldGhvZCI6IkdFVCIsIm9wZXJhdGlvbl9pZCI6ImdldEF1dGhHYXRlIiwicGF0aCI6Ii92MS9hdXRoL2dhdGUiLCJyZXNvdXJjZSI6ImF1dGgiLCJzZWN0aW9uX3NoYTI1NiI6IjRhYTE4ODk2N2I2Njg0NDQ4OWU0MGM5Mzg1YTg0ZGU2NmM0YTFkZGFmMjZhYTY1OTUxYTA0YjIwMjNkYWNkN2YiLCJzaWduYXR1cmVfc2hhMjU2IjoiNWI3N2VmOGRkODg5MjkyZDMxNzM4M2M3YmM0M2VjYmQ0NWFmYmU1OWNkZmVmMDJiMDY2ZDdiZDY1MTYyOWRlMyJ9 -->
### `client.getAuthGate`

Operation ID: `getAuthGate`  
Route: `GET` `/v1/auth/gate`  

#### Signature

```objectivec
- (nullable NSDictionary *)getAuthGateWithError:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | OK | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRBdXRoR2F0ZSJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJyZWdpc3RlciIsIm1ldGhvZCI6IlBPU1QiLCJvcGVyYXRpb25faWQiOiJyZWdpc3RlciIsInBhdGgiOiIvdjEvYXV0aC9yZWdpc3RlciIsInJlc291cmNlIjoiYXV0aCIsInNlY3Rpb25fc2hhMjU2IjoiYTBjM2QxNWFlYzU4OWFmYWQzZjQyY2I0ODcyOGI4NzNkNWM4NGJmN2Y4MDI4MzQ3N2Y2MGM2MzUzYWQwZTQwOSIsInNpZ25hdHVyZV9zaGEyNTYiOiIwYjVmYTY1NDAzYWMzZmIzODNjMDQwNzg5ZmI1M2I0ZTE2ZDNmYjE1YmI0MzNlMGU5MWMyNDZjMWJhMGFlYjVkIn0 -->
### `client.register`

Operation ID: `register`  
Route: `POST` `/v1/auth/register`  

#### Signature

```objectivec
- (nullable NSDictionary *)register:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `201` | License issued | none |
| `202` | Verification code sent (or withheld by the resend cooldown) | none |
| `400` | Invalid or expired code | none |
| `403` | Not invited or refused | none |
| `409` | Managed account authority required; use the returned JackAISaaS accountUrl or portalUrl. | none |
| `429` | Rate limited | none |
| `503` | Registration not configured | none |

#### Canonical required-input example

```json
{
  "body": {},
  "content_type": "application/json",
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJyZWdpc3RlciJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJ1cGRhdGVBdXRoR2F0ZSIsIm1ldGhvZCI6IlBVVCIsIm9wZXJhdGlvbl9pZCI6InVwZGF0ZUF1dGhHYXRlIiwicGF0aCI6Ii92MS9hdXRoL2dhdGUiLCJyZXNvdXJjZSI6ImF1dGgiLCJzZWN0aW9uX3NoYTI1NiI6ImZjNDM5NzFlOWYwYzdlMjM4NTMxMWQ2NjRhYmMyNzEzOWYyNGVlMTgwYzNiMTIyMWE2NmMwYmVlNDgyNzUwZWYiLCJzaWduYXR1cmVfc2hhMjU2IjoiOTQwMjRkMWZmY2IzZmZiYmE1N2QyZjFhMGQxYTZiMWIyNTJlMzdiNDEwZWM3ZmI3NzA0YmQ4ODUzMjQyZWFkNCJ9 -->
### `client.updateAuthGate`

Operation ID: `updateAuthGate`  
Route: `PUT` `/v1/auth/gate`  

#### Signature

```objectivec
- (nullable NSDictionary *)updateAuthGate:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Updated | none |
| `401` | Admin token required | none |
| `409` | Managed account authority required; use the returned JackAISaaS accountUrl or portalUrl. | none |

#### Canonical required-input example

```json
{
  "body": {},
  "content_type": "application/json",
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJ1cGRhdGVBdXRoR2F0ZSJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJ2ZXJpZnlMaWNlbnNlIiwibWV0aG9kIjoiUE9TVCIsIm9wZXJhdGlvbl9pZCI6InZlcmlmeUxpY2Vuc2UiLCJwYXRoIjoiL3YxL2F1dGgvdmVyaWZ5IiwicmVzb3VyY2UiOiJhdXRoIiwic2VjdGlvbl9zaGEyNTYiOiI3NjRlMzExZTA1MjAxOTM5MjA0NWEwNGM5OTU5OGZmZTE3NDY5OTI3MGEwOGQyYzViYzVhZmU0ZWJmM2NmYjQzIiwic2lnbmF0dXJlX3NoYTI1NiI6ImFlNjk2MjFmYTlkY2UwM2Q2ODIxOWYxZWU0MTJiYzg5MzI1M2M5YzJhMDc4YWUwNmIyMjE3ODU4ZmE5YjY3M2YifQ -->
### `client.verifyLicense`

Operation ID: `verifyLicense`  
Route: `POST` `/v1/auth/verify`  

#### Signature

```objectivec
- (nullable NSDictionary *)verifyLicense:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Valid | none |
| `401` | Invalid license | none |
| `403` | Refused | none |
| `409` | Managed account authority required; use the returned JackAISaaS accountUrl or portalUrl. | none |
| `503` | Verification not configured | none |

#### Canonical required-input example

```json
{
  "body": {},
  "content_type": "application/json",
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJ2ZXJpZnlMaWNlbnNlIn0 -->

## Resource `billing`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJzdHJpcGVXZWJob29rIiwibWV0aG9kIjoiUE9TVCIsIm9wZXJhdGlvbl9pZCI6InN0cmlwZVdlYmhvb2siLCJwYXRoIjoiL3YxL2JpbGxpbmcvc3RyaXBlL3dlYmhvb2siLCJyZXNvdXJjZSI6ImJpbGxpbmciLCJzZWN0aW9uX3NoYTI1NiI6Ijg5Mjk4OGVmYjBmNjk4OTVhMTI1YjEyYjAwNjcxNGM4ZjlmMWVlZWY2YWQzOGNjNzhlZTY5YjVkMjZmZjVhZWEiLCJzaWduYXR1cmVfc2hhMjU2IjoiYTM1MTY3NDEwNTBlNmZhZmI5NWRhYmY4M2Q2NjkwN2UzMGU5MjBhMzMxODRhOGU3NThiZThjZDY3ZTI4OWUzOSJ9 -->
### `client.stripeWebhook`

Operation ID: `stripeWebhook`  
Route: `POST` `/v1/billing/stripe/webhook`  

#### Signature

```objectivec
- (nullable NSDictionary *)stripeWebhookWithError:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Received | none |
| `400` | Invalid signature or payload | none |
| `409` | Managed account authority required; use the returned JackAISaaS accountUrl or portalUrl. | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJzdHJpcGVXZWJob29rIn0 -->

## Resource `health`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRIZWFsdGgiLCJtZXRob2QiOiJHRVQiLCJvcGVyYXRpb25faWQiOiJnZXRIZWFsdGgiLCJwYXRoIjoiL2hlYWx0aCIsInJlc291cmNlIjoiaGVhbHRoIiwic2VjdGlvbl9zaGEyNTYiOiJhYzdmZDBhOGJlNTUxYjI3ZGJkNDYwMDFhN2E2MzhmYjZhOWFmNjExZWNlYWRmNWY1ZGU4ZTYzODkwZmUxMTFkIiwic2lnbmF0dXJlX3NoYTI1NiI6Ijk2MjE2OTI5ODdkNjk2ZDc4NTVmMzgzZGYyNTBiZGFlMmZlMWE0YmE0ZWE2NGMzYWZmMWFiZmNlM2JiMTM0MWIifQ -->
### `client.getHealth`

Operation ID: `getHealth`  
Route: `GET` `/health`  

#### Signature

```objectivec
- (nullable NSDictionary *)getHealthWithError:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | OK | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRIZWFsdGgifQ -->

## Resource `jobs`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJjYW5jZWxKb2IiLCJtZXRob2QiOiJQT1NUIiwib3BlcmF0aW9uX2lkIjoiY2FuY2VsSm9iIiwicGF0aCI6Ii92MS9qb2JzL3tqb2JJZH0vY2FuY2VsIiwicmVzb3VyY2UiOiJqb2JzIiwic2VjdGlvbl9zaGEyNTYiOiJmZmUyMGU3ZTcyZTVmNDY0YzE5MmJjODRkM2JhYTE2NDY1ZTdkYTk5ZmJiOTAyZDg4NmIxZjQ4YjVkZmQ0OWI4Iiwic2lnbmF0dXJlX3NoYTI1NiI6ImI5Yzg0NDA1NmM0Zjg2NjBmNzllY2ZmMjkwODRiNDNjNjg5ZDdjZDcxYjgyZDEzY2M4N2Y3ZDZkNzZkM2Y2YzMifQ -->
### `client.cancelJob`

Operation ID: `cancelJob`  
Route: `POST` `/v1/jobs/{jobId}/cancel`  

#### Signature

```objectivec
- (nullable NSDictionary *)cancelJob:(NSString *)owPath0 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `jobId` | `path` | yes | `string` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | OK | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "jobId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJjYW5jZWxKb2IifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRKb2IiLCJtZXRob2QiOiJHRVQiLCJvcGVyYXRpb25faWQiOiJnZXRKb2IiLCJwYXRoIjoiL3YxL2pvYnMve2pvYklkfSIsInJlc291cmNlIjoiam9icyIsInNlY3Rpb25fc2hhMjU2IjoiMjNhZDFjNTI0NDk4ZjU1ODYyZDE4MjUzNDBmMzQ3ZThjMzQ4MWMwOWM0OWQxMTFmMzUwMDY2MWE2ZWU4ZGNlNiIsInNpZ25hdHVyZV9zaGEyNTYiOiJmNTU5M2JmNDM4MmFmMDFkNzZlZDRhOTFkY2MwY2MyYzE1MWFiMjlhYjRlY2NiNWE4MTUxM2UzMmJhNGU5NDIzIn0 -->
### `client.getJob`

Operation ID: `getJob`  
Route: `GET` `/v1/jobs/{jobId}`  

#### Signature

```objectivec
- (nullable NSDictionary *)getJob:(NSString *)owPath0 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `jobId` | `path` | yes | `string` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | OK | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "jobId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRKb2IifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJsaXN0Sm9iRXZlbnRzIiwibWV0aG9kIjoiR0VUIiwib3BlcmF0aW9uX2lkIjoibGlzdEpvYkV2ZW50cyIsInBhdGgiOiIvdjEvam9icy97am9iSWR9L2V2ZW50cyIsInJlc291cmNlIjoiam9icyIsInNlY3Rpb25fc2hhMjU2IjoiMjA4NjRmMGMzMjRlYjgwYzExNjllYjQ5Mjg1MzA5YzFiYzU1ZDZkZmM2NWQ0M2I0M2JkYmRkZGY3Mjg2Y2YxYSIsInNpZ25hdHVyZV9zaGEyNTYiOiJkODcwMTdlMzA3YWUyZGY3OGIwM2JkOTcyNTBhOWFlN2U3YmY5ODg4MzhjYjM0MjU4YzdkMzdmMDBjZmNkMzkwIn0 -->
### `client.listJobEvents`

Operation ID: `listJobEvents`  
Route: `GET` `/v1/jobs/{jobId}/events`  

#### Signature

```objectivec
- (nullable NSDictionary *)listJobEvents:(NSString *)owPath0 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `jobId` | `path` | yes | `string` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | OK | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "jobId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJsaXN0Sm9iRXZlbnRzIn0 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJsaXN0Sm9icyIsIm1ldGhvZCI6IkdFVCIsIm9wZXJhdGlvbl9pZCI6Imxpc3RKb2JzIiwicGF0aCI6Ii92MS9qb2JzIiwicmVzb3VyY2UiOiJqb2JzIiwic2VjdGlvbl9zaGEyNTYiOiJkNGRiOTIyYWUwOGZiYWY4M2NhNmExMWQzMDQxZDQ0NWM1OTljOTZkYzAyNjNiNzhmM2RjZTJlYTQwMGNmYTgwIiwic2lnbmF0dXJlX3NoYTI1NiI6IjYwNjI5MjczODBkMWNkZDA1NWYzYjg0NjFlYTQ1YjM5YTlkYjc4YjVlMmFlYThhYjA2YTkzZjVkZWY2M2U5YTgifQ -->
### `client.listJobs`

Operation ID: `listJobs`  
Route: `GET` `/v1/jobs`  

#### Signature

```objectivec
- (nullable NSDictionary *)listJobsWithError:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Jobs | none |
| `401` | Session required | none |
| `503` | Storage not configured | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJsaXN0Sm9icyJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJzdWJtaXRKb2IiLCJtZXRob2QiOiJQT1NUIiwib3BlcmF0aW9uX2lkIjoic3VibWl0Sm9iIiwicGF0aCI6Ii92MS9qb2JzIiwicmVzb3VyY2UiOiJqb2JzIiwic2VjdGlvbl9zaGEyNTYiOiJlYzc1MGY0MmI3NmQxZmM4ZTgzYTUzZDc2NzExMjk3YzFkMjgxNDFkMmJkODM5MzE3YmIwMjJiYWMzYjFlZWNiIiwic2lnbmF0dXJlX3NoYTI1NiI6IjAwZWU3YWI5MzQwZWIyOTZmMGI3MjBkNDhhNTExZGMwYjU1ODk4NzZlZDQ0MjMxYTJiYzRlNGZlNTY1MTYzOWEifQ -->
### `client.submitJob`

Operation ID: `submitJob`  
Route: `POST` `/v1/jobs`  

#### Signature

```objectivec
- (nullable NSDictionary *)submitJob:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Replayed | none |
| `201` | Created | none |
| `401` | Session required | none |
| `503` | Storage not configured | none |

#### Canonical required-input example

```json
{
  "body": {},
  "content_type": "application/json",
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJzdWJtaXRKb2IifQ -->

## Resource `organizations`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJjbG9zZVBlcnNpc3RlbnRCb3giLCJtZXRob2QiOiJQT1NUIiwib3BlcmF0aW9uX2lkIjoiY2xvc2VQZXJzaXN0ZW50Qm94IiwicGF0aCI6Ii92MS9vcmdhbml6YXRpb25zL3tvcmdhbml6YXRpb25JZH0vcGVyc2lzdGVudC1ib3hlcy97Ym94SWR9L2Nsb3NlIiwicmVzb3VyY2UiOiJvcmdhbml6YXRpb25zIiwic2VjdGlvbl9zaGEyNTYiOiJjNzBmZDIyNzg1MmI4MjBmYWRlZWU5ZjdjNGU0MzI3MDMyNjBlYTM1YWU5N2U4MTg3MjYyYjViODUwNGZkMWUyIiwic2lnbmF0dXJlX3NoYTI1NiI6ImNhM2Y5M2QwMTBhMjkwMGVkZTVlNTU2MzViMGUxNWZmYTRiNTAzNzU4NDhjZTYzMjNmZTUzZmRjYWI3Y2M5ZGYifQ -->
### `client.closePersistentBox`

Operation ID: `closePersistentBox`  
Route: `POST` `/v1/organizations/{organizationId}/persistent-boxes/{boxId}/close`  

#### Signature

```objectivec
- (nullable NSDictionary *)closePersistentBox:(NSString *)owPath0 boxId:(NSString *)owPath1 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |
| `boxId` | `path` | yes | `string&lt;uuid&gt;` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Closure is recorded; repeat requests return the same result without deleting again. | application/json (HostedPersistentBoxClose) |
| `202` | Closure is unconfirmed. Lost, late, negative or mismatched acknowledgements and failed receipt persistence retain reservations. Repeat requests never dispatch another deletion; operator reconciliation is required. | application/json (HostedPersistentBoxClose) |
| `400` | Invalid UUID, body or query parameters. | none |
| `401` | Missing or rejected product session. | none |
| `403` | Current authority denied cleanup or the organization/product/environment differs. | none |
| `404` | No durable box in this exact target scope. | none |
| `409` | Unconfirmed or changed provider allocation requires operator reconciliation. | none |
| `503` | Authority or storage unavailable, or no matching operator provider adapter. Missing configuration refuses before any close intention or deletion. | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    },
    {
      "in": "path",
      "name": "boxId",
      "value": "00000000-0000-0000-c54d-988d0e4e7e77"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJjbG9zZVBlcnNpc3RlbnRCb3gifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJjcmVhdGVCaWxsaW5nUG9ydGFsIiwibWV0aG9kIjoiUE9TVCIsIm9wZXJhdGlvbl9pZCI6ImNyZWF0ZUJpbGxpbmdQb3J0YWwiLCJwYXRoIjoiL3YxL29yZ2FuaXphdGlvbnMve29yZ2FuaXphdGlvbklkfS9iaWxsaW5nL3BvcnRhbCIsInJlc291cmNlIjoib3JnYW5pemF0aW9ucyIsInNlY3Rpb25fc2hhMjU2IjoiNWJiZTJjYWU5NWQ4M2JjMzkwZjgwMDk2MDc2Yzk4YzlkOWIwNDQ5NjRjMTdmMGE5MjA1Y2U5MTVhNzMyZjliZCIsInNpZ25hdHVyZV9zaGEyNTYiOiIwZDJlNjVjOTYxOTU2Zjk3NjBiOTNkNmRlZTI3NTYxNTNjYTU2MDM4M2I4OWEyNjY4OTQ0OGQ1Y2M1YWMxY2VmIn0 -->
### `client.createBillingPortal`

Operation ID: `createBillingPortal`  
Route: `POST` `/v1/organizations/{organizationId}/billing/portal`  

#### Signature

```objectivec
- (nullable NSDictionary *)createBillingPortal:(NSString *)owPath0 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `201` | portalUrl | none |
| `404` | No Stripe customer yet | none |
| `409` | Managed account authority required; use the returned JackAISaaS accountUrl or portalUrl. | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJjcmVhdGVCaWxsaW5nUG9ydGFsIn0 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJjcmVhdGVCb3giLCJtZXRob2QiOiJQT1NUIiwib3BlcmF0aW9uX2lkIjoiY3JlYXRlQm94IiwicGF0aCI6Ii92MS9vcmdhbml6YXRpb25zL3tvcmdhbml6YXRpb25JZH0vYm94ZXMiLCJyZXNvdXJjZSI6Im9yZ2FuaXphdGlvbnMiLCJzZWN0aW9uX3NoYTI1NiI6IjFhNmU1NTFlYjUxYjExYTk5ZGNhMGM3OWY0NzYxZDhhMGYyZjliMWI1M2NkNzFkODIzYzJhZmNhYTdlZWQ0YzIiLCJzaWduYXR1cmVfc2hhMjU2IjoiZWE2ZTIxYjU0MzRhZTlmMGY2Nzg3Y2UwMjM0ODIwNjYxMWEyYzU4ZWM3NzI0MmQ1ZTFlMmVkZjQyODM0NjQzZCJ9 -->
### `client.createBox`

Operation ID: `createBox`  
Route: `POST` `/v1/organizations/{organizationId}/boxes`  

#### Signature

```objectivec
- (nullable NSDictionary *)createBox:(NSString *)owPath0 body:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `201` | Box running at the provider | none |
| `402` | Concurrent-box limit reached | none |
| `502` | The provider refused; recorded as failed | none |
| `503` | No provider or no storage | none |

#### Canonical required-input example

```json
{
  "body": {},
  "content_type": "application/json",
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJjcmVhdGVCb3gifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJjcmVhdGVDaGVja291dCIsIm1ldGhvZCI6IlBPU1QiLCJvcGVyYXRpb25faWQiOiJjcmVhdGVDaGVja291dCIsInBhdGgiOiIvdjEvb3JnYW5pemF0aW9ucy97b3JnYW5pemF0aW9uSWR9L2JpbGxpbmcvY2hlY2tvdXQiLCJyZXNvdXJjZSI6Im9yZ2FuaXphdGlvbnMiLCJzZWN0aW9uX3NoYTI1NiI6IjBmMjllNTUyMjVlODE1ZTBiMWI0NWRmOWExMjg5OGM4YzU1N2NmM2FlM2ZlZmE3M2FkMjBjOTYwMWM0OGI1NDgiLCJzaWduYXR1cmVfc2hhMjU2IjoiYTFmZmUzMWRlNjFjNDJlODhjMzkxZTQxZDYwYTcxMjI0ZTczYWE2ZjljNTY1MDc0MzE4ZDdiNGM2YTRlODRiOCJ9 -->
### `client.createCheckout`

Operation ID: `createCheckout`  
Route: `POST` `/v1/organizations/{organizationId}/billing/checkout`  

#### Signature

```objectivec
- (nullable NSDictionary *)createCheckout:(NSString *)owPath0 body:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `201` | checkoutUrl of the Stripe Checkout Session | none |
| `409` | Managed account authority required; use the returned JackAISaaS accountUrl or portalUrl. Autonomous mode: Plan not on sale or subscription exists | none |

#### Canonical required-input example

```json
{
  "body": {
    "planKey": "pro"
  },
  "content_type": "application/json",
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJjcmVhdGVDaGVja291dCJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRCaWxsaW5nIiwibWV0aG9kIjoiR0VUIiwib3BlcmF0aW9uX2lkIjoiZ2V0QmlsbGluZyIsInBhdGgiOiIvdjEvb3JnYW5pemF0aW9ucy97b3JnYW5pemF0aW9uSWR9L2JpbGxpbmciLCJyZXNvdXJjZSI6Im9yZ2FuaXphdGlvbnMiLCJzZWN0aW9uX3NoYTI1NiI6ImJlNDMzNmY0OTk0YTJmOGQyZDI4YTkwNDhlYjVkODUzYjQyODBhYTBjYzM3NzFkMWE3YmNhNWEyZDc5ZTVmY2IiLCJzaWduYXR1cmVfc2hhMjU2IjoiNDRhM2NmMzA5ZWM5NGZlMWE3OTM5MjcxODJlNWFmNDBiY2FkYjQ3OTI3NGE3MzEyYzMxOTQ2YTMxYTgxOTY0MiJ9 -->
### `client.getBilling`

Operation ID: `getBilling`  
Route: `GET` `/v1/organizations/{organizationId}/billing`  

#### Signature

```objectivec
- (nullable NSDictionary *)getBilling:(NSString *)owPath0 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Billing status | none |
| `409` | Managed account authority required; use the returned JackAISaaS accountUrl or portalUrl. | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRCaWxsaW5nIn0 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRCb3giLCJtZXRob2QiOiJHRVQiLCJvcGVyYXRpb25faWQiOiJnZXRCb3giLCJwYXRoIjoiL3YxL29yZ2FuaXphdGlvbnMve29yZ2FuaXphdGlvbklkfS9ib3hlcy97Ym94SWR9IiwicmVzb3VyY2UiOiJvcmdhbml6YXRpb25zIiwic2VjdGlvbl9zaGEyNTYiOiJlOTExOWU0ZGIwOTgxY2I2ZjhiOWFmMzdmZDNkNzMzMjA3ZDFmN2M1ZTliMDA2ZDJkNzQwNmE4NjY2ZjQwMTA0Iiwic2lnbmF0dXJlX3NoYTI1NiI6IjA2NTAyMjU2YzM5MWFkYWQwNjdhOGQ5YWUxZmVkZjcwOTk4NTc4OGEwNWNhNmZjZTI1NjE2OTRhOWY2ZmYyMzIifQ -->
### `client.getBox`

Operation ID: `getBox`  
Route: `GET` `/v1/organizations/{organizationId}/boxes/{boxId}`  

#### Signature

```objectivec
- (nullable NSDictionary *)getBox:(NSString *)owPath0 boxId:(NSString *)owPath1 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |
| `boxId` | `path` | yes | `string&lt;uuid&gt;` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Stored box | none |
| `404` | Unknown box | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    },
    {
      "in": "path",
      "name": "boxId",
      "value": "00000000-0000-0000-d32a-0e84cb70d88a"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRCb3gifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRFbnRpdGxlbWVudHMiLCJtZXRob2QiOiJHRVQiLCJvcGVyYXRpb25faWQiOiJnZXRFbnRpdGxlbWVudHMiLCJwYXRoIjoiL3YxL29yZ2FuaXphdGlvbnMve29yZ2FuaXphdGlvbklkfS9lbnRpdGxlbWVudHMiLCJyZXNvdXJjZSI6Im9yZ2FuaXphdGlvbnMiLCJzZWN0aW9uX3NoYTI1NiI6ImZmZTFhY2YyNGFjODk4MmE5ZjQ2MDNjYWQ3YWQ1M2I4ZjFkZjEwZTNhYmFhZDZmMDcwYzQ2YzRkOTc3YWEyYmQiLCJzaWduYXR1cmVfc2hhMjU2IjoiMzRkZWQ5MTYzMzkyOTc0M2M3MzA0YzAyYzFhMTNkNWZkOWJjMjIzMjQ4ZTViNDA1NDA1NjkyM2VjOTZkOWU0YyJ9 -->
### `client.getEntitlements`

Operation ID: `getEntitlements`  
Route: `GET` `/v1/organizations/{organizationId}/entitlements`  

#### Signature

```objectivec
- (nullable NSDictionary *)getEntitlements:(NSString *)owPath0 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Entitlements and usage | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRFbnRpdGxlbWVudHMifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRGbGVldCIsIm1ldGhvZCI6IkdFVCIsIm9wZXJhdGlvbl9pZCI6ImdldEZsZWV0IiwicGF0aCI6Ii92MS9vcmdhbml6YXRpb25zL3tvcmdhbml6YXRpb25JZH0vZmxlZXQiLCJyZXNvdXJjZSI6Im9yZ2FuaXphdGlvbnMiLCJzZWN0aW9uX3NoYTI1NiI6IjQ5NDY1MjAyNDIwNmViMmIwOTM1Njk2Y2NmZDU5MjQ3N2MwNmZiMjliYjg4MDgyZThmMTIzZmY0ZDk4Yzg2MWYiLCJzaWduYXR1cmVfc2hhMjU2IjoiYzNiYWExYTNjNGFhNjEzMzcwNWJmZjIxMDUwYWJhMmM1ZTllNjZjNmY1OTdmZjEwZTA3MDljZDI5MWZkNDhkMSJ9 -->
### `client.getFleet`

Operation ID: `getFleet`  
Route: `GET` `/v1/organizations/{organizationId}/fleet`  

#### Signature

```objectivec
- (nullable NSDictionary *)getFleet:(NSString *)owPath0 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Stored fleet | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRGbGVldCJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRGbGVldFBvbGljeSIsIm1ldGhvZCI6IkdFVCIsIm9wZXJhdGlvbl9pZCI6ImdldEZsZWV0UG9saWN5IiwicGF0aCI6Ii92MS9vcmdhbml6YXRpb25zL3tvcmdhbml6YXRpb25JZH0vZmxlZXQvcG9saWN5IiwicmVzb3VyY2UiOiJvcmdhbml6YXRpb25zIiwic2VjdGlvbl9zaGEyNTYiOiI5OWUyYjI3YmNiZDA0NDQ4MzFhNjFmODkzZTQxYWNhZjdlNmE4NTZlY2I5MjUyZGVjYTgzNjNjZGExZTNiZGJlIiwic2lnbmF0dXJlX3NoYTI1NiI6ImEyYjQ2MGNiNzNhYWRhMTZlYjczN2UzZWIyMjA5MzllN2YxYmE4ZTc3YTcwZjA1YmI1NWFmNDVhNWJiODEyOGUifQ -->
### `client.getFleetPolicy`

Operation ID: `getFleetPolicy`  
Route: `GET` `/v1/organizations/{organizationId}/fleet/policy`  

#### Signature

```objectivec
- (nullable NSDictionary *)getFleetPolicy:(NSString *)owPath0 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Effective policy | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRGbGVldFBvbGljeSJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRQZXJzaXN0ZW50Qm94IiwibWV0aG9kIjoiR0VUIiwib3BlcmF0aW9uX2lkIjoiZ2V0UGVyc2lzdGVudEJveCIsInBhdGgiOiIvdjEvb3JnYW5pemF0aW9ucy97b3JnYW5pemF0aW9uSWR9L3BlcnNpc3RlbnQtYm94ZXMve2JveElkfSIsInJlc291cmNlIjoib3JnYW5pemF0aW9ucyIsInNlY3Rpb25fc2hhMjU2IjoiYzBiMmU2Yzc1OWI0ZjMwM2VjNzEyOTEwZmY3YTlhZmRlN2ViMjA1MmUwNTMwZWMxMmIwNTJlYmRlNjM2OGYzMyIsInNpZ25hdHVyZV9zaGEyNTYiOiIxMGY2NGEyNDAwMTJlYzY4YjM0MzMxOGMwODgwYTY2OTMwZDYzMzRiNWU3MjIxZDIwNjU4MTVkNWUyNDQ4ZTdiIn0 -->
### `client.getPersistentBox`

Operation ID: `getPersistentBox`  
Route: `GET` `/v1/organizations/{organizationId}/persistent-boxes/{boxId}`  

#### Signature

```objectivec
- (nullable NSDictionary *)getPersistentBox:(NSString *)owPath0 boxId:(NSString *)owPath1 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |
| `boxId` | `path` | yes | `string&lt;uuid&gt;` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Private stored record and reserved budget; runtime status is not-metered. | application/json (object) |
| `400` | Invalid UUID or query parameters. | none |
| `401` | Missing or rejected product session. | none |
| `403` | Current authority denied access or the organization/product/environment differs. | none |
| `404` | No durable box in this exact target scope. | none |
| `503` | Authority or durable record storage unavailable. | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    },
    {
      "in": "path",
      "name": "boxId",
      "value": "00000000-0000-0000-098c-d4f2b24057fb"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRQZXJzaXN0ZW50Qm94In0 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRQZXJzaXN0ZW50Qm94UHJvdmlkZXJVc2FnZSIsIm1ldGhvZCI6IkdFVCIsIm9wZXJhdGlvbl9pZCI6ImdldFBlcnNpc3RlbnRCb3hQcm92aWRlclVzYWdlIiwicGF0aCI6Ii92MS9vcmdhbml6YXRpb25zL3tvcmdhbml6YXRpb25JZH0vcGVyc2lzdGVudC1ib3hlcy97Ym94SWR9L3VzYWdlIiwicmVzb3VyY2UiOiJvcmdhbml6YXRpb25zIiwic2VjdGlvbl9zaGEyNTYiOiJhZDRjNjJlNjgwZmY3YmE3NWNjMzMxMTYzODUyZGI0MjllOWE2NWUwZmM2NmI5ODA1MjZiMGFkY2UzMDIyZWIzIiwic2lnbmF0dXJlX3NoYTI1NiI6ImFhZGQ3NDZmM2Y4NzU5ZWE5MzQyZTgyN2M2Y2UyNTY4ZjU5OWVkMzlmNjI1ZTk4MDAyNjQ5OTZlNjhlMDQzOTcifQ -->
### `client.getPersistentBoxProviderUsage`

Operation ID: `getPersistentBoxProviderUsage`  
Route: `GET` `/v1/organizations/{organizationId}/persistent-boxes/{boxId}/usage`  

#### Signature

```objectivec
- (nullable NSDictionary *)getPersistentBoxProviderUsage:(NSString *)owPath0 boxId:(NSString *)owPath1 queryItems:(NSArray<NSURLQueryItem *> *)queryItems error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |
| `boxId` | `path` | yes | `string&lt;uuid&gt;` |  |
| `from` | `query` | yes | `string&lt;date-time&gt;` |  |
| `to` | `query` | yes | `string&lt;date-time&gt;` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Private provider evidence summary with explicit interval coverage. | application/json (object) |
| `400` | Invalid box ID or bounded UTC window. | none |
| `401` | Missing or rejected product session. | none |
| `403` | Current authority denied access or target scope differs. | none |
| `404` | No durable box in this exact target scope. | none |
| `413` | Stored evidence exceeds the per-read record bound; select a smaller window. | none |
| `503` | Authority or usage storage unavailable. | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    },
    {
      "in": "path",
      "name": "boxId",
      "value": "00000000-0000-0000-0848-7a89fcbe4ab4"
    },
    {
      "in": "query",
      "name": "from",
      "value": "2026-01-01T00:00:00Z"
    },
    {
      "in": "query",
      "name": "to",
      "value": "2026-01-01T00:00:27Z"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRQZXJzaXN0ZW50Qm94UHJvdmlkZXJVc2FnZSJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJsaXN0Qm94ZXMiLCJtZXRob2QiOiJHRVQiLCJvcGVyYXRpb25faWQiOiJsaXN0Qm94ZXMiLCJwYXRoIjoiL3YxL29yZ2FuaXphdGlvbnMve29yZ2FuaXphdGlvbklkfS9ib3hlcyIsInJlc291cmNlIjoib3JnYW5pemF0aW9ucyIsInNlY3Rpb25fc2hhMjU2IjoiMzdjNjRkNTUwYzI2Y2I0MGNhOWM0ZThkOTNmNDBiNWMyMTlkYjBkOWVkZmRjM2YwZTViNmRkMmMyYWZhNzYwYyIsInNpZ25hdHVyZV9zaGEyNTYiOiJmNmI1NGMwZjE5Njc2ZjFiNGViZDMwOTM1Njk5MjNmMzViMzA1ZGQ4YTE2ZTA5Zjg4NzU4OGE5OTVjMzYxNDE4In0 -->
### `client.listBoxes`

Operation ID: `listBoxes`  
Route: `GET` `/v1/organizations/{organizationId}/boxes`  

#### Signature

```objectivec
- (nullable NSDictionary *)listBoxes:(NSString *)owPath0 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Stored boxes with their provider state | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJsaXN0Qm94ZXMifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJsaXN0SW52b2ljZXMiLCJtZXRob2QiOiJHRVQiLCJvcGVyYXRpb25faWQiOiJsaXN0SW52b2ljZXMiLCJwYXRoIjoiL3YxL29yZ2FuaXphdGlvbnMve29yZ2FuaXphdGlvbklkfS9iaWxsaW5nL2ludm9pY2VzIiwicmVzb3VyY2UiOiJvcmdhbml6YXRpb25zIiwic2VjdGlvbl9zaGEyNTYiOiI3ZWViZWRlNDFkNzllZmJlNjM0MGMzYzVlMDAwZDBhZGEzMjU4Y2U4ZGMzODYwMDI4NjUyNDBkMzkwODYwMmE5Iiwic2lnbmF0dXJlX3NoYTI1NiI6IjEzZjA1MDMyYzA2OTYyZGQzZDIxY2JmYjI1NDllNTE2NTYwNjUzOTlkZGE0Njc2ZGI5YjRlYWMwYjA5MDA0ZGEifQ -->
### `client.listInvoices`

Operation ID: `listInvoices`  
Route: `GET` `/v1/organizations/{organizationId}/billing/invoices`  

#### Signature

```objectivec
- (nullable NSDictionary *)listInvoices:(NSString *)owPath0 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Invoices | none |
| `409` | Managed account authority required; use the returned JackAISaaS accountUrl or portalUrl. | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJsaXN0SW52b2ljZXMifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJsaXN0TWVtYmVycyIsIm1ldGhvZCI6IkdFVCIsIm9wZXJhdGlvbl9pZCI6Imxpc3RNZW1iZXJzIiwicGF0aCI6Ii92MS9vcmdhbml6YXRpb25zL3tvcmdhbml6YXRpb25JZH0vbWVtYmVycyIsInJlc291cmNlIjoib3JnYW5pemF0aW9ucyIsInNlY3Rpb25fc2hhMjU2IjoiYzRmN2ViZjIzMTI0YjFkNDFmZWZjM2ZlOGQ4MzgwN2I1NGQwZGQ2OGUzODQwNGJlZmIzZTM3OTAyNGNmNThjOSIsInNpZ25hdHVyZV9zaGEyNTYiOiJmMTFiM2Y1M2Y1MmRlZWU3ZmM2YWNiOTBiNzdiMDg2NTUxZjgwYzA4NGEzNjRhYTQ0NmM2NGI0YWYzYjA5MzQ5In0 -->
### `client.listMembers`

Operation ID: `listMembers`  
Route: `GET` `/v1/organizations/{organizationId}/members`  

#### Signature

```objectivec
- (nullable NSDictionary *)listMembers:(NSString *)owPath0 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Stored members and the plan seat limit | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJsaXN0TWVtYmVycyJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJsaXN0T2JzZXJ2ZWRCb3hlcyIsIm1ldGhvZCI6IkdFVCIsIm9wZXJhdGlvbl9pZCI6Imxpc3RPYnNlcnZlZEJveGVzIiwicGF0aCI6Ii92MS9vcmdhbml6YXRpb25zL3tvcmdhbml6YXRpb25JZH0vb2JzZXJ2ZWQtYm94ZXMiLCJyZXNvdXJjZSI6Im9yZ2FuaXphdGlvbnMiLCJzZWN0aW9uX3NoYTI1NiI6ImM3NDFkNmRmZTdkNzlkNjQ5OGE3ZWU4NTI3OTgzNTVjYzkyMDJlYjFhMDk1YzY0ZGIwZGU4NGRjNzUwYmM5NzIiLCJzaWduYXR1cmVfc2hhMjU2IjoiMmQwZmI1NmEzNjg0NzM3NjliMjRlMmYxOGJiYjcxNTI0ZjgyZGViZGQ5NGNhNGNiOWY4NjcwOWYyMDcwMjg2ZSJ9 -->
### `client.listObservedBoxes`

Operation ID: `listObservedBoxes`  
Route: `GET` `/v1/organizations/{organizationId}/observed-boxes`  

#### Signature

```objectivec
- (nullable NSDictionary *)listObservedBoxes:(NSString *)owPath0 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Up to 100 non-expired client snapshots, private and not cacheable. | application/json (object) |
| `401` | No valid product session. | none |
| `403` | Organization or scope denied. | none |
| `503` | Inventory storage unavailable. | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJsaXN0T2JzZXJ2ZWRCb3hlcyJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJsaXN0UGVyc2lzdGVudEJveE9mZmVycyIsIm1ldGhvZCI6IkdFVCIsIm9wZXJhdGlvbl9pZCI6Imxpc3RQZXJzaXN0ZW50Qm94T2ZmZXJzIiwicGF0aCI6Ii92MS9vcmdhbml6YXRpb25zL3tvcmdhbml6YXRpb25JZH0vcGVyc2lzdGVudC1ib3hlcy9vZmZlcnMiLCJyZXNvdXJjZSI6Im9yZ2FuaXphdGlvbnMiLCJzZWN0aW9uX3NoYTI1NiI6ImQ1ZDViNTA2ZTU1YmM1OGQxNjdiMDA2ZTU5MDg3MzI4MmUwNzJlNjlkYWE5YjY4Nzk0NGZjNzIxZjY4OGI3OTIiLCJzaWduYXR1cmVfc2hhMjU2IjoiZjYyZTE2ZGFlMGQ1MTMyNTFlYzEyYzViZDBkMTdjNzk5ZjMxMmVhNjhkY2RjOTVmZTYxZGQ3MDQ3MGM4ZjEzNyJ9 -->
### `client.listPersistentBoxOffers`

Operation ID: `listPersistentBoxOffers`  
Route: `GET` `/v1/organizations/{organizationId}/persistent-boxes/offers`  

#### Signature

```objectivec
- (nullable NSDictionary *)listPersistentBoxOffers:(NSString *)owPath0 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Private configured offers. | application/json (object) |
| `401` | Product session required. | none |
| `403` | Current read authority denied. | none |
| `503` | Storage or operator offer configuration unavailable. | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJsaXN0UGVyc2lzdGVudEJveE9mZmVycyJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJsaXN0UGVyc2lzdGVudEJveGVzIiwibWV0aG9kIjoiR0VUIiwib3BlcmF0aW9uX2lkIjoibGlzdFBlcnNpc3RlbnRCb3hlcyIsInBhdGgiOiIvdjEvb3JnYW5pemF0aW9ucy97b3JnYW5pemF0aW9uSWR9L3BlcnNpc3RlbnQtYm94ZXMiLCJyZXNvdXJjZSI6Im9yZ2FuaXphdGlvbnMiLCJzZWN0aW9uX3NoYTI1NiI6ImExN2ZlYWE1ZDhlZDU1MzMzNWIwNGUxNWI2NzVlMThiYjU5YzhmNTVjNjVhZmJjMGFlMTVkZDE2MThhOWQ5NjgiLCJzaWduYXR1cmVfc2hhMjU2IjoiYzIxNDY4ODI5YjdjNTM3MTEzZDNhOGM2ZWY2ZjU4M2ZkMTI0ZmE3YTFiZTJlZmE1Y2Y2ZjdmYmUzYmVmYWE1OCJ9 -->
### `client.listPersistentBoxes`

Operation ID: `listPersistentBoxes`  
Route: `GET` `/v1/organizations/{organizationId}/persistent-boxes`  

#### Signature

```objectivec
- (nullable NSDictionary *)listPersistentBoxes:(NSString *)owPath0 queryItems:(NSArray<NSURLQueryItem *> *)queryItems error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |
| `limit` | `query` | no | `integer` | Maximum recent records; duplicates and other query parameters are rejected. |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Bounded stored records, private and not cacheable. limitReached indicates the requested bound was filled, not an exact total or proof that more records exist. | application/json (object) |
| `400` | Invalid query parameters. | none |
| `401` | Missing or rejected product session. | none |
| `403` | Current authority denied access or the organization/product/environment differs. | none |
| `503` | Authority or durable record storage unavailable. | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJsaXN0UGVyc2lzdGVudEJveGVzIn0 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJwcm92aXNpb25QZXJzaXN0ZW50Qm94IiwibWV0aG9kIjoiUE9TVCIsIm9wZXJhdGlvbl9pZCI6InByb3Zpc2lvblBlcnNpc3RlbnRCb3giLCJwYXRoIjoiL3YxL29yZ2FuaXphdGlvbnMve29yZ2FuaXphdGlvbklkfS9wZXJzaXN0ZW50LWJveGVzIiwicmVzb3VyY2UiOiJvcmdhbml6YXRpb25zIiwic2VjdGlvbl9zaGEyNTYiOiIwNzlmNmE5MDQ0MjJkMGRkMDljMTYyZmY0OWMyNWZjNzBhMTVlYWI5OGZkMTY3YWMyNjRmMjk4MDcwMjMyYzg2Iiwic2lnbmF0dXJlX3NoYTI1NiI6ImY2ZGFmMjFiMjNmZmJhMmE4MDZhOGZmMThjMDAzOWM0ODc0MWIyMDIyZDE1NzdmYTAyMmM3NWYyZThkNGFhYjYifQ -->
### `client.provisionPersistentBox`

Operation ID: `provisionPersistentBox`  
Route: `POST` `/v1/organizations/{organizationId}/persistent-boxes`  

#### Signature

```objectivec
- (nullable NSDictionary *)provisionPersistentBox:(NSString *)owPath0 body:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |
| `Idempotency-Key` | `header` | no | `string` |  |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Previously recorded running or closed allocation; replayed is true. | none |
| `201` | Provider allocation confirmed and recorded as running. Runtime remains reserved, not measured. | application/json (object) |
| `202` | The reservation is held and the allocation remains unconfirmed. Repeated requests never dispatch create again; operator reconciliation is required. | none |
| `400` | Invalid body, unsupported fields, query parameters or idempotency key. | none |
| `401` | Missing or rejected product session. | none |
| `402` | Missing durable entitlement, bounded allowance or available capacity. | none |
| `403` | Current authority denied the operation or target scope. | none |
| `409` | Idempotency conflict, unresolved prior budget or UTC month boundary. | none |
| `413` | Request body exceeds 4 KiB. | none |
| `503` | Authority, storage, operator offer or independent runtime enforcement unavailable. Missing configuration is refused before reservation. | none |

#### Canonical required-input example

```json
{
  "body": {
    "offer": "example",
    "reserveMinutes": 1
  },
  "content_type": "application/json",
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJwcm92aXNpb25QZXJzaXN0ZW50Qm94In0 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJwdXRGbGVldFBvbGljeSIsIm1ldGhvZCI6IlBVVCIsIm9wZXJhdGlvbl9pZCI6InB1dEZsZWV0UG9saWN5IiwicGF0aCI6Ii92MS9vcmdhbml6YXRpb25zL3tvcmdhbml6YXRpb25JZH0vZmxlZXQvcG9saWN5IiwicmVzb3VyY2UiOiJvcmdhbml6YXRpb25zIiwic2VjdGlvbl9zaGEyNTYiOiIwZmJkMzJhZWQyZTdkMDVjYTc2ZGE1ODgxOTY2NGVhODkyM2Y5YTAwYWE5NGRjMWJlZTkyYmQ3MzE5NTQ2NjA0Iiwic2lnbmF0dXJlX3NoYTI1NiI6ImYzODY4MGE5MDExNWU2MDNhYjE3MDU5OWUzMDFmZWRjZjA4NDJhNDgzNTk2NDBmYzFlYzFmMzM2MDZhODhhNTUifQ -->
### `client.putFleetPolicy`

Operation ID: `putFleetPolicy`  
Route: `PUT` `/v1/organizations/{organizationId}/fleet/policy`  

#### Signature

```objectivec
- (nullable NSDictionary *)putFleetPolicy:(NSString *)owPath0 body:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Stored policy | none |
| `400` | Invalid or unenforced field | none |

#### Canonical required-input example

```json
{
  "body": {},
  "content_type": "application/json",
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJwdXRGbGVldFBvbGljeSJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJyZWNvbmNpbGVQZXJzaXN0ZW50Qm94IiwibWV0aG9kIjoiUE9TVCIsIm9wZXJhdGlvbl9pZCI6InJlY29uY2lsZVBlcnNpc3RlbnRCb3giLCJwYXRoIjoiL3YxL29yZ2FuaXphdGlvbnMve29yZ2FuaXphdGlvbklkfS9wZXJzaXN0ZW50LWJveGVzL3tib3hJZH0vcmVjb25jaWxlIiwicmVzb3VyY2UiOiJvcmdhbml6YXRpb25zIiwic2VjdGlvbl9zaGEyNTYiOiJiNWMyZjlmZmY2MDIzN2ZiODlmOTc3MmE1ZmNiYjFmOTMyODM4MDdhNGNjNGFkMjhkODc0NTEyYmJhMzAxOWYyIiwic2lnbmF0dXJlX3NoYTI1NiI6ImFiNTU3OGNiZGFjZDMyNDc2Yjc4MGYwZDQyMDg5MDQ2MGJmODFkOTk0MDZkODRmNjUwMzk3NjFjOWMyYWUzNWYifQ -->
### `client.reconcilePersistentBox`

Operation ID: `reconcilePersistentBox`  
Route: `POST` `/v1/organizations/{organizationId}/persistent-boxes/{boxId}/reconcile`  

#### Signature

```objectivec
- (nullable NSDictionary *)reconcilePersistentBox:(NSString *)owPath0 boxId:(NSString *)owPath1 body:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |
| `boxId` | `path` | yes | `string&lt;uuid&gt;` |  |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Confirmed operation or replayed receipt. | application/json (object) |
| `202` | Operation remains unconfirmed; reconcile its operation ID without repeating the mutation. | application/json (object) |
| `400` | Invalid bounded lifecycle request. | none |
| `401` | Product session required. | none |
| `402` | Durable feature or quota denied. | none |
| `403` | Fresh operation authority denied. | none |
| `404` | Box or operation missing in the exact organization and deployment. | none |
| `409` | Conflicting operation, unresolved evidence or unavailable runtime budget. | none |
| `503` | Authority, storage or matching operator adapter unavailable. | none |

#### Canonical required-input example

```json
{
  "body": {
    "operationId": "00000000-0000-0000-f735-3d332872b96e"
  },
  "content_type": "application/json",
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    },
    {
      "in": "path",
      "name": "boxId",
      "value": "00000000-0000-0000-a264-3ce9cdfbbeff"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJyZWNvbmNpbGVQZXJzaXN0ZW50Qm94In0 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJyZW1vdmVNZW1iZXIiLCJtZXRob2QiOiJERUxFVEUiLCJvcGVyYXRpb25faWQiOiJyZW1vdmVNZW1iZXIiLCJwYXRoIjoiL3YxL29yZ2FuaXphdGlvbnMve29yZ2FuaXphdGlvbklkfS9tZW1iZXJzL3t1c2VySWR9IiwicmVzb3VyY2UiOiJvcmdhbml6YXRpb25zIiwic2VjdGlvbl9zaGEyNTYiOiJkZmUwZjIyY2NmYWRkMzkyYjgyM2MyYjM3ODI3YzY5YjY1MzdlZmQyMmJjMzU2MjY1OWEzYmE4ZGU0OTFiZTY1Iiwic2lnbmF0dXJlX3NoYTI1NiI6ImE0N2FkOTg0NjdhZjA5MGY1MWJmY2I4MjZmMzI0N2NkNDBmNWRkYzY4ODc4MzFmZDVhY2Y0YzlhYzA4ZTYxZmIifQ -->
### `client.removeMember`

Operation ID: `removeMember`  
Route: `DELETE` `/v1/organizations/{organizationId}/members/{userId}`  

#### Signature

```objectivec
- (nullable NSDictionary *)removeMember:(NSString *)owPath0 userId:(NSString *)owPath1 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |
| `userId` | `path` | yes | `string` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Removed | none |
| `404` | Unknown member | none |
| `409` | Managed account authority required; use the returned JackAISaaS accountUrl or portalUrl. | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    },
    {
      "in": "path",
      "name": "userId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJyZW1vdmVNZW1iZXIifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJzdGFydFBlcnNpc3RlbnRCb3giLCJtZXRob2QiOiJQT1NUIiwib3BlcmF0aW9uX2lkIjoic3RhcnRQZXJzaXN0ZW50Qm94IiwicGF0aCI6Ii92MS9vcmdhbml6YXRpb25zL3tvcmdhbml6YXRpb25JZH0vcGVyc2lzdGVudC1ib3hlcy97Ym94SWR9L3N0YXJ0IiwicmVzb3VyY2UiOiJvcmdhbml6YXRpb25zIiwic2VjdGlvbl9zaGEyNTYiOiJlNmZkNmIxN2YzOGJjNzc1MmE0MjUwMzM3MjIzYmFjNTkzYmM0NWNkOTFiM2VjOGVhMDA0YjU1ZDlkYzQyNTg2Iiwic2lnbmF0dXJlX3NoYTI1NiI6IjhlNGExZTU0YWQyMzI3MjAwZTlkY2FmMzI1ZTA5YzZmMGY1MzlhNTNjOGNkMTZjNzBjNTQxMDNkNGVhNzA1MWQifQ -->
### `client.startPersistentBox`

Operation ID: `startPersistentBox`  
Route: `POST` `/v1/organizations/{organizationId}/persistent-boxes/{boxId}/start`  

#### Signature

```objectivec
- (nullable NSDictionary *)startPersistentBox:(NSString *)owPath0 boxId:(NSString *)owPath1 body:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |
| `boxId` | `path` | yes | `string&lt;uuid&gt;` |  |
| `Idempotency-Key` | `header` | no | `string` |  |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Confirmed operation or replayed receipt. | application/json (object) |
| `202` | Operation remains unconfirmed; reconcile its operation ID without repeating the mutation. | application/json (object) |
| `400` | Invalid bounded lifecycle request. | none |
| `401` | Product session required. | none |
| `402` | Durable feature or quota denied. | none |
| `403` | Fresh operation authority denied. | none |
| `404` | Box or operation missing in the exact organization and deployment. | none |
| `409` | Conflicting operation, unresolved evidence or unavailable runtime budget. | none |
| `503` | Authority, storage or matching operator adapter unavailable. | none |

#### Canonical required-input example

```json
{
  "body": {
    "reserveMinutes": 1
  },
  "content_type": "application/json",
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    },
    {
      "in": "path",
      "name": "boxId",
      "value": "00000000-0000-0000-d7e8-d81c5e30ed9a"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJzdGFydFBlcnNpc3RlbnRCb3gifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJzdG9wQm94IiwibWV0aG9kIjoiREVMRVRFIiwib3BlcmF0aW9uX2lkIjoic3RvcEJveCIsInBhdGgiOiIvdjEvb3JnYW5pemF0aW9ucy97b3JnYW5pemF0aW9uSWR9L2JveGVzL3tib3hJZH0iLCJyZXNvdXJjZSI6Im9yZ2FuaXphdGlvbnMiLCJzZWN0aW9uX3NoYTI1NiI6IjhhNzY0YTJhMjIwZWI4NjcyYTllODlmOTcwODNjM2ZiNmU4MGJkMTVmZGY3Nzc1MWIxZmJlM2Y0YTM2MjE0ZWUiLCJzaWduYXR1cmVfc2hhMjU2IjoiZmM1M2VkMDM0OGUzMDE5NTA1ZDcyMTA4MGM2ZjM4ZDBhOThiMDUyZWQ4MDRiMmE4MDU1ZDIzYjdiODk5OWQyZSJ9 -->
### `client.stopBox`

Operation ID: `stopBox`  
Route: `DELETE` `/v1/organizations/{organizationId}/boxes/{boxId}`  

#### Signature

```objectivec
- (nullable NSDictionary *)stopBox:(NSString *)owPath0 boxId:(NSString *)owPath1 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |
| `boxId` | `path` | yes | `string&lt;uuid&gt;` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Stopped | none |
| `502` | The provider refused; state unchanged | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    },
    {
      "in": "path",
      "name": "boxId",
      "value": "00000000-0000-0000-265e-7c895c60153e"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJzdG9wQm94In0 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJzdG9wUGVyc2lzdGVudEJveCIsIm1ldGhvZCI6IlBPU1QiLCJvcGVyYXRpb25faWQiOiJzdG9wUGVyc2lzdGVudEJveCIsInBhdGgiOiIvdjEvb3JnYW5pemF0aW9ucy97b3JnYW5pemF0aW9uSWR9L3BlcnNpc3RlbnQtYm94ZXMve2JveElkfS9zdG9wIiwicmVzb3VyY2UiOiJvcmdhbml6YXRpb25zIiwic2VjdGlvbl9zaGEyNTYiOiJhZmJkYTliOTIwZDNkZDRhYzcyYTM1ZjNjMDY1YjM2ZWQ1OWRjNTFmODk5ZTI4YTJkOGE0Mzg4MzUwMWI5NWRhIiwic2lnbmF0dXJlX3NoYTI1NiI6IjY4YzczMmMzNWVkYTY0MGM0NTk2MjkyNWI0MTg0MWU5MDU1YTZjZmRmZDU3YzY3ZGM0MzJhMDNlZTBiNjMzZDgifQ -->
### `client.stopPersistentBox`

Operation ID: `stopPersistentBox`  
Route: `POST` `/v1/organizations/{organizationId}/persistent-boxes/{boxId}/stop`  

#### Signature

```objectivec
- (nullable NSDictionary *)stopPersistentBox:(NSString *)owPath0 boxId:(NSString *)owPath1 body:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |
| `boxId` | `path` | yes | `string&lt;uuid&gt;` |  |
| `Idempotency-Key` | `header` | no | `string` |  |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Confirmed operation or replayed receipt. | application/json (object) |
| `202` | Operation remains unconfirmed; reconcile its operation ID without repeating the mutation. | application/json (object) |
| `400` | Invalid bounded lifecycle request. | none |
| `401` | Product session required. | none |
| `402` | Durable feature or quota denied. | none |
| `403` | Fresh operation authority denied. | none |
| `404` | Box or operation missing in the exact organization and deployment. | none |
| `409` | Conflicting operation, unresolved evidence or unavailable runtime budget. | none |
| `503` | Authority, storage or matching operator adapter unavailable. | none |

#### Canonical required-input example

```json
{
  "body": {},
  "content_type": "application/json",
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    },
    {
      "in": "path",
      "name": "boxId",
      "value": "00000000-0000-0000-978f-a93165cf6579"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJzdG9wUGVyc2lzdGVudEJveCJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJzeW5jT2JzZXJ2ZWRCb3hlcyIsIm1ldGhvZCI6IlBPU1QiLCJvcGVyYXRpb25faWQiOiJzeW5jT2JzZXJ2ZWRCb3hlcyIsInBhdGgiOiIvdjEvb3JnYW5pemF0aW9ucy97b3JnYW5pemF0aW9uSWR9L29ic2VydmVkLWJveGVzL3N5bmMiLCJyZXNvdXJjZSI6Im9yZ2FuaXphdGlvbnMiLCJzZWN0aW9uX3NoYTI1NiI6IjRmNDQ0YzBkNzcwNGI4NjU1YzYzN2RmMTgxODQ5MGMyODljZDU3YmUyNjZkZGZmMjllNGVjMThhZTFjMjg2OWEiLCJzaWduYXR1cmVfc2hhMjU2IjoiZWU2YWI5MmU2YjM0OTYwODMxODk4ZGU5YjFlYTJlZjlkYjRiZmM4Y2E1YmE4ZmM2MTRkNDA0OGVjYjk5ZjY5MyJ9 -->
### `client.syncObservedBoxes`

Operation ID: `syncObservedBoxes`  
Route: `POST` `/v1/organizations/{organizationId}/observed-boxes/sync`  

#### Signature

```objectivec
- (nullable NSDictionary *)syncObservedBoxes:(NSString *)owPath0 body:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Snapshot accepted; private and not cacheable. | application/json (object) |
| `400` | Invalid observation snapshot. | none |
| `401` | No valid product session. | none |
| `403` | Organization or scope denied. | none |
| `413` | Snapshot exceeds 64 KiB. | none |
| `503` | Inventory storage unavailable. | none |

#### Canonical required-input example

```json
{
  "body": {
    "boxes": [
      {
        "boxId": "example",
        "kind": "provider-list",
        "provider": "example",
        "state": "running"
      }
    ],
    "sourceId": "00000000-0000-0000-ae61-93cfab8e5e4b"
  },
  "content_type": "application/json",
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJzeW5jT2JzZXJ2ZWRCb3hlcyJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJ1cHNlcnRNZW1iZXIiLCJtZXRob2QiOiJQT1NUIiwib3BlcmF0aW9uX2lkIjoidXBzZXJ0TWVtYmVyIiwicGF0aCI6Ii92MS9vcmdhbml6YXRpb25zL3tvcmdhbml6YXRpb25JZH0vbWVtYmVycyIsInJlc291cmNlIjoib3JnYW5pemF0aW9ucyIsInNlY3Rpb25fc2hhMjU2IjoiNDcyMWEzZWFkNmNmMTYyNGZkZWQ4N2FmYmY1NzcxYmE5Mjc3ZjM5ZDY0NDY4NzYzN2Q1M2NhNzM3ZTg2MWU0ZiIsInNpZ25hdHVyZV9zaGEyNTYiOiJhNzU5ZTVlOTlkYWZlYWZmOWY2M2I4NjRkMzNjZWU0ZjE1NzE0NjI1ZmQ5ZWQwYTFlNzUwZDAxNDk4NmNjOGY4In0 -->
### `client.upsertMember`

Operation ID: `upsertMember`  
Route: `POST` `/v1/organizations/{organizationId}/members`  

#### Signature

```objectivec
- (nullable NSDictionary *)upsertMember:(NSString *)owPath0 body:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `organizationId` | `path` | yes | `string` |  |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Member updated | none |
| `201` | Member added | none |
| `402` | Seat limit reached or entitlement missing | none |
| `409` | Managed account authority required; use the returned JackAISaaS accountUrl or portalUrl. | none |

#### Canonical required-input example

```json
{
  "body": {
    "email": "example-f35c@example.test",
    "role": "owner"
  },
  "content_type": "application/json",
  "parameters": [
    {
      "in": "path",
      "name": "organizationId",
      "value": "example"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJ1cHNlcnRNZW1iZXIifQ -->

## Resource `plans`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRQbGFucyIsIm1ldGhvZCI6IkdFVCIsIm9wZXJhdGlvbl9pZCI6ImdldFBsYW5zIiwicGF0aCI6Ii92MS9wbGFucyIsInJlc291cmNlIjoicGxhbnMiLCJzZWN0aW9uX3NoYTI1NiI6IjdmNWYwNjU5OTA1YzEwMDc1ZDNlNWM5ZDk5OWZjZGExYTljODExNDU5YzJiZGU1ZDE2MzE5NGIwMGZmMDlmNDciLCJzaWduYXR1cmVfc2hhMjU2IjoiMzhhZTYxZWJmZWVhZTM5OTVlYmMzNTI0MWQyYTdlYzJhZGVkYTUzZDdkYWQ1MjhiMTRkYWNjOTlhMTMzMjhkMCJ9 -->
### `client.getPlans`

Operation ID: `getPlans`  
Route: `GET` `/v1/plans`  

#### Signature

```objectivec
- (nullable NSDictionary *)getPlansWithError:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | OK | none |
| `409` | Managed account authority required; use the returned JackAISaaS accountUrl or portalUrl. | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRQbGFucyJ9 -->

## Resource `telemetry`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJpbmdlc3RUZWxlbWV0cnkiLCJtZXRob2QiOiJQT1NUIiwib3BlcmF0aW9uX2lkIjoiaW5nZXN0VGVsZW1ldHJ5IiwicGF0aCI6Ii92MS90ZWxlbWV0cnkvaW5nZXN0IiwicmVzb3VyY2UiOiJ0ZWxlbWV0cnkiLCJzZWN0aW9uX3NoYTI1NiI6IjFhMjJjMDRkNjY0NTE5ZWJiNzQ3OGUyZjBiNDFiY2MzMjljNmEwNWI3NDIzYTQxNTFjNGQ4Y2JjNDkwYWViMTkiLCJzaWduYXR1cmVfc2hhMjU2IjoiYmQwY2I3ZjM3ZDBhNGU0ODYzYWM4MTEzZWY0MDNkZjY0OTkxY2ViMDNhZmVlMGNkMmQ4ZWEwODQxMDliZWU5MSJ9 -->
### `client.ingestTelemetry`

Operation ID: `ingestTelemetry`  
Route: `POST` `/v1/telemetry/ingest`  

#### Signature

```objectivec
- (nullable NSDictionary *)ingestTelemetry:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `201` | Stored | none |
| `400` | Invalid event | none |
| `401` | License required | none |
| `409` | Managed account authority required; use the returned JackAISaaS accountUrl or portalUrl. | none |
| `413` | Body too large | none |
| `503` | Ingestion not configured | none |

#### Canonical required-input example

```json
{
  "body": {},
  "content_type": "application/json",
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJpbmdlc3RUZWxlbWV0cnkifQ -->

## Resource `waitlist`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJsaXN0V2FpdGxpc3QiLCJtZXRob2QiOiJHRVQiLCJvcGVyYXRpb25faWQiOiJsaXN0V2FpdGxpc3QiLCJwYXRoIjoiL3YxL3dhaXRsaXN0IiwicmVzb3VyY2UiOiJ3YWl0bGlzdCIsInNlY3Rpb25fc2hhMjU2IjoiOWRlNmE1ZDdkZGE1ZjY1ZjMxYjU0NDU2ZjRkYjQ3MjhlMzcxNDc1ZTA3NjE2ZmFiMWUwMmEyMzFjOGMyNWI2YiIsInNpZ25hdHVyZV9zaGEyNTYiOiI4OGRjNzM5MDA3ZGI5OWUxNzY1ZTAyOGIyZGQwMmNhN2RiMzhlYWRhMDY5Y2U4NGRkNGJmZWQ2YmE4NWU2NzMyIn0 -->
### `client.listWaitlist`

Operation ID: `listWaitlist`  
Route: `GET` `/v1/waitlist`  

#### Signature

```objectivec
- (nullable NSDictionary *)listWaitlistWithError:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Requests | none |
| `401` | Admin token required | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJsaXN0V2FpdGxpc3QifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJyZXF1ZXN0QWNjZXNzIiwibWV0aG9kIjoiUE9TVCIsIm9wZXJhdGlvbl9pZCI6InJlcXVlc3RBY2Nlc3MiLCJwYXRoIjoiL3YxL3dhaXRsaXN0IiwicmVzb3VyY2UiOiJ3YWl0bGlzdCIsInNlY3Rpb25fc2hhMjU2IjoiYzZjYTk1NzNjNTBkNTQzMTcwYmU4Y2JjYzAxY2YxNjk5OGM4YzYyZjcxNDc2OGVjNWY5YTZjNDdjZGNmN2JjMyIsInNpZ25hdHVyZV9zaGEyNTYiOiI5OWMwOTI1MWYyZjc1NTZiZGUwZGI3MTljYjYyYjA0MWEwOGNmNWE4MzMyNjg5OWU2YTFiMmZhZWY0ZWU2NmJiIn0 -->
### `client.requestAccess`

Operation ID: `requestAccess`  
Route: `POST` `/v1/waitlist`  

#### Signature

```objectivec
- (nullable NSDictionary *)requestAccess:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `202` | Received | none |
| `400` | Invalid email | none |
| `413` | Body too large | none |
| `429` | Rate limited | none |

#### Canonical required-input example

```json
{
  "body": {},
  "content_type": "application/json",
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJyZXF1ZXN0QWNjZXNzIn0 -->

## Resource `workspaces`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJjbG9zZUhvc3RlZFdvcmtzcGFjZSIsIm1ldGhvZCI6IlBPU1QiLCJvcGVyYXRpb25faWQiOiJjbG9zZUhvc3RlZFdvcmtzcGFjZSIsInBhdGgiOiIvdjEvd29ya3NwYWNlcy97d29ya3NwYWNlSWR9L2Nsb3NlIiwicmVzb3VyY2UiOiJ3b3Jrc3BhY2VzIiwic2VjdGlvbl9zaGEyNTYiOiIyYzg3NjU5YTVmYTQ2MDQ1Y2YzMDg4N2FhZGFhODdhMmY5NDVhNjljZDU5OTg2ZWQxNzcyNWNkNWRlZjJkNzQwIiwic2lnbmF0dXJlX3NoYTI1NiI6IjM0NjUzMWU2NjQ1YTlkMTU2ZTgzOTNlYzUyMzNjNzY5OWJkOGE1ODdlMGVlMGMxODJiNmE3MzM1NWVmODU1NzQifQ -->
### `client.closeHostedWorkspace`

Operation ID: `closeHostedWorkspace`  
Route: `POST` `/v1/workspaces/{workspaceId}/close`  

#### Signature

```objectivec
- (nullable NSDictionary *)closeHostedWorkspace:(NSString *)owPath0 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `workspaceId` | `path` | yes | `string&lt;uuid&gt;` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Authorized workspace state or result | none |
| `400` | Invalid bounded request | none |
| `401` | Product session rejected | none |
| `402` | Hub entitlement or atomic quota denied | none |
| `403` | Operation or fleet policy denied | none |
| `404` | Resource not found in the authorized tenant and product environment | none |
| `409` | Idempotency conflict, incompatible state or cleanup unconfirmed | none |
| `503` | Operator provider, template, storage or authority unavailable | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "workspaceId",
      "value": "00000000-0000-0000-6658-e129a559a4dd"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJjbG9zZUhvc3RlZFdvcmtzcGFjZSJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRIb3N0ZWRXb3Jrc3BhY2UiLCJtZXRob2QiOiJHRVQiLCJvcGVyYXRpb25faWQiOiJnZXRIb3N0ZWRXb3Jrc3BhY2UiLCJwYXRoIjoiL3YxL3dvcmtzcGFjZXMve3dvcmtzcGFjZUlkfSIsInJlc291cmNlIjoid29ya3NwYWNlcyIsInNlY3Rpb25fc2hhMjU2IjoiYjgyNWI1MzUwMTI0OGI0ZTM4NjRiY2RlODVjNmEwNzY3MTgwNWY4ZTlhMmU4Yjc4MjZiYjI0NTBkOTVmZTZlNCIsInNpZ25hdHVyZV9zaGEyNTYiOiJhOTlhMzRjNDU2ZTZmZTE1MzM2MDY0MzgxZDQ0ZjAxNGNiYjlhZDQ2ODA0YTY4NWQzODUwYjdmMmQxNWU0ZjI1In0 -->
### `client.getHostedWorkspace`

Operation ID: `getHostedWorkspace`  
Route: `GET` `/v1/workspaces/{workspaceId}`  

#### Signature

```objectivec
- (nullable NSDictionary *)getHostedWorkspace:(NSString *)owPath0 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `workspaceId` | `path` | yes | `string&lt;uuid&gt;` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Authorized workspace state or result | none |
| `400` | Invalid bounded request | none |
| `401` | Product session rejected | none |
| `402` | Hub entitlement or atomic quota denied | none |
| `403` | Operation or fleet policy denied | none |
| `404` | Resource not found in the authorized tenant and product environment | none |
| `409` | Idempotency conflict, incompatible state or cleanup unconfirmed | none |
| `503` | Operator provider, template, storage or authority unavailable | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "workspaceId",
      "value": "00000000-0000-0000-dd2f-cd2edd1eeb24"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRIb3N0ZWRXb3Jrc3BhY2UifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRIb3N0ZWRXb3Jrc3BhY2VPcGVyYXRpb24iLCJtZXRob2QiOiJHRVQiLCJvcGVyYXRpb25faWQiOiJnZXRIb3N0ZWRXb3Jrc3BhY2VPcGVyYXRpb24iLCJwYXRoIjoiL3YxL3dvcmtzcGFjZXMve3dvcmtzcGFjZUlkfS9vcGVyYXRpb25zL3tvcGVyYXRpb25JZH0iLCJyZXNvdXJjZSI6IndvcmtzcGFjZXMiLCJzZWN0aW9uX3NoYTI1NiI6IjNkOGMyNjAyYWE4ZGFmNmU2NzNiNWE1NTlhZDlhMmQzNDJlOTVhMmUyOWY4MzA0YjMxMWRlMjE5NGQyZTAxMzciLCJzaWduYXR1cmVfc2hhMjU2IjoiNzYxNzJkMzRiNDYxMTU1MjA5YTFmNDUxMTZiN2U3YjJjZGEwOTNkYmY3YWY0YWM5MTg2ZTQ0Y2RlYTZhNzY5NyJ9 -->
### `client.getHostedWorkspaceOperation`

Operation ID: `getHostedWorkspaceOperation`  
Route: `GET` `/v1/workspaces/{workspaceId}/operations/{operationId}`  

#### Signature

```objectivec
- (nullable NSDictionary *)getHostedWorkspaceOperation:(NSString *)owPath0 operationId:(NSString *)owPath1 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `workspaceId` | `path` | yes | `string&lt;uuid&gt;` |  |
| `operationId` | `path` | yes | `string&lt;uuid&gt;` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Authorized workspace state or result | none |
| `400` | Invalid bounded request | none |
| `401` | Product session rejected | none |
| `402` | Hub entitlement or atomic quota denied | none |
| `403` | Operation or fleet policy denied | none |
| `404` | Resource not found in the authorized tenant and product environment | none |
| `409` | Idempotency conflict, incompatible state or cleanup unconfirmed | none |
| `503` | Operator provider, template, storage or authority unavailable | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "workspaceId",
      "value": "00000000-0000-0000-7261-284a8b699ebd"
    },
    {
      "in": "path",
      "name": "operationId",
      "value": "00000000-0000-0000-5ba1-19fa55640b6d"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRIb3N0ZWRXb3Jrc3BhY2VPcGVyYXRpb24ifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJnZXRIb3N0ZWRXb3Jrc3BhY2VTb3VyY2UiLCJtZXRob2QiOiJHRVQiLCJvcGVyYXRpb25faWQiOiJnZXRIb3N0ZWRXb3Jrc3BhY2VTb3VyY2UiLCJwYXRoIjoiL3YxL3dvcmtzcGFjZXMve3dvcmtzcGFjZUlkfS9zb3VyY2UiLCJyZXNvdXJjZSI6IndvcmtzcGFjZXMiLCJzZWN0aW9uX3NoYTI1NiI6IjI0MWMyYmFhY2ZmYWY2MDJjMjE5ZDI1YjIzM2E2ZDczMzg2MTM1MTJlMjU3MmM3MjNhNDk0ZTk1MWQ5MGEwYmUiLCJzaWduYXR1cmVfc2hhMjU2IjoiMTkwYWVmZmQ3MTA5ODMzMmI2MWIzOGRlYzM0MDY4ZDhmOWM4NzNmN2Y0NjQ0MjBiZTgzODBkNjM5MmQ2MGIzMCJ9 -->
### `client.getHostedWorkspaceSource`

Operation ID: `getHostedWorkspaceSource`  
Route: `GET` `/v1/workspaces/{workspaceId}/source`  

#### Signature

```objectivec
- (nullable NSDictionary *)getHostedWorkspaceSource:(NSString *)owPath0 error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `workspaceId` | `path` | yes | `string&lt;uuid&gt;` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Authorized workspace state or result | none |
| `400` | Invalid bounded request | none |
| `401` | Product session rejected | none |
| `402` | Hub entitlement or atomic quota denied | none |
| `403` | Operation or fleet policy denied | none |
| `404` | Resource not found in the authorized tenant and product environment | none |
| `409` | Idempotency conflict, incompatible state or cleanup unconfirmed | none |
| `503` | Operator provider, template, storage or authority unavailable | none |

#### Canonical required-input example

```json
{
  "parameters": [
    {
      "in": "path",
      "name": "workspaceId",
      "value": "00000000-0000-0000-43c8-d895a22336ed"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRIb3N0ZWRXb3Jrc3BhY2VTb3VyY2UifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJsaXN0SG9zdGVkV29ya3NwYWNlcyIsIm1ldGhvZCI6IkdFVCIsIm9wZXJhdGlvbl9pZCI6Imxpc3RIb3N0ZWRXb3Jrc3BhY2VzIiwicGF0aCI6Ii92MS93b3Jrc3BhY2VzIiwicmVzb3VyY2UiOiJ3b3Jrc3BhY2VzIiwic2VjdGlvbl9zaGEyNTYiOiJlMGExNjY2YjI4NjU2YTNiOWNiNzVjYzQwZmIzOTg0YThmZjE1ZDA1NDBhZTc2NjJjMTk3NDA1N2FmYzBlNWVmIiwic2lnbmF0dXJlX3NoYTI1NiI6Ijc5NzFkMDg4NTQ2NjZlNTEyMDI4NTNmODU3ZDlhOTJmN2JlODZhMzcyODk2MTY1NGQ4NTZiYjBkN2Q4YjhjMTgifQ -->
### `client.listHostedWorkspaces`

Operation ID: `listHostedWorkspaces`  
Route: `GET` `/v1/workspaces`  

#### Signature

```objectivec
- (nullable NSDictionary *)listHostedWorkspacesWithError:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Authorized workspace state or result | none |
| `400` | Invalid bounded request | none |
| `401` | Product session rejected | none |
| `402` | Hub entitlement or atomic quota denied | none |
| `403` | Operation or fleet policy denied | none |
| `404` | Resource not found in the authorized tenant and product environment | none |
| `409` | Idempotency conflict, incompatible state or cleanup unconfirmed | none |
| `503` | Operator provider, template, storage or authority unavailable | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJsaXN0SG9zdGVkV29ya3NwYWNlcyJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJvcGVuSG9zdGVkV29ya3NwYWNlIiwibWV0aG9kIjoiUE9TVCIsIm9wZXJhdGlvbl9pZCI6Im9wZW5Ib3N0ZWRXb3Jrc3BhY2UiLCJwYXRoIjoiL3YxL3dvcmtzcGFjZXMiLCJyZXNvdXJjZSI6IndvcmtzcGFjZXMiLCJzZWN0aW9uX3NoYTI1NiI6IjE4ODkzY2I3MmY5M2Y4Zjg4Zjg4NDJhNjMyMDM0MzdlYmM2ODJjNTgxMTA0OWZmN2RkZWU0ZjQ2OTJmNjVmNGQiLCJzaWduYXR1cmVfc2hhMjU2IjoiZGYwMjQ3YTMzYjdhMjI1Y2UwZWJkYjMzMDNhYWRjNjQ1M2I4MGY1NDMxYWMxODc3YjdjYWM4YWJhYzQ2YmNiNSJ9 -->
### `client.openHostedWorkspace`

Operation ID: `openHostedWorkspace`  
Route: `POST` `/v1/workspaces`  

#### Signature

```objectivec
- (nullable NSDictionary *)openHostedWorkspace:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `Idempotency-Key` | `header` | no | `string` | Required here or in the idempotencyKey body field. Replays never allocate or execute again. |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Authorized workspace state or result | none |
| `201` | Prepared workspace; source and provider allocation recorded durably | none |
| `400` | Invalid bounded request | none |
| `401` | Product session rejected | none |
| `402` | Hub entitlement or atomic quota denied | none |
| `403` | Operation or fleet policy denied | none |
| `404` | Resource not found in the authorized tenant and product environment | none |
| `409` | Idempotency conflict, incompatible state or cleanup unconfirmed | none |
| `503` | Operator provider, template, storage or authority unavailable | none |

#### Canonical required-input example

```json
{
  "body": {},
  "content_type": "application/json",
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJvcGVuSG9zdGVkV29ya3NwYWNlIn0 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJyZWNvdmVySG9zdGVkV29ya3NwYWNlIiwibWV0aG9kIjoiUE9TVCIsIm9wZXJhdGlvbl9pZCI6InJlY292ZXJIb3N0ZWRXb3Jrc3BhY2UiLCJwYXRoIjoiL3YxL3dvcmtzcGFjZXMve3dvcmtzcGFjZUlkfS9yZWNvdmVyIiwicmVzb3VyY2UiOiJ3b3Jrc3BhY2VzIiwic2VjdGlvbl9zaGEyNTYiOiI4Y2FjNTBkY2VlOTA5ODVhZGU1NzRkNDYyOTc3NTYyZjFlNjBlNDJhMmY5NjQwODMyN2NhYjllYzY5YmZjNzY4Iiwic2lnbmF0dXJlX3NoYTI1NiI6IjY2MTU0Y2I5NTk2ZjQ0ODU3YzFlYjUzOTdiN2Q4MmMwNGExYzYwM2RlNmM1ODFkOTZmYTQyYzk3ZDEzNzM5MzQifQ -->
### `client.recoverHostedWorkspace`

Operation ID: `recoverHostedWorkspace`  
Route: `POST` `/v1/workspaces/{workspaceId}/recover`  

#### Signature

```objectivec
- (nullable NSDictionary *)recoverHostedWorkspace:(NSString *)owPath0 body:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `workspaceId` | `path` | yes | `string&lt;uuid&gt;` |  |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Authorized workspace state or result | none |
| `202` | No verified terminal receipt yet; workspace remains unavailable for new commands | none |
| `400` | Invalid bounded request | none |
| `401` | Product session rejected | none |
| `402` | Hub entitlement or atomic quota denied | none |
| `403` | Operation or fleet policy denied | none |
| `404` | Resource not found in the authorized tenant and product environment | none |
| `409` | Idempotency conflict, incompatible state or cleanup unconfirmed | none |
| `503` | Operator provider, template, storage or authority unavailable | none |

#### Canonical required-input example

```json
{
  "body": {
    "operationId": "00000000-0000-0000-d4ac-b0b84827b6d9"
  },
  "content_type": "application/json",
  "parameters": [
    {
      "in": "path",
      "name": "workspaceId",
      "value": "00000000-0000-0000-973a-c9ae0260973d"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJyZWNvdmVySG9zdGVkV29ya3NwYWNlIn0 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJydW5Ib3N0ZWRXb3Jrc3BhY2UiLCJtZXRob2QiOiJQT1NUIiwib3BlcmF0aW9uX2lkIjoicnVuSG9zdGVkV29ya3NwYWNlIiwicGF0aCI6Ii92MS93b3Jrc3BhY2VzL3t3b3Jrc3BhY2VJZH0vcnVuIiwicmVzb3VyY2UiOiJ3b3Jrc3BhY2VzIiwic2VjdGlvbl9zaGEyNTYiOiJhNDdkYmE0NDEwMjMzZDZiMDE5Y2M3M2ZjYjJkZWQzM2RiNzgxYWUzODRlN2JkOGE4YTIxOWFlYTY5N2QzYzkxIiwic2lnbmF0dXJlX3NoYTI1NiI6IjRjNWYzYjRmYzI3MTUzMTU4N2RlMzZlOTFiMmExM2M0NGY1MWIwN2ExYzVmNWVjYTMzM2JiNjdkMGFkNmQwMGMifQ -->
### `client.runHostedWorkspace`

Operation ID: `runHostedWorkspace`  
Route: `POST` `/v1/workspaces/{workspaceId}/run`  

#### Signature

```objectivec
- (nullable NSDictionary *)runHostedWorkspace:(NSString *)owPath0 body:(nullable NSDictionary *)body error:(NSError * _Nullable * _Nullable)error
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| `workspaceId` | `path` | yes | `string&lt;uuid&gt;` |  |
| `Idempotency-Key` | `header` | no | `string` | Required here or in the idempotencyKey body field. Replays never allocate or execute again. |
| `body` | body | yes | `object` |  |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Authorized workspace state or result | none |
| `202` | Running or uncertain operation; inspect or explicitly recover, never resend with a new key | none |
| `400` | Invalid bounded request | none |
| `401` | Product session rejected | none |
| `402` | Hub entitlement or atomic quota denied | none |
| `403` | Operation or fleet policy denied | none |
| `404` | Resource not found in the authorized tenant and product environment | none |
| `409` | Idempotency conflict, incompatible state or cleanup unconfirmed | none |
| `503` | Operator provider, template, storage or authority unavailable | none |

#### Canonical required-input example

```json
{
  "body": {
    "command": "example"
  },
  "content_type": "application/json",
  "parameters": [
    {
      "in": "path",
      "name": "workspaceId",
      "value": "00000000-0000-0000-4862-6c003dd1756b"
    }
  ]
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJydW5Ib3N0ZWRXb3Jrc3BhY2UifQ -->

