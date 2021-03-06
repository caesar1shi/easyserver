-- Generated By protoc-gen-lua Do not Edit
local protobuf = require "protobuf"
local ProtoSvrServerData_pb = require("ProtoSvrServerData_pb")
module('ProtoSvrZone_pb')


local SVRZONEOPCODE = protobuf.EnumDescriptor();
local SVRZONEOPCODE_ZONE_OP_REGISTER_SERVER_ENUM = protobuf.EnumValueDescriptor();
local SVRZONEOPCODE_ZONE_OP_GET_SERVER_INFO_ENUM = protobuf.EnumValueDescriptor();
local SVRZONEOPCODE_ZONE_OP_USER_SELECT_ZONE_ENUM = protobuf.EnumValueDescriptor();
local SVRZONEOPCODE_ZONE_OP_RECORD_CHAR_TO_LOGINDB_ENUM = protobuf.EnumValueDescriptor();
local SVRZONEOPCODE_ZONE_OP_UPDATE_SERVER_INFO_ENUM = protobuf.EnumValueDescriptor();
local SVRZONEOPCODE_ZONE_OP_KICK_USER_ENUM = protobuf.EnumValueDescriptor();
local SVRZONEOPCODE_ZONE_OP_UNREG_ZONEUSER_ENUM = protobuf.EnumValueDescriptor();
local MSGREGISTERSERVER = protobuf.Descriptor();
local MSGREGISTERSERVER_INFO_FIELD = protobuf.FieldDescriptor();
local MSGREGISTERSERVER_RESULT_FIELD = protobuf.FieldDescriptor();
local MSGGETSERVERINFO = protobuf.Descriptor();
local MSGGETSERVERINFO_TYPE_FIELD = protobuf.FieldDescriptor();
local MSGGETSERVERINFO_FLAG_FIELD = protobuf.FieldDescriptor();
local MSGGETSERVERINFO_RESULT_FIELD = protobuf.FieldDescriptor();
local MSGGETSERVERINFO_SERVER_LIST_FIELD = protobuf.FieldDescriptor();
local MSGUSERSELECTZONE = protobuf.Descriptor();
local MSGUSERSELECTZONE_ACCOUNT_FIELD = protobuf.FieldDescriptor();
local MSGUSERSELECTZONE_LOGIN_KEY_FIELD = protobuf.FieldDescriptor();
local MSGUSERSELECTZONE_CLIENT_TASKID_FIELD = protobuf.FieldDescriptor();
local MSGUSERSELECTZONE_LOGIN_SERVER_UID_FIELD = protobuf.FieldDescriptor();
local MSGUSERSELECTZONE_RESULT_FIELD = protobuf.FieldDescriptor();
local MSGUSERSELECTZONE_GATEWAY_IP_FIELD = protobuf.FieldDescriptor();
local MSGUSERSELECTZONE_GATEWAY_PORT_FIELD = protobuf.FieldDescriptor();
local MSGRECORDCHARTOLOGINDB = protobuf.Descriptor();
local MSGRECORDCHARTOLOGINDB_CHAR_INFO_FIELD = protobuf.FieldDescriptor();
local NOTIFYUPDATESERVERINFO = protobuf.Descriptor();
local NOTIFYUPDATESERVERINFO_SERVER_UID_FIELD = protobuf.FieldDescriptor();
local NOTIFYUPDATESERVERINFO_ONLINENUM_FIELD = protobuf.FieldDescriptor();
local NOTIFYUPDATESERVERINFO_STATE_FIELD = protobuf.FieldDescriptor();
local MSGKICKGATEWAYUSER = protobuf.Descriptor();
local MSGKICKGATEWAYUSER_ACCOUNT_FIELD = protobuf.FieldDescriptor();
local MSGKICKGATEWAYUSER_RESULT_FIELD = protobuf.FieldDescriptor();
local MSGUNREGZONEUSER = protobuf.Descriptor();
local MSGUNREGZONEUSER_ACCOUNT_FIELD = protobuf.FieldDescriptor();
local MSGUNREGZONEUSER_RESULT_FIELD = protobuf.FieldDescriptor();

