
"use strict";

let GetAnnotations = require('./GetAnnotations.js')
let SetKeyword = require('./SetKeyword.js')
let RenameMap = require('./RenameMap.js')
let YAMLExport = require('./YAMLExport.js')
let YAMLImport = require('./YAMLImport.js')
let DeleteMap = require('./DeleteMap.js')
let GetAnnotationsData = require('./GetAnnotationsData.js')
let SaveAnnotationsData = require('./SaveAnnotationsData.js')
let SetRelationship = require('./SetRelationship.js')
let PubAnnotationsData = require('./PubAnnotationsData.js')
let ListMaps = require('./ListMaps.js')
let DeleteAnnotations = require('./DeleteAnnotations.js')
let ListWorlds = require('./ListWorlds.js')
let EditAnnotationsData = require('./EditAnnotationsData.js')
let ResetDatabase = require('./ResetDatabase.js')
let SaveMap = require('./SaveMap.js')
let PublishMap = require('./PublishMap.js')

module.exports = {
  GetAnnotations: GetAnnotations,
  SetKeyword: SetKeyword,
  RenameMap: RenameMap,
  YAMLExport: YAMLExport,
  YAMLImport: YAMLImport,
  DeleteMap: DeleteMap,
  GetAnnotationsData: GetAnnotationsData,
  SaveAnnotationsData: SaveAnnotationsData,
  SetRelationship: SetRelationship,
  PubAnnotationsData: PubAnnotationsData,
  ListMaps: ListMaps,
  DeleteAnnotations: DeleteAnnotations,
  ListWorlds: ListWorlds,
  EditAnnotationsData: EditAnnotationsData,
  ResetDatabase: ResetDatabase,
  SaveMap: SaveMap,
  PublishMap: PublishMap,
};
