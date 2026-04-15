<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">

<xsl:template match="/">
    <html>
        <body>
            <h1>Student Details</h1>
            
            Name: 
            <xsl:value-of select="student/name"/>
            <br/>
            
            Roll No: 
            <xsl:value-of select="student/rollno"/>

        </body>
    </html>
</xsl:template>

</xsl:stylesheet>