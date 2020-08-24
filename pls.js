db.createCollection("submissions", {
   validator: {
      $jsonSchema: {
         bsonType: "object",
         required: [ "_id", "participant_id", "problem_id", "language", "code" ],
         properties: {
            _id: {
               bsonType: "ObjectID",
               description: "must be of type ObjectID and is required"
            },
            participant_id: {
               bsonType: "ObjectID",
               description: "must be of type ObjectID and is required"
            },
            problem_id: {
               bsonType: "ObjectID",
               description: "must be of type ObjectID and is required"
            },
            language: {
               enum: [ "C", "C++03", "C++11", "C++17", "JAVA 8", "JAVA 11", "Python 2", "Python 3" ], //to be modified 
               description: "can only be one of the enum values and is required"
            },
            code: {
               bsonType: "string",
               description: "must be a string and is required"
            },
            status: {
               bsonType: "object",
               required: [ "verdict" ],
               properties: {
                  verdict: {
                     enum: [ "AC", "WA", "TLE" ],  /* to be modified depending on what we have */
                     description: "can only be one of the enum values if the field exists"
                  },
                  passed_test_cases: {
                     bsonType: "array",
                     description: "array of strings and not required"
                  }
                  time: {
                  	 bsonType: "double",
                     description: "must be a double if the field exists"
                  }
                  memory: {
                  	 bsonType: "double",
                     description: "must be a double if the field exists"
                  }
               }
            }
         }
      }
   }
})


db.createCollection("clarifications", {
   validator: {
      $jsonSchema: {
         bsonType: "object",
         required: [ "_id", "participant_id", "problem_id", "text" ],
         properties: {
            _id: {
               bsonType: "ObjectID",
               description: "must be of type ObjectID and is required"
            },
            participant_id: {
               bsonType: "ObjectID",
               description: "must be of type ObjectID and is required"
            },
            problem_id: {
               bsonType: "ObjectID",
               description: "must be of type ObjectID and is required"
            },
            
            text: {
               bsonType: "string",
               description: "must be a string and is required"
            },
            
         }
      }
   }
})