SVRZONEOPCODE_ZONE_OP_REGISTER_SERVER_ENUM.name = "ZONE_OP_REGISTER_SERVER"
SVRZONEOPCODE_ZONE_OP_REGISTER_SERVER_ENUM.index = 0
SVRZONEOPCODE_ZONE_OP_REGISTER_SERVER_ENUM.number = 1
SVRZONEOPCODE_ZONE_OP_GET_SERVER_INFO_ENUM.name = "ZONE_OP_GET_SERVER_INFO"
SVRZONEOPCODE_ZONE_OP_GET_SERVER_INFO_ENUM.index = 1
SVRZONEOPCODE_ZONE_OP_GET_SERVER_INFO_ENUM.number = 2
SVRZONEOPCODE_ZONE_OP_USER_SELECT_ZONE_ENUM.name = "ZONE_OP_USER_SELECT_ZONE"
SVRZONEOPCODE_ZONE_OP_USER_SELECT_ZONE_ENUM.index = 2
SVRZONEOPCODE_ZONE_OP_USER_SELECT_ZONE_ENUM.number = 3
SVRZONEOPCODE_ZONE_OP_RECORD_CHAR_TO_LOGINDB_ENUM.name = "ZONE_OP_RECORD_CHAR_TO_LOGINDB"
SVRZONEOPCODE_ZONE_OP_RECORD_CHAR_TO_LOGINDB_ENUM.index = 3
SVRZONEOPCODE_ZONE_OP_RECORD_CHAR_TO_LOGINDB_ENUM.number = 4
SVRZONEOPCODE_ZONE_OP_UPDATE_SERVER_INFO_ENUM.name = "ZONE_OP_UPDATE_SERVER_INFO"
SVRZONEOPCODE_ZONE_OP_UPDATE_SERVER_INFO_ENUM.index = 4
SVRZONEOPCODE_ZONE_OP_UPDATE_SERVER_INFO_ENUM.number = 5
SVRZONEOPCODE_ZONE_OP_KICK_USER_ENUM.name = "ZONE_OP_KICK_USER"
SVRZONEOPCODE_ZONE_OP_KICK_USER_ENUM.index = 5
SVRZONEOPCODE_ZONE_OP_KICK_USER_ENUM.number = 6
SVRZONEOPCODE_ZONE_OP_UNREG_ZONEUSER_ENUM.name = "ZONE_OP_UNREG_ZONEUSER"
SVRZONEOPCODE_ZONE_OP_UNREG_ZONEUSER_ENUM.index = 6
SVRZONEOPCODE_ZONE_OP_UNREG_ZONEUSER_ENUM.number = 7
SVRZONEOPCODE.name = "SvrZoneOpCode"
SVRZONEOPCODE.full_name = ".ZoneCmd.SvrZoneOpCode"
SVRZONEOPCODE.values = {SVRZONEOPCODE_ZONE_OP_REGISTER_SERVER_ENUM,SVRZONEOPCODE_ZONE_OP_GET_SERVER_INFO_ENUM,SVRZONEOPCODE_ZONE_OP_USER_SELECT_ZONE_ENUM,SVRZONEOPCODE_ZONE_OP_RECORD_CHAR_TO_LOGINDB_ENUM,SVRZONEOPCODE_ZONE_OP_UPDATE_SERVER_INFO_ENUM,SVRZONEOPCODE_ZONE_OP_KICK_USER_ENUM,SVRZONEOPCODE_ZONE_OP_UNREG_ZONEUSER_ENUM}
MSGREGISTERSERVER_INFO_FIELD.name = "info"
MSGREGISTERSERVER_INFO_FIELD.full_name = ".ZoneCmd.MsgRegisterServer.info"
MSGREGISTERSERVER_INFO_FIELD.number = 1
MSGREGISTERSERVER_INFO_FIELD.index = 0
MSGREGISTERSERVER_INFO_FIELD.label = 1
MSGREGISTERSERVER_INFO_FIELD.has_default_value = false
MSGREGISTERSERVER_INFO_FIELD.default_value = nil
MSGREGISTERSERVER_INFO_FIELD.message_type = PROTOSVRSERVERDATA_PB_SERVERINFO
MSGREGISTERSERVER_INFO_FIELD.type = 11
MSGREGISTERSERVER_INFO_FIELD.cpp_type = 10

