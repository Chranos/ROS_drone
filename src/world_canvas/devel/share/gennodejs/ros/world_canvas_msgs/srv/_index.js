
"use strict";

let DeleteMap = require('./DeleteMap.js')
let ResetDatabase = require('./ResetDatabase.js')
let RenameMap = require('./RenameMap.js')
let ListWorlds = require('./ListWorlds.js')
let PubAnnotationsData = require('./PubAnnotationsData.js')
let SetRelationship = require('./SetRelationship.js')
let SaveMap = require('./SaveMap.js')
let GetAnnotationsData = require('./GetAnnotationsData.js')
let DeleteAnnotations = require('./DeleteAnnotations.js')
let EditAnnotationsData = require('./EditAnnotationsData.js')
let PublishMap = require('./PublishMap.js')
let GetAnnotations = require('./GetAnnotations.js')
let YAMLImport = require('./YAMLImport.js')
let SaveAnnotationsData = require('./SaveAnnotationsData.js')
let ListMaps = require('./ListMaps.js')
let YAMLExport = require('./YAMLExport.js')
let SetKeyword = require('./SetKeyword.js')

module.exports = {
  DeleteMap: DeleteMap,
  ResetDatabase: ResetDatabase,
  RenameMap: RenameMap,
  ListWorlds: ListWorlds,
  PubAnnotationsData: PubAnnotationsData,
  SetRelationship: SetRelationship,
  SaveMap: SaveMap,
  GetAnnotationsData: GetAnnotationsData,
  DeleteAnnotations: DeleteAnnotations,
  EditAnnotationsData: EditAnnotationsData,
  PublishMap: PublishMap,
  GetAnnotations: GetAnnotations,
  YAMLImport: YAMLImport,
  SaveAnnotationsData: SaveAnnotationsData,
  ListMaps: ListMaps,
  YAMLExport: YAMLExport,
  SetKeyword: SetKeyword,
};
