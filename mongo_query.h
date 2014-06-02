/*-------------------------------------------------------------------------
 *
 * mongo_query.h
 *
 * Type and function declarations for constructing queries to send to MongoDB.
 *
 * Copyright (c) 2012-2014 Citus Data, Inc.
 *
 *-------------------------------------------------------------------------
 */

#ifndef MONGO_QUERY_H
#define MONGO_QUERY_H

int32 AppenMongoValue(bson *queryDocument, const char *keyName, Datum value, bool isnull, Oid id);


#endif   /* MONGO_QUERY_H */