MSGREGISTERSERVER_RESULT_FIELD.name = "result"
MSGREGISTERSERVER_RESULT_FIELD.full_name = ".ZoneCmd.MsgRegisterServer.result"
MSGREGISTERSERVER_RESULT_FIELD.number = 2
MSGREGISTERSERVER_RESULT_FIELD.index = 1
MSGREGISTERSERVER_RESULT_FIELD.label = 1
MSGREGISTERSERVER_RESULT_FIELD.has_default_value = false
MSGREGISTERSERVER_RESULT_FIELD.default_value = 0
MSGREGISTERSERVER_RESULT_FIELD.type = 5
MSGREGISTERSERVER_RESULT_FIELD.cpp_type = 1

MSGREGISTERSERVER.name = "MsgRegisterServer"
MSGREGISTERSERVER.full_name = ".ZoneCmd.MsgRegisterServer"
MSGREGISTERSERVER.nested_types = {}
MSGREGISTERSERVER.enum_types = {}
MSGREGISTERSERVER.fields = {MSGREGISTERSERVER_INFO_FIELD, MSGREGISTERSERVER_RESULT_FIELD}
MSGREGISTERSERVER.is_extendable = false
MSGREGISTERSERVER.extensions = {}
MSGGETSERVERINFO_TYPE_FIELD.name = "type"
MSGGETSERVERINFO_TYPE_FIELD.full_name = ".ZoneCmd.MsgGetServerInfo.type"
MSGGETSERVERINFO_TYPE_FIELD.number = 1
MSGGETSERVERINFO_TYPE_FIELD.index = 0
MSGGETSERVERINFO_TYPE_FIELD.label = 1
MSGGETSERVERINFO_TYPE_FIELD.has_default_value = false
MSGGETSERVERINFO_TYPE_FIELD.default_value = 0
MSGGETSERVERINFO_TYPE_FIELD.type = 13
MSGGETSERVERINFO_TYPE_FIELD.cpp_type = 3

MSGGETSERVERINFO_FLAG_FIELD.name = "flag"
MSGGETSERVERINFO_FLAG_FIELD.full_name = ".ZoneCmd.MsgGetServerInfo.flag"
MSGGETSERVERINFO_FLAG_FIELD.number = 2
MSGGETSERVERINFO_FLAG_FIELD.index = 1
MSGGETSERVERINFO_FLAG_FIELD.label = 1
MSGGETSERVERINFO_FLAG_FIELD.has_default_value = true
MSGGETSERVERINFO_FLAG_FIELD.default_value = 1
MSGGETSERVERINFO_FLAG_FIELD.type = 13
MSGGETSERVERINFO_FLAG_FIELD.cpp_type = 3

MSGGETSERVERINFO_RESULT_FIELD.name = "result"
MSGGETSERVERINFO_RESULT_FIELD.full_name = ".ZoneCmd.MsgGetServerInfo.result"
MSGGETSERVERINFO_RESULT_FIELD.number = 3
MSGGETSERVERINFO_RESULT_FIELD.index = 2
MSGGETSERVERINFO_RESULT_FIELD.label = 1
MSGGETSERVERINFO_RESULT_FIELD.has_default_value = false
MSGGETSERVERINFO_RESULT_FIELD.default_value = 0
MSGGETSERVERINFO_RESULT_FIELD.type = 5
MSGGETSERVERINFO_RESULT_FIELD.cpp_type = 1

