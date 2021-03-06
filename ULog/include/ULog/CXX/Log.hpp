/*******************************************************************************
 * The MIT License (MIT)
 * 
 * Copyright (c) 2016 Jean-David Gadina - www.xs-labs.com
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ******************************************************************************/

/*!
 * @header      Log.hpp
 * @copyright   (c) 2016, Jean-David Gadina - www.xs-labs.com
 */

#ifndef ULOG_CXX_LOG_H
#define ULOG_CXX_LOG_H

#include <ULog/Base.h>
#include <ULog/CXX/Message.hpp>
#include <cstdarg>

namespace ULog
{
    ULOG_EXPORT bool IsEnabled( void );
    ULOG_EXPORT void SetEnabled( bool value );
    
    ULOG_EXPORT void Clear( void );
    
    void AddLogFile( const std::string & path );
    
    ULOG_EXPORT void Log( const char * fmt, ... )                               ULOG_ATTRIBUTE_FORMAT( 1, 2 );
    ULOG_EXPORT void Log( const char * fmt, va_list ap )                        ULOG_ATTRIBUTE_FORMAT( 1, 0 );
    ULOG_EXPORT void Log( Message::Level level, const char * fmt, ... )         ULOG_ATTRIBUTE_FORMAT( 2, 3 );
    ULOG_EXPORT void Log( Message::Level level, const char * fmt, va_list ap )  ULOG_ATTRIBUTE_FORMAT( 2, 0 );
    
    ULOG_EXPORT void Emergency( const char * fmt, ... )         ULOG_ATTRIBUTE_FORMAT( 1, 2 );
    ULOG_EXPORT void Emergency( const char * fmt, va_list ap )  ULOG_ATTRIBUTE_FORMAT( 1, 0 );
    ULOG_EXPORT void Alert( const char * fmt, ... )             ULOG_ATTRIBUTE_FORMAT( 1, 2 );
    ULOG_EXPORT void Alert( const char * fmt, va_list ap )      ULOG_ATTRIBUTE_FORMAT( 1, 0 );
    ULOG_EXPORT void Critical( const char * fmt, ... )          ULOG_ATTRIBUTE_FORMAT( 1, 2 );
    ULOG_EXPORT void Critical( const char * fmt, va_list ap )   ULOG_ATTRIBUTE_FORMAT( 1, 0 );
    ULOG_EXPORT void Error( const char * fmt, ... )             ULOG_ATTRIBUTE_FORMAT( 1, 2 );
    ULOG_EXPORT void Error( const char * fmt, va_list ap )      ULOG_ATTRIBUTE_FORMAT( 1, 0 );
    ULOG_EXPORT void Warning( const char * fmt, ... )           ULOG_ATTRIBUTE_FORMAT( 1, 2 );
    ULOG_EXPORT void Warning( const char * fmt, va_list ap )    ULOG_ATTRIBUTE_FORMAT( 1, 0 );
    ULOG_EXPORT void Notice( const char * fmt, ... )            ULOG_ATTRIBUTE_FORMAT( 1, 2 );
    ULOG_EXPORT void Notice( const char * fmt, va_list ap )     ULOG_ATTRIBUTE_FORMAT( 1, 0 );
    ULOG_EXPORT void Info( const char * fmt, ... )              ULOG_ATTRIBUTE_FORMAT( 1, 2 );
    ULOG_EXPORT void Info( const char * fmt, va_list ap )       ULOG_ATTRIBUTE_FORMAT( 1, 0 );
    ULOG_EXPORT void Debug( const char * fmt, ... )             ULOG_ATTRIBUTE_FORMAT( 1, 2 );
    ULOG_EXPORT void Debug( const char * fmt, va_list ap )      ULOG_ATTRIBUTE_FORMAT( 1, 0 );
}

#endif /* ULOG_CXX_LOG_H */
