// Auto-generated. Do not edit!

// (in-package robot_open_quadruped.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class TransformedAngles {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.angles = null;
    }
    else {
      if (initObj.hasOwnProperty('angles')) {
        this.angles = initObj.angles
      }
      else {
        this.angles = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TransformedAngles
    // Serialize message field [angles]
    bufferOffset = _arraySerializer.float32(obj.angles, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TransformedAngles
    let len;
    let data = new TransformedAngles(null);
    // Deserialize message field [angles]
    data.angles = _arrayDeserializer.float32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.angles.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'robot_open_quadruped/TransformedAngles';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '900e68ab26db7b254c95cc40be37fb5c';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32[] angles
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TransformedAngles(null);
    if (msg.angles !== undefined) {
      resolved.angles = msg.angles;
    }
    else {
      resolved.angles = []
    }

    return resolved;
    }
};

module.exports = TransformedAngles;