MSGGETSERVERINFO_SERVER_LIST_FIELD.name = "server_list"
MSGGETSERVERINFO_SERVER_LIST_FIELD.full_name = ".ZoneCmd.MsgGetServerInfo.server_list"
MSGGETSERVERINFO_SERVER_LIST_FIELD.number = 4
MSGGETSERVERINFO_SERVER_LIST_FIELD.index = 3
MSGGETSERVERINFO_SERVER_LIST_FIELD.label = 3
MSGGETSERVERINFO_SERVER_LIST_FIELD.has_default_value = false
MSGGETSERVERINFO_SERVER_LIST_FIELD.default_value = {}
MSGGETSERVERINFO_SERVER_LIST_FIELD.message_type = PROTOSVRSERVERDATA_PB_SERVERINFO
MSGGETSERVERINFO_SERVER_LIST_FIELD.type = 11
MSGGETSERVERINFO_SERVER_LIST_FIELD.cpp_type = 10

MSGGETSERVERINFO.name = "MsgGetServerInfo"
MSGGETSERVERINFO.full_name = ".ZoneCmd.MsgGetServerInfo"
MSGGETSERVERINFO.nested_types = {}
MSGGETSERVERINFO.enum_types = {}
MSGGETSERVERINFO.fields = {MSGGETSERVERINFO_TYPE_FIELD, MSGGETSERVERINFO_FLAG_FIELD, MSGGETSERVERINFO_RESULT_FIELD, MSGGETSERVERINFO_SERVER_LIST_FIELD}
MSGGETSERVERINFO.is_extendable = false
MSGGETSERVERINFO.extensions = {}
MSGUSERSELECTZONE_ACCOUNT_FIELD.name = "account"
MSGUSERSELECTZONE_ACCOUNT_FIELD.full_name = ".ZoneCmd.MsgUserSelectZone.account"
MSGUSERSELECTZONE_ACCOUNT_FIELD.number = 1
MSGUSERSELECTZONE_ACCOUNT_FIELD.index = 0
MSGUSERSELECTZONE_ACCOUNT_FIELD.label = 1
MSGUSERSELECTZONE_ACCOUNT_FIELD.has_default_value = false
MSGUSERSELECTZONE_ACCOUNT_FIELD.default_value = ""
MSGUSERSELECTZONE_ACCOUNT_FIELD.type = 9
MSGUSERSELECTZONE_ACCOUNT_FIELD.cpp_type = 9

MSGUSERSELECTZONE_LOGIN_KEY_FIELD.name = "login_key"
MSGUSERSELECTZONE_LOGIN_KEY_FIELD.full_name = ".ZoneCmd.MsgUserSelectZone.login_key"
MSGUSERSELECTZONE_LOGIN_KEY_FIELD.number = 2
MSGUSERSELECTZONE_LOGIN_KEY_FIELD.index = 1
MSGUSERSELECTZONE_LOGIN_KEY_FIELD.label = 1
MSGUSERSELECTZONE_LOGIN_KEY_FIELD.has_default_value = false
MSGUSERSELECTZONE_LOGIN_KEY_FIELD.default_value = 0
MSGUSERSELECTZONE_LOGIN_KEY_FIELD.type = 13
MSGUSERSELECTZONE_LOGIN_KEY_FIELD.cpp_type = 3

