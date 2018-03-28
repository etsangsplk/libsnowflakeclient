//
// Created by hyu on 3/27/18.
//

#ifndef SNOWFLAKECLIENT_TRANSFEROUTCOME_HPP
#define SNOWFLAKECLIENT_TRANSFEROUTCOME_HPP


namespace Snowflake
{
namespace Client
{

/**
 * File Transfer result from remote storage client.
 */
enum TransferOutcome
{
  SUCCESS, FAILED, TOKEN_RENEW, SKIPPED
};

}
}
#endif //SNOWFLAKECLIENT_TRANSFEROUTCOME_HPP