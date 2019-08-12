/*
 * Copyright (c) 2011-2019 Software AG, Darmstadt, Germany and/or Software AG USA Inc., Reston, VA, USA, and/or its subsidiaries and/or its affiliates and/or their licensors.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */

#include <boost/beast/core/detail/base64.ipp>
#include <iostream>

int main(int argc, char **argv)
{
	std::string input;
	std::cout << "Software AG base64 encoder" << std::endl << std::endl;
	std::cout << "Text to encode: ";
	std::getline(std::cin, input);

	size_t required_result_buf_size = boost::beast::detail::base64::encoded_size(input.size());

	// Add an additional element for null termination.
	char *result_buf = new char[required_result_buf_size + 1];
	result_buf[required_result_buf_size] = '\0';

	boost::beast::detail::base64::encode(result_buf, input.c_str(), input.size());

	std::cout << "Result: ";
	std::cout << result_buf << std::endl;

	delete result_buf;

	return 0;
}