MSGUSERSELECTZONE_CLIENT_TASKID_FIELD.name = "client_taskid"
MSGUSERSELECTZONE_CLIENT_TASKID_FIELD.full_name = ".ZoneCmd.MsgUserSelectZone.client_taskid"
MSGUSERSELECTZONE_CLIENT_TASKID_FIELD.number = 3
MSGUSERSELECTZONE_CLIENT_TASKID_FIELD.index = 2
MSGUSERSELECTZONE_CLIENT_TASKID_FIELD.label = 1
MSGUSERSELECTZONE_CLIENT_TASKID_FIELD.has_default_value = false
MSGUSERSELECTZONE_CLIENT_TASKID_FIELD.default_value = 0
MSGUSERSELECTZONE_CLIENT_TASKID_FIELD.type = 13
MSGUSERSELECTZONE_CLIENT_TASKID_FIELD.cpp_type = 3

MSGUSERSELECTZONE_LOGIN_SERVER_UID_FIELD.name = "login_server_uid"
MSGUSERSELECTZONE_LOGIN_SERVER_UID_FIELD.full_name = ".ZoneCmd.MsgUserSelectZone.login_server_uid"
MSGUSERSELECTZONE_LOGIN_SERVER_UID_FIELD.number = 4
MSGUSERSELECTZONE_LOGIN_SERVER_UID_FIELD.index = 3
MSGUSERSELECTZONE_LOGIN_SERVER_UID_FIELD.label = 1
MSGUSERSELECTZONE_LOGIN_SERVER_UID_FIELD.has_default_value = false
MSGUSERSELECTZONE_LOGIN_SERVER_UID_FIELD.default_value = 0
MSGUSERSELECTZONE_LOGIN_SERVER_UID_FIELD.type = 4
MSGUSERSELECTZONE_LOGIN_SERVER_UID_FIELD.cpp_type = 4

MSGUSERSELECTZONE_RESULT_FIELD.name = "result"
MSGUSERSELECTZONE_RESULT_FIELD.full_name = ".ZoneCmd.MsgUserSelectZone.result"
MSGUSERSELECTZONE_RESULT_FIELD.number = 5
MSGUSERSELECTZONE_RESULT_FIELD.index = 4
MSGUSERSELECTZONE_RESULT_FIELD.label = 1
MSGUSERSELECTZONE_RESULT_FIELD.has_default_value = false
MSGUSERSELECTZONE_RESULT_FIELD.default_value = 0
MSGUSERSELECTZONE_RESULT_FIELD.type = 5
MSGUSERSELECTZONE_RESULT_FIELD.cpp_type = 1

MSGUSERSELECTZONE_GATEWAY_IP_FIELD.name = "gateway_ip"
MSGUSERSELECTZONE_GATEWAY_IP_FIELD.full_name = ".ZoneCmd.MsgUserSelectZone.gateway_ip"
MSGUSERSELECTZONE_GATEWAY_IP_FIELD.number = 6
MSGUSERSELECTZONE_GATEWAY_IP_FIELD.index = 5
MSGUSERSELECTZONE_GATEWAY_IP_FIELD.label = 1
MSGUSERSELECTZONE_GATEWAY_IP_FIELD.has_default_value = false
MSGUSERSELECTZONE_GATEWAY_IP_FIELD.default_value = 0
MSGUSERSELECTZONE_GATEWAY_IP_FIELD.type = 13
MSGUSERSELECTZONE_GATEWAY_IP_FIELD.cpp_type = 3

MSGUSERSELECTZONE_GATEWAY_PORT_FIELD.name = "gateway_port"
MSGUSERSELECTZONE_GATEWAY_PORT_FIELD.full_name = ".ZoneCmd.MsgUserSelectZone.gateway_port"
MSGUSERSELECTZONE_GATEWAY_PORT_FIELD.number = 7
MSGUSERSELECTZONE_GATEWAY_PORT_FIELD.index = 6
MSGUSERSELECTZONE_GATEWAY_PORT_FIELD.label = 1
MSGUSERSELECTZONE_GATEWAY_PORT_FIELD.has_default_value = false
MSGUSERSELECTZONE_GATEWAY_PORT_FIELD.default_value = 0
MSGUSERSELECTZONE_GATEWAY_PORT_FIELD.type = 13
MSGUSERSELECTZONE_GATEWAY_PORT_FIELD.cpp_type = 3

