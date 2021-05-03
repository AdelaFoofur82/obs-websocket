#include "RequestResult.h"

RequestResult::RequestResult(RequestStatus statusCode, json responseData, std::string comment) :
	StatusCode(statusCode),
	ResponseData(responseData),
	Comment(comment)
{
}

RequestResult RequestResult::Success(json responseData)
{
	return RequestResult(RequestStatus::Success, responseData, "");
}

RequestResult RequestResult::Error(RequestStatus statusCode, std::string comment)
{
	return RequestResult(statusCode, nullptr, comment);
}