// ArduinoJson - arduinojson.org
// Copyright Benoit Blanchon 2014-2018
// MIT License

#pragma once

#include "ArduinoJson/Namespace.hpp"

#include "ArduinoJson/ArrayRef.hpp"
#include "ArduinoJson/ObjectRef.hpp"
#include "ArduinoJson/VariantRef.hpp"

#include "ArduinoJson/DynamicJsonDocument.hpp"
#include "ArduinoJson/StaticJsonDocument.hpp"

#include "ArduinoJson/ArrayImpl.hpp"
#include "ArduinoJson/ArraySubscript.hpp"
#include "ArduinoJson/Data/VariantAsImpl.hpp"
#include "ArduinoJson/ObjectImpl.hpp"
#include "ArduinoJson/ObjectSubscript.hpp"
#include "ArduinoJson/VariantImpl.hpp"

#include "ArduinoJson/Json/JsonDeserializer.hpp"
#include "ArduinoJson/Json/JsonSerializer.hpp"
#include "ArduinoJson/Json/PrettyJsonSerializer.hpp"
#include "ArduinoJson/MsgPack/MsgPackDeserializer.hpp"
#include "ArduinoJson/MsgPack/MsgPackSerializer.hpp"

namespace ArduinoJson {
typedef ARDUINOJSON_NAMESPACE::ArrayRef JsonArray;
typedef ARDUINOJSON_NAMESPACE::ArrayConstRef JsonArrayConst;
typedef ARDUINOJSON_NAMESPACE::Float JsonFloat;
typedef ARDUINOJSON_NAMESPACE::Integer JsonInteger;
typedef ARDUINOJSON_NAMESPACE::ObjectRef JsonObject;
typedef ARDUINOJSON_NAMESPACE::ObjectConstRef JsonObjectConst;
typedef ARDUINOJSON_NAMESPACE::Pair JsonPair;
typedef ARDUINOJSON_NAMESPACE::UInt JsonUInt;
typedef ARDUINOJSON_NAMESPACE::VariantRef JsonVariant;
typedef ARDUINOJSON_NAMESPACE::VariantConstRef JsonVariantConst;
using ARDUINOJSON_NAMESPACE::DeserializationError;
using ARDUINOJSON_NAMESPACE::DynamicJsonDocument;
using ARDUINOJSON_NAMESPACE::Key;
using ARDUINOJSON_NAMESPACE::serialized;
using ARDUINOJSON_NAMESPACE::StaticJsonDocument;
}  // namespace ArduinoJson