MSGUSERSELECTZONE.name = "MsgUserSelectZone"
MSGUSERSELECTZONE.full_name = ".ZoneCmd.MsgUserSelectZone"
MSGUSERSELECTZONE.nested_types = {}
MSGUSERSELECTZONE.enum_types = {}
MSGUSERSELECTZONE.fields = {MSGUSERSELECTZONE_ACCOUNT_FIELD, MSGUSERSELECTZONE_LOGIN_KEY_FIELD, MSGUSERSELECTZONE_CLIENT_TASKID_FIELD, MSGUSERSELECTZONE_LOGIN_SERVER_UID_FIELD, MSGUSERSELECTZONE_RESULT_FIELD, MSGUSERSELECTZONE_GATEWAY_IP_FIELD, MSGUSERSELECTZONE_GATEWAY_PORT_FIELD}
MSGUSERSELECTZONE.is_extendable = false
MSGUSERSELECTZONE.extensions = {}
MSGRECORDCHARTOLOGINDB_CHAR_INFO_FIELD.name = "char_info"
MSGRECORDCHARTOLOGINDB_CHAR_INFO_FIELD.full_name = ".ZoneCmd.MsgRecordCharToLoginDB.char_info"
MSGRECORDCHARTOLOGINDB_CHAR_INFO_FIELD.number = 1
MSGRECORDCHARTOLOGINDB_CHAR_INFO_FIELD.index = 0
MSGRECORDCHARTOLOGINDB_CHAR_INFO_FIELD.label = 1
MSGRECORDCHARTOLOGINDB_CHAR_INFO_FIELD.has_default_value = false
MSGRECORDCHARTOLOGINDB_CHAR_INFO_FIELD.default_value = nil
MSGRECORDCHARTOLOGINDB_CHAR_INFO_FIELD.message_type = PROTOSVRSERVERDATA_PB_SVRZONECHARINFO
MSGRECORDCHARTOLOGINDB_CHAR_INFO_FIELD.type = 11
MSGRECORDCHARTOLOGINDB_CHAR_INFO_FIELD.cpp_type = 10

MSGRECORDCHARTOLOGINDB.name = "MsgRecordCharToLoginDB"
MSGRECORDCHARTOLOGINDB.full_name = ".ZoneCmd.MsgRecordCharToLoginDB"
MSGRECORDCHARTOLOGINDB.nested_types = {}
MSGRECORDCHARTOLOGINDB.enum_types = {}
MSGRECORDCHARTOLOGINDB.fields = {MSGRECORDCHARTOLOGINDB_CHAR_INFO_FIELD}
MSGRECORDCHARTOLOGINDB.is_extendable = false
MSGRECORDCHARTOLOGINDB.extensions = {}
NOTIFYUPDATESERVERINFO_SERVER_UID_FIELD.name = "server_uid"
NOTIFYUPDATESERVERINFO_SERVER_UID_FIELD.full_name = ".ZoneCmd.NotifyUpdateServerInfo.server_uid"
NOTIFYUPDATESERVERINFO_SERVER_UID_FIELD.number = 1
NOTIFYUPDATESERVERINFO_SERVER_UID_FIELD.index = 0
NOTIFYUPDATESERVERINFO_SERVER_UID_FIELD.label = 1
NOTIFYUPDATESERVERINFO_SERVER_UID_FIELD.has_default_value = false
NOTIFYUPDATESERVERINFO_SERVER_UID_FIELD.default_value = 0
NOTIFYUPDATESERVERINFO_SERVER_UID_FIELD.type = 4
NOTIFYUPDATESERVERINFO_SERVER_UID_FIELD.cpp_type = 4

