
"use strict";

let ParamGet = require('./ParamGet.js')
let MessageInterval = require('./MessageInterval.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let LogRequestList = require('./LogRequestList.js')
let FileChecksum = require('./FileChecksum.js')
let FileTruncate = require('./FileTruncate.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let ParamSet = require('./ParamSet.js')
let FileRead = require('./FileRead.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let CommandHome = require('./CommandHome.js')
let CommandTOL = require('./CommandTOL.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let FileList = require('./FileList.js')
let FileWrite = require('./FileWrite.js')
let StreamRate = require('./StreamRate.js')
let FileRename = require('./FileRename.js')
let ParamPull = require('./ParamPull.js')
let WaypointClear = require('./WaypointClear.js')
let CommandBool = require('./CommandBool.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let WaypointPull = require('./WaypointPull.js')
let LogRequestData = require('./LogRequestData.js')
let ParamPush = require('./ParamPush.js')
let WaypointPush = require('./WaypointPush.js')
let SetMavFrame = require('./SetMavFrame.js')
let FileClose = require('./FileClose.js')
let FileMakeDir = require('./FileMakeDir.js')
let FileOpen = require('./FileOpen.js')
let FileRemove = require('./FileRemove.js')
let SetMode = require('./SetMode.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let CommandInt = require('./CommandInt.js')
let CommandLong = require('./CommandLong.js')

module.exports = {
  ParamGet: ParamGet,
  MessageInterval: MessageInterval,
  LogRequestEnd: LogRequestEnd,
  LogRequestList: LogRequestList,
  FileChecksum: FileChecksum,
  FileTruncate: FileTruncate,
  VehicleInfoGet: VehicleInfoGet,
  ParamSet: ParamSet,
  FileRead: FileRead,
  FileRemoveDir: FileRemoveDir,
  CommandHome: CommandHome,
  CommandTOL: CommandTOL,
  WaypointSetCurrent: WaypointSetCurrent,
  FileList: FileList,
  FileWrite: FileWrite,
  StreamRate: StreamRate,
  FileRename: FileRename,
  ParamPull: ParamPull,
  WaypointClear: WaypointClear,
  CommandBool: CommandBool,
  CommandTriggerInterval: CommandTriggerInterval,
  WaypointPull: WaypointPull,
  LogRequestData: LogRequestData,
  ParamPush: ParamPush,
  WaypointPush: WaypointPush,
  SetMavFrame: SetMavFrame,
  FileClose: FileClose,
  FileMakeDir: FileMakeDir,
  FileOpen: FileOpen,
  FileRemove: FileRemove,
  SetMode: SetMode,
  CommandTriggerControl: CommandTriggerControl,
  CommandInt: CommandInt,
  CommandLong: CommandLong,
};