NOTIFYUPDATESERVERINFO_ONLINENUM_FIELD.name = "onlinenum"
NOTIFYUPDATESERVERINFO_ONLINENUM_FIELD.full_name = ".ZoneCmd.NotifyUpdateServerInfo.onlinenum"
NOTIFYUPDATESERVERINFO_ONLINENUM_FIELD.number = 2
NOTIFYUPDATESERVERINFO_ONLINENUM_FIELD.index = 1
NOTIFYUPDATESERVERINFO_ONLINENUM_FIELD.label = 1
NOTIFYUPDATESERVERINFO_ONLINENUM_FIELD.has_default_value = false
NOTIFYUPDATESERVERINFO_ONLINENUM_FIELD.default_value = 0
NOTIFYUPDATESERVERINFO_ONLINENUM_FIELD.type = 5
NOTIFYUPDATESERVERINFO_ONLINENUM_FIELD.cpp_type = 1

NOTIFYUPDATESERVERINFO_STATE_FIELD.name = "state"
NOTIFYUPDATESERVERINFO_STATE_FIELD.full_name = ".ZoneCmd.NotifyUpdateServerInfo.state"
NOTIFYUPDATESERVERINFO_STATE_FIELD.number = 3
NOTIFYUPDATESERVERINFO_STATE_FIELD.index = 2
NOTIFYUPDATESERVERINFO_STATE_FIELD.label = 1
NOTIFYUPDATESERVERINFO_STATE_FIELD.has_default_value = false
NOTIFYUPDATESERVERINFO_STATE_FIELD.default_value = 0
NOTIFYUPDATESERVERINFO_STATE_FIELD.type = 5
NOTIFYUPDATESERVERINFO_STATE_FIELD.cpp_type = 1

NOTIFYUPDATESERVERINFO.name = "NotifyUpdateServerInfo"
NOTIFYUPDATESERVERINFO.full_name = ".ZoneCmd.NotifyUpdateServerInfo"
NOTIFYUPDATESERVERINFO.nested_types = {}
NOTIFYUPDATESERVERINFO.enum_types = {}
NOTIFYUPDATESERVERINFO.fields = {NOTIFYUPDATESERVERINFO_SERVER_UID_FIELD, NOTIFYUPDATESERVERINFO_ONLINENUM_FIELD, NOTIFYUPDATESERVERINFO_STATE_FIELD}
NOTIFYUPDATESERVERINFO.is_extendable = false
NOTIFYUPDATESERVERINFO.extensions = {}
MSGKICKGATEWAYUSER_ACCOUNT_FIELD.name = "account"
MSGKICKGATEWAYUSER_ACCOUNT_FIELD.full_name = ".ZoneCmd.MsgKickGatewayUser.account"
MSGKICKGATEWAYUSER_ACCOUNT_FIELD.number = 1
MSGKICKGATEWAYUSER_ACCOUNT_FIELD.index = 0
MSGKICKGATEWAYUSER_ACCOUNT_FIELD.label = 1
MSGKICKGATEWAYUSER_ACCOUNT_FIELD.has_default_value = false
MSGKICKGATEWAYUSER_ACCOUNT_FIELD.default_value = ""
MSGKICKGATEWAYUSER_ACCOUNT_FIELD.type = 9
MSGKICKGATEWAYUSER_ACCOUNT_FIELD.cpp_type = 9

MSGKICKGATEWAYUSER_RESULT_FIELD.name = "result"
MSGKICKGATEWAYUSER_RESULT_FIELD.full_name = ".ZoneCmd.MsgKickGatewayUser.result"
MSGKICKGATEWAYUSER_RESULT_FIELD.number = 2
MSGKICKGATEWAYUSER_RESULT_FIELD.index = 1
MSGKICKGATEWAYUSER_RESULT_FIELD.label = 1
MSGKICKGATEWAYUSER_RESULT_FIELD.has_default_value = false
MSGKICKGATEWAYUSER_RESULT_FIELD.default_value = 0
MSGKICKGATEWAYUSER_RESULT_FIELD.type = 5
MSGKICKGATEWAYUSER_RESULT_FIELD.cpp_type = 1

MSGKICKGATEWAYUSER.name = "MsgKickGatewayUser"
MSGKICKGATEWAYUSER.full_name = ".ZoneCmd.MsgKickGatewayUser"
MSGKICKGATEWAYUSER.nested_types = {}
MSGKICKGATEWAYUSER.enum_types = {}
MSGKICKGATEWAYUSER.fields = {MSGKICKGATEWAYUSER_ACCOUNT_FIELD, MSGKICKGATEWAYUSER_RESULT_FIELD}
MSGKICKGATEWAYUSER.is_extendable = false
MSGKICKGATEWAYUSER.extensions = {}
MSGUNREGZONEUSER_ACCOUNT_FIELD.name = "account"
MSGUNREGZONEUSER_ACCOUNT_FIELD.full_name = ".ZoneCmd.MsgUnregZoneUser.account"
MSGUNREGZONEUSER_ACCOUNT_FIELD.number = 1
MSGUNREGZONEUSER_ACCOUNT_FIELD.index = 0
MSGUNREGZONEUSER_ACCOUNT_FIELD.label = 1
MSGUNREGZONEUSER_ACCOUNT_FIELD.has_default_value = false
MSGUNREGZONEUSER_ACCOUNT_FIELD.default_value = ""
MSGUNREGZONEUSER_ACCOUNT_FIELD.type = 9
MSGUNREGZONEUSER_ACCOUNT_FIELD.cpp_type = 9

MSGUNREGZONEUSER_RESULT_FIELD.name = "result"
MSGUNREGZONEUSER_RESULT_FIELD.full_name = ".ZoneCmd.MsgUnregZoneUser.result"
MSGUNREGZONEUSER_RESULT_FIELD.number = 2
MSGUNREGZONEUSER_RESULT_FIELD.index = 1
MSGUNREGZONEUSER_RESULT_FIELD.label = 1
MSGUNREGZONEUSER_RESULT_FIELD.has_default_value = false
MSGUNREGZONEUSER_RESULT_FIELD.default_value = 0
MSGUNREGZONEUSER_RESULT_FIELD.type = 5
MSGUNREGZONEUSER_RESULT_FIELD.cpp_type = 1

MSGUNREGZONEUSER.name = "MsgUnregZoneUser"
MSGUNREGZONEUSER.full_name = ".ZoneCmd.MsgUnregZoneUser"
MSGUNREGZONEUSER.nested_types = {}
MSGUNREGZONEUSER.enum_types = {}
MSGUNREGZONEUSER.fields = {MSGUNREGZONEUSER_ACCOUNT_FIELD, MSGUNREGZONEUSER_RESULT_FIELD}
MSGUNREGZONEUSER.is_extendable = false
MSGUNREGZONEUSER.extensions = {}

MsgGetServerInfo = protobuf.Message(MSGGETSERVERINFO)
MsgKickGatewayUser = protobuf.Message(MSGKICKGATEWAYUSER)
MsgRecordCharToLoginDB = protobuf.Message(MSGRECORDCHARTOLOGINDB)
MsgRegisterServer = protobuf.Message(MSGREGISTERSERVER)
MsgUnregZoneUser = protobuf.Message(MSGUNREGZONEUSER)
MsgUserSelectZone = protobuf.Message(MSGUSERSELECTZONE)
NotifyUpdateServerInfo = protobuf.Message(NOTIFYUPDATESERVERINFO)
ZONE_OP_GET_SERVER_INFO = 2
ZONE_OP_KICK_USER = 6
ZONE_OP_RECORD_CHAR_TO_LOGINDB = 4
ZONE_OP_REGISTER_SERVER = 1
ZONE_OP_UNREG_ZONEUSER = 7
ZONE_OP_UPDATE_SERVER_INFO = 5
ZONE_OP_USER_SELECT_ZONE = 3

